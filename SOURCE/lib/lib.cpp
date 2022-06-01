#include "lib.h"
<<<<<<< HEAD
#include <stdio.h>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define __CHAR_BUFFER 1000

int N = 0, M = 0;
int i = 0, j = 0;
char c[__CHAR_BUFFER]; //×Ö·û»º´æ
FILE* fin = 0;
FILE* fout = 0;
FILE* fin2 = 0;
=======

int N = 0, M = 0;
int i = 0, j = 0;
char c[999]; //×Ö·û»º´æ

void adjust_data(int** A)
{
  for (i = 0; i < N; i++)
  {
    // if (A[i][4] == 22) {
    //  A[i][4] = 21;
    //}
  }
  for (i = 0; i < N; i++)
  {
    if (A[i][1] == 0 || A[i][1] == 1 || A[i][1] == 7 || A[i][1] == 2 ||
        A[i][1] == 4 || (A[i][1] == 3 && A[i][3] < 5 && A[i][2] == 1))
    {
      A[i][M] = 0;
    }
    else
    {
      A[i][M] = 1;
    }
  }
}
>>>>>>> 0109d9bf46e7f5bb29110211fd0d2642124a1771

void output_data(FILE* fout, int** tt)
{
  fprintf(fout, "%s", c);
  //   fprintf(fout, "Values");
  for (i = 0; i < N; i++)
  {
    fprintf(fout, "\t\t");
    for (j = 0; j < M + 1; j++)
    {
      fprintf(fout, "%d\t", tt[i][j]);
    }
    fprintf(fout, "\n");
  }
  fclose(fout);
  printf("success!");
}
// void fpath(FILE** fin, FILE** fout, FILE** fin2)
// {
//   if ((*fin = path_in) == NULL)
//   {
//     printf("can not open data file\n");
//     exit(0);
//   }
//   *fin2 = path_in;
//   *fout = path_out;
// }

int** init_data(int N, int M)
{
  int** tt = new int*[N];
  for (int i = 0; i < N; ++i)
  {
    tt[i] = new int[M];
  }
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < M; j++)
    {
      tt[i][j] = 0;
      // printf("%d\t", tt[i][j]);
    }
  }
  return tt;
}

void init_N(FILE* file)
{
  char c;
  while (c = fgetc(file), c != EOF)
  {
    if (c == '\n')
    {
      N++; /* code */
    }
  }
<<<<<<< HEAD
  N -= 9; //?Êµ¼ÊÐÐÊý
  printf("N = %d\t", N);
=======
  N -= 7;
  printf("%d\t", N);
>>>>>>> 0109d9bf46e7f5bb29110211fd0d2642124a1771
  fclose(file);
  // M = 5;
}
void init_str_M(char* str, int size, FILE* file)
{
  int i = 0;
  int j = 0;
  char c;
  while (c = fgetc(file), j <= 7 && c != EOF && i < size - 1)
  {
    if (j == 6 && c == 'I')
    {
      M++;
<<<<<<< HEAD
=======
      printf("%d\t", M);
>>>>>>> 0109d9bf46e7f5bb29110211fd0d2642124a1771
    }
    if (j == 6 && c == 'S')
    {
      str[i++] = 'A';
      str[i++] = 'u';
      str[i++] = 't';
      str[i++] = 'o';
      c = fgetc(file);
      c = fgetc(file);
      c = fgetc(file);
      c = fgetc(file);
      c = fgetc(file);
    }
    else
    {
      if (c == '\n')
      {
        if (j == 4)
        {
          str[i++] = '_';
          str[i++] = 'O';
          str[i++] = 'U';
          str[i++] = 'T';
        }
        j++;
      }
      str[i] = c;
      ++i;
    }
  }
<<<<<<< HEAD
  printf("M = %d\t", M);
=======
>>>>>>> 0109d9bf46e7f5bb29110211fd0d2642124a1771
  str[i] = c;
  ++i;
  j = 0;
  while (c = fgetc(file), j <= 4)
  {
    j++;
    str[i] = c;
    ++i;
  }
  if (c != '\n')
  {
    ungetc(c, stdin);
  }
  str[i] = '\0';
}
void input_data(FILE* fin, int** tt)
{
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < M; j++)
    {
      fscanf(fin, "%d", &tt[i][j]);
    }
  }
  fclose(fin);
}
<<<<<<< HEAD

void path(char fname[__CHAR_BUFFER], char path_in[__CHAR_BUFFER],
          char path_out[__CHAR_BUFFER])
{
  // char path_in[__CHAR_BUFFER] = PATH_IN;
  // char path_out[__CHAR_BUFFER] = PATH_OUT;
  strcat(path_in, fname);
  strcat(path_out, fname);
  path_in[strlen(path_in) - 4] = '\0';
  path_out[strlen(path_out) - 4] = '\0';
  strcat(path_in, (char*)".vparam");
  strcat(path_out, (char*)"_OUT.vparam");
  printf("%s\n%s\n", path_in, path_out);
  fin = fopen(path_in, "r+");
  fin2 = fopen(path_in, "r+");
  fout = fopen(path_out, "w+");
}
=======
>>>>>>> 0109d9bf46e7f5bb29110211fd0d2642124a1771
