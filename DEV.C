#include <stdio.h>
#include <stdlib.h>

#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;
//#define N 280  //!修改用例个数
//#define M 5  //!修改元素个数

int i, j;
char c[999];
int x = 0, y = 0;
int N = 0, M = 0;

extern void FGetStr(char* str, int size, FILE* file);
extern void input_data(FILE* fin, int (*A)[M + 1]);
extern void adjust_data(int (*A)[M + 1]);  //!修改判断结果
extern void output_data(FILE* fout, int (*A)[M + 1]);
extern void fpath(FILE** fin, FILE** fout);  //!修改文件路径

int main(int argc, char* argv[])
{
  FILE* fin = 0;
  FILE* fout = 0;
  FILE** a = 0;
  FILE** b = 0;
  a = &fin;
  b = &fout;
  int N = 0, M = 0;
  //*设置文件路径
  fpath(a, b);
  //*读取数据
  FGetStr(c, 999, fin);
  // int A[N][M + 1] = {0};
  // int* const A = (int*)malloc(sizeof(int) b);

  float** tt = new float*[N];
  for (int i = 0; i < N; ++i)
  {
    tt[i] = new float[M];
  }

  input_data(fin, A);
  //*判断输出
  adjust_data(A);
  //*输出数据
  output_data(fout, A);
  return 0;
}

void input_data(FILE* fin, int (*A)[M + 1])
{
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < M; j++)
    {
      fscanf(fin, "%d", &A[i][j]);
    }
  }
  fclose(fin);
}
void adjust_data(int (*A)[M + 1])
{
  for (i = 0; i < N; i++)
  {
    if (A[i][4] == 21)
    {
      A[i][4] = 22;
    }
  }
  for (i = 0; i < N; i++)
  {
    if (A[i][1] == 0 || A[i][1] == 1 || A[i][1] == 7 ||
        (A[i][1] == 3 && A[i][3] < 5 && A[i][2] == 1))
    {
      A[i][M] = 1;
    }
    else if (A[i][0] == 8)
    {
      A[i][M] = 8;
    }
  }
}

void output_data(FILE* fout, int (*A)[M + 1])
{
  fprintf(fout, "%s", c);
  //  fprintf(fout, "Values");
  for (i = 0; i < N; i++)
  {
    fprintf(fout, "\t\t");
    for (j = 0; j < M + 1; j++)
    {
      fprintf(fout, "%d\t", A[i][j]);
    }
    fprintf(fout, "\n");
  }
  fclose(fout);
  printf("success!");
}

void fpath(FILE** fin, FILE** fout)
{
  // if ((fin = fopen("C:/Users/l/Desktop/1.txt", "r")) == NULL)
  // if((fin=fopen("C:\\Users\\l\\Desktop\\1.txt","r"))==NULL)
  if ((*fin = fopen("./INPUT/dev.txt", "r+")) == NULL)
  {
    printf("can not open data file\n");
    exit(0);
  }
  *fout = fopen("./OUTPUT/dev.txt", "w+");
}

void FGetStr(char* str, int size, FILE* file)
{
  int i = 0;
  int j = 0;
  char c, y[99] = {0};
  int x[2];
  while (c = fgetc(file), j <= 7 && c != EOF && i < size - 1)
  {
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
  while (c = fgetc(file), c != EOF)
  {
    if (c == '\n')
    {
      N++;
    }
  }
  M = 5;
}
