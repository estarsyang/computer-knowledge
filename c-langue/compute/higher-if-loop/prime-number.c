# include <stdio.h>


// 判断一个数是不是素数
int main() {

  int t= 0;
  printf("请输入任意一个整数\n");
  scanf("%d", &t);
  int isPrime = 1;

  for(int i=2; i<t; i++) {
    if(t % i == 0) {
      isPrime = 0;
      break;
    }
  }
  if(isPrime ==1) {
    printf("%d是素数", t);
  } else {
    printf("%d是不素数", t);
  }

  return 0;
}