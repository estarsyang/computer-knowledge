# include <stdio.h>

int main() {
  int a = 5;
  int b = 6;
  int t;
  t=a;
  a=b;
  b=t;

  printf("a的值为%d,b的值为%d",a,b);

  return 0;
}