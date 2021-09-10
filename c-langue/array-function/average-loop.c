#include <stdio.h>
// 求平均数，输入-1表示输入结束,最后输出平均数和比平均数大的值

int main() {
  int x;
  double sum =0;
  int cnt=0;
  int number[100];
  scanf("%d",&x);

  while(x != -1) {
    number[cnt] = x;
    sum += x;
    cnt++;
    scanf("%d",&x);
  }
  if(cnt > 0) {
    double average = sum / cnt;
    printf("%f\n", average);
    for(int i=0; i <cnt; i++) {
      if(number[i] > average) {
        printf("%d\n", number[i]);
      }
    }
  }
  
  return 0;
}
