#include <stdio.h>

// 输入数量不确定的[0,9]范围内的整数，统计每一种数字出现的次数，输入-1表示结束
int main() {
  const int LENGTH = 10;
  int x;
  printf("请输入[0,9]范围内的整数\n");
  scanf("%d",&x);
  int list[LENGTH];
  for(int i=0; i<LENGTH; i++) {
    list[i] = 0;
  }
  while(x != -1) {
    if(x >= 0 && x <= 9) {
      list[x]++;
    } else {
      printf("输入的值不合法，请重新输入\n");
    }
    scanf("%d",&x);
  }
  for(int i=0; i<LENGTH; i++) {
    printf("%d:%d\n",i, list[i]);
  }
  return 0;
}