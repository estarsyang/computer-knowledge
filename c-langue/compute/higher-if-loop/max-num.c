#include <stdio.h>

int main() {
  printf("输入三个整数，判断最大值");
  int a=0;
  int b=0;
  int c=0;
  scanf("%d %d %d", &a, &b, &c);

  int max = a;
  if(a>=b) {
    if(a>=c) {
      max = a;
    } else {
      max = c;
    }
  } else {
    if(b >= c) {
      max = b;
    } else {
      max = c;
    }
  }

  printf("最大值为%d", max);



  return 0;
}