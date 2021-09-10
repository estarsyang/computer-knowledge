#include <stdio.h>
// 求平均数，输入-1表示输入结束

int main() {
  int sum=0;
  int number=0;
  int n=0;
  /*
  // 多了1次判断，每次循环都要多判断一次
  do{
    printf("请输入一个数");
    scanf("%d", &number);
    if(number != -1){
      sum += number;
      n++;
    }
  } while (number != -1);
  */
  // 用while会比较好一些。

  printf("请输入一个数");
  scanf("%d", &number);
  
  while (number != -1)
  {
    sum += number;
    n++;
    printf("请输入一个数");
    scanf("%d", &number); 
  }

  printf("%f", 1.0 * sum/n); 
  
  return 0;
}
