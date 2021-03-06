#SD Log

## Generate Makefiles

In the root directory create `build/`

From `build/` run `cmake ../src`

## Exeucting the Project

From `build` run `make`
Then, run the executable

## Generating a Static Library

Need to use the following method (see C1R3 for more context)

```
add_library(message
  STATIC
    Message.hpp
    Message.cpp
  )
```

After successful compilation a `.a` file will be created for the library.

We need to tell the executable to use the library with the `target_link_libraries(hello-world message)` method

### Types of Libraries

You can choose to use a STATIC or SHARED library. For basic projects you can use a STATIC library. A SHARED library can be called if/when needed. You can read more [here](https://www.geeksforgeeks.org/difference-between-static-and-shared-libraries/).
Your other options include OBJECT and MODULE

# File IO

Base class for input: `<istream>` (cin)
Base class for outupt: `<ostream>` (cout)

base class for both file operations: `<fstream>`
this is a subclass of iostream
maintains a filebuf object as their internal stream buffer which performs the operations
filebuf is created when open operator is called
there is an intermediate input buffer and intermediate output buffer that store the i/o operatorations
this can be triggered when once the buffer is filled up, when the sync is called or when the object is closed
for more filebuf see: http://www.cplusplus.com/reference/fstream/filebuf/
base class for file writing stream: `<ofstream>`
base class for file reading stream: `<ifstream>`

# C++ Developement Tools

You can use clang to auto format the code you are writing
to get the executable, you can brew install it
install vscode extension for it
use command palette and search for format document with: choose...
choose clang
