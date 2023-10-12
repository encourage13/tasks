#pragma once
#include <iostream>
#include <time.h> 
#include <iomanip>
#include <stdlib.h>
using namespace std;
void rand_array(int* array, const int n);
void print_array(int* array, const int n);
void choice(int* array, const int n, int pr, int sr);
void puzeer(int* array, const int n, int pr, int sr);
void copy_array(int* array, int* array2, const int n);
void choice_up_to_down(int* array, const int n, int pr, int sr);
void puzeer_up_to_down(int* array, const int n, int pr, int sr);