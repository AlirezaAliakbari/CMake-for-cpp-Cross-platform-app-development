# 2. Project with CMake on Windows | CMake starts here 

## 2.1. Editor 
* our editor is  `Visual Studio Code`
> Extention that you should install :
>> CMake Tools
>> C/C++

## 2.2. Compiler
* our Compiler is `Microsoft Visual Studio` as `MSVC`
> we need to install Microsoft Visual Studio community 2022 or 2019

### 2.2.1 git
* We need  install git from  www.git-scm.com 
> the reason why we install git is because we can go through Linux and clone our compiled code by git\

## 2.3. First C++ project Using CMake

 * creating a new repository on GitHub named CMakeSeries
> add a README file 
> add .gitignore
> create a repository at the end 
>> I created this rep here:  https://github.com/AlirezaAliakbari/CMakeSeries

* mkdir a new location for your code
* and then by your `PowerShell` git clone the created repository named CMakeSeries there
* Open your .gitgnore by `notepad++`
* edit lines as below:
```
CMakeLists.txt.user
CMakeCache.txt
CMakeFiles
CMakeScripts
Testing
Makefile
cmake_install.cmake
install_manifest.txt
compile_commands.json
CTestTestfile.cmake
_deps
*build*
*.vscode* 

```
* Create a folder and drop your CPP code which you are going to compile there
> you can open the CPP file by your `PowerShell` in vscode by using `code .` that folder consists CPP file
>> inside the vscode use `shift+control+p` then go to  `Edit configuration UI`
>>> change your compiler path as mine: `C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.33.31629/bin/Hostx64/x64/cl.exe`
>>> change C++ standard to c++20
>> you should see the .vscode file that is generated

## 2.4. CMake commands
*creat a file name `CMakeLists.txt` 
> open it by vscode and write this commands inside it :
```cmake
cmake_minimum_required(VERSION 3.5) 
project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "The leading helloworld app"
        LANGUAGES CXX) 
add_executable(HelloAppBinary helloworld.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
```
> helloworld is my CPP file name

## 2.5. Running CMake : out-of-source builds

* set up separate folder in your cpp file location named `build`
* cd in that folder write `make ..` 
> by this way your compiled code and build files are going to be created in your build folder
>> you should see `helloworld.sln`
>> you can build it with Microsoft visual studio or use `msbuild <the sln file> ` inside the developer PowerShell
*  After hitting enter we can see built files like binary files 
> we can create a `source`

## 2.6. Pushing codes to GitHub

* cd to the dir of the `.gitignore` file
* `git add .`
*  `git commit -m "Part2 code" `
*   `git push`

## 2.7. Building C++ code with CMake on Linux

> open Linux os 
>> clone your project in a directory 
>> make a build directory using `mkdir build`
>> the cd to build and type `cmake ../source/`
>> the generation and configuration will be done after some minutes

> for making the binaries :
>> type `make` in the build directory
>> you will see **HellowBinarry** after some seconds 
>> run it by `./HelloBinary/`

## 2.8. move back to Windows 

* in Linux
> use `git add . ` after making some changes  in the directory that consists of  **.gitignore**
> use `git commit -m  "Apply changes from Linux" `
> use `git push` 

* in Windows 
> use `git fetch`  in the directory that consists of  **.gitignore**
> use `git merge`
> go to **buikd** directory abd type `msbuild HelloApp`
> run your code using `./Debug.HelloAppBinary.exe`



 
