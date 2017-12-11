#include <string>
#include <iostream>
#include <ctime>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>


class scopeTimer
{
protected:
	scopeTimer(const std::string& name, double start) : name_(name), start_(start) {} ;
	~scopeTimer(){};

	std::string name_;
	double start_;
};                                                                                                                                                                                                               



class CPUTimer : public scopeTimer {
public:

	CPUTimer(const std::string& name) : scopeTimer(name, get_cpu_time()){}	
	
	~CPUTimer() {

		double elapsed = (get_cpu_time() - start_) / double(CLOCKS_PER_SEC);
		std::cout << name_ << ": " << int(elapsed * 1000) << "ms" << std::endl;
	}

private:

        double get_cpu_time(){
		return (double)clock();
	}
};


class WallTimer : public scopeTimer {
public:

	WallTimer(const std::string& name) : scopeTimer(name, get_wall_time()) {}
	
	~WallTimer() {

		double elapsed = (get_wall_time() - start_);
                std::cout << name_ << ": " << elapsed << "ms" << std::endl;
	}
private:

	double get_wall_time(){
		struct timeval time;
	        gettimeofday(&time,NULL);
	        return double(time.tv_sec * 1000 + time.tv_usec/1000);
	}
};

//#define TIMER(name) Timer timer__(name);
#define TIMERCPU(name) CPUTimer timer__(name);
#define TIMERWALL(name) WallTimer timer__(name);
#define TIMER(name, walltime) if(walltime) TIMERWALL(name) else TIMERCPU(name);
