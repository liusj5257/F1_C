#include <stdio.h>
#include "lib.h"

using namespace std;

int main(int argc, char* argv[])
{
  // fpath(a, b, a2);
  path();                         //?路径
  init_N(fin2);                   //?初始化N
  init_str_M(c, 999, fin);        //?读取前置定义以及初始化M
  int** tt = init_data(N, M + 1); //*建立数据库
  input_data(fin, tt);            //?读取数据
  adjust_data(tt);                //?调整数据
  output_data(fout, tt);          //!输出文件
  return 0;
}

void path()
{
  char fname[] = __FILE__;
  char path_in[100] = "../../INPUT/STOP/";
  char path_out[100] = "../../OUTPUT/STOP/";
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

void adjust_data(int** A)
{
  for (i = 0; i < N; i++)
  {
    if (A[i][4] == 33)
    {
      A[i][4] = 36;
    }
  }
  for (i = 0; i < N; i++)
  {
    // if (A[i][1] == 0 || A[i][1] == 1 || A[i][1] == 7 || A[i][1] == 2 ||
    //     A[i][1] == 4 || (A[i][1] == 3 && A[i][3] < 5 && A[i][2] == 1)) {
    //   A[i][M] = 4;
    // } else if (A[i][0] == 2) {
    //   A[i][M] = 0;
    // } else
    A[i][M] = 4;
  }
}