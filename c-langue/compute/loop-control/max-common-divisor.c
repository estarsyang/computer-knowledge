# include <stdio.h>
// 求输入的最大公约数
int main() {
  /*
  // 枚举法
  int a,b;
  int ret = 1;
  int min=a;

  scanf("%d %d",&a,&b);

  if(a < b) {
    min=a;
  } else {
    min=b;
  }

  for (int i = 1; i < min; i++)
  {
    if(a% i == 0) {
      if(b% i == 0) {
        ret = i;
      }
    }
  }

  printf("%d 和 %d的最大公约是%d", a,b,ret);
  */
  // 相除法
  // 如果b等于0，计算结束，a就是最大公约数
  // 否则，计算a除以b的余数，让a等于b，而b等于那个余数
  /*   a  b   t
   *   12 18  12
   *   18 12  6
   *   12 6   0
   *   6  0   0
   */

    int a,b,t;
    int originA,originB;
    printf("请输入两个整数\n");
    scanf("%d %d",&a,&b);
    originA = a;
    originB = b;
    while (b != 0) {
      t = a % b;
      a = b;
      b = t;
    }

    printf("%d 和 %d 的最大公约数是%d\n", originA,originB, a);
    

  return 0;

}