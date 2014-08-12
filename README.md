CImg-hello-world
================

This project is a hello world project using CImg library (http://cimg.sourceforge.net/).

Required libraries:
- CMake 2.8.12.2
- CImg 1.5.7
Note that the project may not work with different versions of the libraries.

The project contains
- a single c++ code, main.cpp
- cmake related files, CMakeLists.txt and extern/FindCImg.cmake
- an input image, build/lena.pgm

The main.cpp uses CImg library to
- load the input image, build/lena.pgm
- display the image
- save the image as lena.bmp

To run the code,
- $ cd build
- $ cmake ..
- $ make
- $ ./CImgHelloWorld