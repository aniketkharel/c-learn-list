cmake_minimum_required(VERSION 3.15)
project(c__Playlist)

set(CMAKE_CXX_STANDARD 14)

#add_executable(c__Playlist stringManipulations/BasicOperations.cpp stringManipulations/Functions.cpp stringManipulations/Classes.cpp)

add_executable(c__Playlist stringManipulations/BasicOperations.cpp stringManipulations/Functions.cpp stringManipulations/Classes.cpp Pointers/Pointers.cpp Pointers/Pointer2.cpp PointerArithimatic/Arithimatic1.cpp PointerArithimatic/PointerWithArray.cpp workingWithPointers/FirstBasci.cpp workingWithPointers/LoneCoderPointers.cpp ExecricePointer/ArrayOfPointers.cpp ExecricePointer/VirtualFunctions.cpp signalHandling/Signals.cpp multithreading/Multthreading.cpp)