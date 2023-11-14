# TraceX Library

The TraceX library is a C library that provides a function to start a given function 
in a separate thread and then monitor it using `ptrace` in a manner similar to `strace`. 
This library only utilizes system calls and standard C library structures.

## Functionality

The library offers a single function:

```c
void trace(void (*f)(void *), void *param);
```
`trace` initiates the given function `f` in a separate thread with the provided parameter `param`. 
It then monitors the execution of this function using ptrace.

## Building Instructions

### Using Makefile

To build the library using the Makefile provided, follow these steps:

```bash
make
```

This command will compile the library and generate the necessary files.

### Using CMake

Alternatively, the library can be built using CMake. Follow these steps:

```bash
mkdir build
cd build
cmake ..
make
```

This will create a build directory, generate build files using CMake, and compile the library within that directory.

## Usage

To use this library in your C code, include the library header file:

```c
#include "libtraceX.h"
```

Then, utilize the trace function by providing a function pointer and the necessary parameter:

```c
void myFunction(void *param) {
    // Your code here
}

int main() {
    // Example usage
    // Replace 'myFunction' with your desired function and provide the necessary parameter
    trace(myFunction, NULL); // Replace NULL with the actual parameter if required
    // Additional code
    return 0;
}
```

## Important Notes

Ensure that the system supports ptrace.
The library relies on system calls and libc structures.
Use this library responsibly and only in scenarios where monitoring and tracing execution are necessary.

## License

This library is provided under the terms of the [MIT License](https://opensource.org/licenses/MIT).