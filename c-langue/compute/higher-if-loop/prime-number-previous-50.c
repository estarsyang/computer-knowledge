# include <stdio.h>


// 判断 100以内的素数
int main() {

  int count=0;
  int x = 2;
  
  while(count < 50) {
      
      int isPrime = 1;
      for(int i=2; i<x; i++) {
      if(x % i == 0) {
          isPrime = 0;
          break;
        }
      }
      if(isPrime ==1) {
        printf("%d ", x);
        count++;
      }
      x++;
  }
  return 0;
}