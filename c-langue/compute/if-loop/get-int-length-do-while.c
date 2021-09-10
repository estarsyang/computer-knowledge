#include <stdio.h>

int main() {
  // 输入整数，返回该整数的位数
  printf("请输入一个整数");
  int inputInt = 0;
  scanf("%d", &inputInt);

  int n=0;

  do {
    n++;
  inputInt /=10;
  } while(inputInt>0);
  printf("该整数的位数是%d",n);


  return 0;
}