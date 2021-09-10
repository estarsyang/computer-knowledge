# include <stdio.h>



// putchar
/**
 * int putchar(int c);
 * 向标准输出一个字符
 * 返回写了几个字符，EOF(-1)表示写失败
 */
// getchar
/**
 * int getchar(void);
 * 从标准输入读入一个字符
 * 返回类型时int是为了返回EOF(-1)
 * 结束输入
 *  window -->> ctrl+z
 *  unix -->>ctrl+d
 */
int main() {
  int ch;
  while ((ch = getchar()) != EOF) {
    putchar(ch);
  }
  printf("EOF");
  return 0;
}