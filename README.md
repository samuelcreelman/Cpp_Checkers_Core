# Cpp_Checkers
A game of checkers made with C++ and SDL2

# Dependencies
- cmake: [Installation](https://cmake.org/download/)
- make: [Installation](https://www.gnu.org/software/make/)
    - Linux: make is installed by default on most Linux distros
    - Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
    - Windows: [installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
- gcc: [Installation](https://gcc.gnu.org/install/)
    - Linux: gcc / g++ is installed by default on most Linux distros
    - Mac: [install Xcode command line tools](https://developer.apple.com/xcode/features/)
    - Windows: [MinGW](http://www.mingw.org/)
> For the SDL Libraries on Linux, prefer using `apt` or `apt-get` over downloading source
- SDL: [Installation](https://www.libsdl.org/download-2.0.php)
- SDL-image: [Installation](https://www.libsdl.org/projects/SDL_image/)
- SDL-ttf: [Installation](https://www.libsdl.org/projects/SDL_ttf/)

# Build Instructions
1. clone this repo
2. `mkdir build`
3. `cd build`
4. `cmake ..`
5. `make`
6. `./Checkers`
