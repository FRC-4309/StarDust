# BetterDoubleSolenoid

```cpp
#include "StarDust/pneumatics/BetterDoubleSolenoid.hpp"
```

`BetterDoubleSolenoid` is a wrapper class that provides more expressive commands and built-in functions.

# Initialization

#### `BetterDoubleSolenoid(int port1, int port2)`

Setup a solenoid wired to ports `port1` and `port2` on the PCM.

#### `BetterDoubleSolenoid(int port1, int port2, bool invert)`

Setup a solenoid wired to ports `port1` and `port2` on the PCM. Invert based on if `invert` is true.

## RobotFunctions

Currently there are no interactions with robot functions.

## Functions

#### `void Extend()`

Extend the piston.

#### `void Retract()`

Retract the piston.

#### `void Off()`

Turn off the solenoid valves.

#### `void Invert()`

Switch from extended to retracted, and vice versa.