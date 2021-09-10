# include <stdio.h>

// 1角 2角 5角 的硬币凑出 10元以下的金额，比如 凑 1元 1 + 2*2 + 5依次类推
int main() {

  int x = 0;
  printf("请输入1~10以内的整数\n");
  scanf("%d", &x);

  for (int one = 1; one < 10*x;one++) {
    for (int two = 1; two < 10*x/2; two++) {
      for (int five = 1; five < 10*x/5; five++) {
        if(one + two*2 + five*5 == x*10) {
          printf("%d个1角 %d个2角 %d个5角可以得到%d元\n",one,two,five,x);
        }
      }
      
    }
  }
  return 0;
}