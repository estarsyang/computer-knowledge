#include <stdio.h>

// 求 1~10,20~30,35~45的和

void getSum(int start, int end) {
  int i;
  int sum = 0;
  for (i = start; i < end; i++) {
    sum += i;
  }
  printf("%d到%d的和是%d\n", start,end,sum);
}
int main() {
  getSum(1,10);
  getSum(20,30);
  getSum(35,45);

  return 0;
}