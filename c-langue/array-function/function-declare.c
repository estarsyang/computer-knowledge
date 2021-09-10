# include <stdio.h>
void sum(int x, int y); // 函数声明
int main() {
  sum(1,2);
  return 0;
}
void sum(int x, int y) { // 函数定义
  printf("%d", x + y);
}
