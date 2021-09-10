#include <stdio.h>

int main() {
  // 5尺7寸等于多高

  printf("请分别输入身高的英尺和英寸");

  double foot;
  double inch;
  scanf("%lf %lf", &foot, &inch);

  printf("身高是%f米\n", (foot + inch/12)*0.3048);

  return 0;
}