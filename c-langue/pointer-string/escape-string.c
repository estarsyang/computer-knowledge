# include <stdio.h>

/**
 * \b 回退一格        \"  双引号
 * \t 下一个制表位     \'  单引号
 * \n 换行            \\ 反斜杠本身
 * \r 回车
 * 
 * 
 * */
int main() {

  printf("123\b\n");
  printf("123\bA\n");
  printf("123\tad\n");
  printf("1\tad\n");
  printf("112321\rrsadfas\n");
  printf("\"\'\\\n");

  return 0;
}
