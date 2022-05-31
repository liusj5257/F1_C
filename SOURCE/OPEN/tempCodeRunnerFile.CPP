#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  // 返回最一个 \ 所在的位置
  const char *str = __FILE__;

  // 跳过 \
    str++;

  // 输出
  printf("%s\n", str);

  system("pause");
  return 0;
}