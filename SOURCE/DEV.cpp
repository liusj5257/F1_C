#include <stdio.h>
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
  fpath(a, b, a2);                //?·��
  init_N(fin2);                   //?��ʼ��N
  init_str_M(c, 999, fin);        //?��ȡǰ�ö����Լ���ʼ��M
  int** tt = init_data(N, M + 1); //*�������ݿ�
  input_data(fin, tt);            //?��ȡ����
  adjust_data(tt);                //?��������
  output_data(fout, tt);          //!����ļ�
  return 0;
}

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