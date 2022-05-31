#ifndef _LIB
#define _LIB
#include "lib.cpp"
#include <cstdio>
#include <cstring>
#include <iostream>
#define path_out fopen("../OUTPUT/dev.txt", "w+")

extern void init_N(FILE* file);
extern void adjust_data(int** A);
extern void output_data(FILE* fout, int** tt);
extern int** init_data(int N, int M);
extern void input_data(FILE* fin, int** tt);
extern void init_str_M(char* str, int size, FILE* file);
////extern void fpath(FILE** fin, FILE** fout, FILE** fin2);

extern int N, M;
extern int i, j;
extern char c[999]; //×Ö·û»º´æ

#endif