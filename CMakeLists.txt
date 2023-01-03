cmake_minimum_required(VERSION 3.21)
project(Cola_Lista_Doble_Generica)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cola_Lista_Doble_Generica main.cpp Nodo.h RuntimeException.h Lista.h ColaLista.cpp ColaLista.h)
