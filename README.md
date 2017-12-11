# ScopeTimer

Simple scope timer that can be included without major modification to code. 

# Usage

Include the file "scopeTimer.h" located at the include folder. There are 2 macros available in the header file to easily create the scope timers anywhere. The timers are created in the constructor and last until the object is destroyed.

* Create a timer using CPU time: SCOPE_CPU_TIMER("Name")
* Create a timer using Wall time: SCOPE_WALL_TIMER("Name")

Check the test folder to see examples of usages.
