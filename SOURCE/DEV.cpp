#include <stdio.h>
<<<<<<< HEAD
#include "lib.h"

using namespace std;

int main(int argc, char* argv[])
{
  // fpath(a, b, a2);
  path();                         //?路径
=======
#include <stdlib.h>

#include "lib.h"
using namespace std;
#define path_in fopen("../INPUT/dev.txt", "r+")
#define path_out fopen("../OUTPUT/dev.txt", "w+")

extern void fpath(FILE** fin, FILE** fout, FILE** fin2);
int main(int argc, char* argv[])
{
  FILE* fin = 0;
  FILE* fout = 0;
  FILE* fin2 = 0;
  FILE** a = 0;
  FILE** b = 0;
  FILE** a2 = 0;

  a = &fin;
  b = &fout;
  a2 = &fin2;
  fpath(a, b, a2);                //?路径
>>>>>>> 0109d9bf46e7f5bb29110211fd0d2642124a1771
  init_N(fin2);                   //?初始化N
  init_str_M(c, 999, fin);        //?读取前置定义以及初始化M
  int** tt = init_data(N, M + 1); //*建立数据库
  input_data(fin, tt);            //?读取数据
  adjust_data(tt);                //?调整数据
  output_data(fout, tt);          //!输出文件
  return 0;
}

<<<<<<< HEAD
void path()
{
  char fname[] = __FILE__;
  char path_in[999] = "../INPUT/";
  char path_out[999] = "../OUTPUT/";
  strcat(path_in, fname);
  strcat(path_out, fname);
  path_in[strlen(path_in) - 4] = '\0';
  path_out[strlen(path_out) - 4] = '\0';
  strcat(path_in, (char*)".vparam");
  strcat(path_out, (char*)".vparam");
  printf("%s\n%s\n", path_in, path_out);
  fin = fopen(path_in, "r+");
  fin2 = fopen(path_in, "r+");
  fout = fopen(path_out, "w+");
}

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
=======
void fpath(FILE** fin, FILE** fout, FILE** fin2)
{
  if ((*fin = path_in) == NULL)
  {
    printf("can not open data file\n");
    exit(0);
  }
  *fin2 = path_in;
  *fout = path_out;
}
>>>>>>> 0109d9bf46e7f5bb29110211fd0d2642124a1771
