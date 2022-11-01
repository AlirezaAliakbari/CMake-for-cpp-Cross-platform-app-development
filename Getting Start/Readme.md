# 1. CMake Definition and Installation

## 1.1. what  CMake is? 
* CMake is built system **generator**
*  It generates `CMakeLists.txt` which stores the project information based on our platform ( Linux, Windows, Mac, ...)

## 1.2. Cmake on Windows
### 1.2.1. Windows Compilers:
* **gcc** and **MingW**
* Visual Studio as **Microsoft compilers**

### 1.2.2. Installing gcc on windows and testing it
> first check the gcc at your command prompt : `gcc --version`
* go to `winlibs.com` and install the latest version of gcc based on your CPU architecture
* Extract the downloaded file
* add `c:/MingW/bin` to your **PATH**
* create a simple cpp code as below :
```cpp
#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
} 
```
* save the code as `main.cpp`
* Open your command prompt and run the following syntax:
```
g++ -g -std=c++<<version>> main.cpp -o output.cpp 
```
* you compiled your cpp file based on your host machine !!
* go to the directory by your command prompt and run it 
```
.\output.exe
```

## 1.3. How CMake changes better 
> imagine that your going to compile your code to different machines or **your target is different**, we don't want to
> build our programms by directly calling all compilers like as before

## 1.4. Installing CMake on Windows 
* go to `cmake.com` and download the latest version
* extract file downloaded
* add  `C:/CMake/bin` to your PATH

