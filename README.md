# lr_1_2025
Лабораторна робота 1 з дисципліни "Програмування"

//run (via c++ 20)

clang++ -std=c++20 main.cpp -o main 
./main

//compile project

cmake -S . -B build
cmake --build build -j
./build/main
