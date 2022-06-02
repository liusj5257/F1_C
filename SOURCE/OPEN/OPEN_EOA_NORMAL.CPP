#include "lib.h"

char fname[] = __FILE__;
char PATH_IN[__CHAR_BUFFER] = "../../INPUT/OPEN/";
char PATH_OUT[__CHAR_BUFFER] = "../../OUTPUT/OPEN/";
int main(int argc, char* argv[])
{
  // fpath(a, b, a2);
  path(fname, PATH_IN, PATH_OUT);    //?璺�寰�
  init_N(fin2);                      //?鍒濆�嬪寲N
  init_str_M(c, __CHAR_BUFFER, fin); //?璇诲彇鍓嶇疆瀹氫箟浠ュ強鍒濆�嬪寲M
  int** tt = init_data(N, M + 1);    //*寤虹珛鏁版嵁搴�
  input_data(fin, tt);               //?璇诲彇鏁版嵁
  adjust_data(tt);                   //?璋冩暣鏁版嵁
  output_data(fout, tt);             //!杈撳嚭鏂囦欢
  return 0;
}

void adjust_data(int** A)
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
    if (A[i][1] == 0 || A[i][1] == 1 || A[i][1] == 7 || A[i][1] == 2 ||
        A[i][1] == 4 || (A[i][1] == 3 && A[i][3] < 5 && A[i][2] == 1))
    {
      A[i][M] = 1;
    }
    else if (A[i][0] == 8)
    {
      A[i][M] = 8;
    }
  }
}
