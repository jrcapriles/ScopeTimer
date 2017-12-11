# ScopeTimer

Simple scope timer that can be used without major modification to code. 

# Usage

Include the file "scopeTimer.h" located at the include folder. There are 2 macros available in the header file to easily create the scope timers anywhere. The timers are created in the constructor and last until the object is destroyed.

* CPU timer:

```
#include "scopeTimer.h"


void foo() {

	SCOPE_CPU_TIMER("foo function: ");
	...
}

```

* Wall timer:

```
#include "scopeTimer.h"

void foo() {

	SCOPE_WALL_TIMER("foo function: ");
}
```
