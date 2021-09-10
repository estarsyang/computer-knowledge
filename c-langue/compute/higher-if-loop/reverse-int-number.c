#include <stdio.h>

// 任意位数的整数进行逆序排列，前面如果有零则去掉零。比如 123 -->> 321 700 -->> 7
int main() {
  int a=0;
  int ret = 0;
  printf("请输入一个整数\n");
  scanf("%d",&a);
  
  while(a > 0) {
      int digit = a%10;
      ret = ret*10 + digit;
      a /=10;
      
      
  }
  printf("%d\n",ret);
  return 0;
}