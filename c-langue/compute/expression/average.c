# include <stdio.h>

int main() {
  int a,b;

  printf("请输入两个整数");
  
  scanf("%d %d",&a, &b);

  double ave = (a+b)/2.0;

  printf("整数%d和整数%d的平均值为%f",a,b,ave);

  return 0;
}