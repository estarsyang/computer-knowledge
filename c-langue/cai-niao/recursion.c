# include <stdio.h>

double factorial(unsigned int i);
int fibonaci(int i);

int  main()
{
  int i = 5;
  printf("%d 的阶乘为 %f\n", i, factorial(i));
  int sum = 0;
  int fibonaciItem = 0;
  // 前10个斐波那契数
  for(int j=0; j<10;j++) {
    fibonaciItem = fibonaci(j);
    printf("%d ", fibonaciItem);
    sum += fibonaciItem;
  }
  printf("\n");
  printf("%d\n", sum);
  return 0;
}
double factorial(unsigned int i)
{
  int product = i;
  if(i <= 1) {
    return 1;
  }
  return product * factorial(i - 1);
}
int fibonaci(int i) {
  if(i == 0) {
    return 0;
  }
  if(i == 1) {
    return 1;
  }
  return fibonaci(i - 1) + fibonaci(i -2);
}
