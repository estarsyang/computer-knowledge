#include <stdio.h>
int main() {

  int inputNum = 0;
  printf("请输入0~999之间的整数");
  scanf("%d", &inputNum);
  int single = inputNum%10;
  int ten = inputNum%100/10;
  int hundred = inputNum/100;

  printf("反转之后的值为%d", single*100+ten*10+hundred);

  return 0;
}