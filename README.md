#SD Log

## Generate Makefiles
In the root directory create `build/`

From `build/` run `cmake ../src`

## Exeucting the  Project
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