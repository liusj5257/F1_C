#ifndef _MY_LIB__
#define _MY_LIB__
#include "lib.cpp"
#include <cstdio>
#include <cstring>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

extern void init_N(FILE* file);
extern void adjust_data(int** A);
extern void output_data(FILE* fout, int** tt);
extern int** init_data(int N, int M);
extern void input_data(FILE* fin, int** tt);
extern void init_str_M(char* str, int size, FILE* file);
extern void fpath(FILE** fin, FILE** fout, FILE** fin2);
extern void path(char fname[__CHAR_BUFFER], char path_in[__CHAR_BUFFER],
                 char path_out[__CHAR_BUFFER]);

extern int N, M;
extern int i, j;
extern char c[__CHAR_BUFFER]; //×Ö·û»º´æ
extern FILE* fin;
extern FILE* fout;
extern FILE* fin2;

#endif