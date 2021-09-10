#include <stdio.h>

int main() {
  int time1, minutes1;
  int time2, minutes2;
  printf("请输入第一个时分，以空格分开");
  scanf("%d %d", &time1, &minutes1);
  printf("请输入第二个时分，以空格分开");
  scanf("%d %d", &time2, &minutes2);
  int t1 = time1*60+minutes1;
  int t2 = time2*60+minutes2;

  int t = t2-t1;

  printf("时间差为%d时%d分", t/60, t%60);
  return 0;
}