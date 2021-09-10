
#include <stdio.h>



int main() {
  // 计算某个数的阶乘
  int fact =1;
  int n=0;

  printf("请输入想计算的整数的阶乘");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    fact *=i;
  }
  printf("%d的阶乘是%d", n, fact);
  
  return 0;
}