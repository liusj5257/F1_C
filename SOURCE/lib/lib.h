<<<<<<< HEAD
#ifndef _MY_LIB__
#define _MY_LIB__
=======
#ifndef _LIB
#define _LIB
>>>>>>> 0109d9bf46e7f5bb29110211fd0d2642124a1771
#include "lib.cpp"
#include <cstdio>
#include <cstring>
#include <iostream>
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
=======
#define path_out fopen("../OUTPUT/dev.txt", "w+")
>>>>>>> 0109d9bf46e7f5bb29110211fd0d2642124a1771

extern void init_N(FILE* file);
extern void adjust_data(int** A);
extern void output_data(FILE* fout, int** tt);
extern int** init_data(int N, int M);
extern void input_data(FILE* fin, int** tt);
extern void init_str_M(char* str, int size, FILE* file);
<<<<<<< HEAD
extern void fpath(FILE** fin, FILE** fout, FILE** fin2);
extern void path(char fname[__CHAR_BUFFER], char path_in[__CHAR_BUFFER],
                 char path_out[__CHAR_BUFFER]);

extern int N, M;
extern int i, j;
extern char c[__CHAR_BUFFER]; //×Ö·û»º´æ
extern FILE* fin;
extern FILE* fout;
extern FILE* fin2;
=======
////extern void fpath(FILE** fin, FILE** fout, FILE** fin2);

extern int N, M;
extern int i, j;
extern char c[999]; //×Ö·û»º´æ
>>>>>>> 0109d9bf46e7f5bb29110211fd0d2642124a1771

#endif