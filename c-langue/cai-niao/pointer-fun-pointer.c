#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
 
/* 要生成和返回随机数的函数 */
int * getRandom( )
{
   static int  r[10];
   int i;
 
   /* 设置种子 */
   srand( (unsigned)time( NULL ) );
   for ( i = 0; i < 10; ++i)
   {
      r[i] = rand();
      printf("%d\n", r[i] );
   }
 
   return r;
}
 
/* 要调用上面定义函数的主函数 */
int main ()
{
  //  /* 一个指向整数的指针 */
  //  int *p;
  //  int i;
 
  //  p = getRandom();
  //  for ( i = 0; i < 10; i++ )
  //  {
  //      printf("*(p + [%d]) : %p\n", i, (p + i) );
  //      printf("*(p + [%d]) : %d\n", i, *(p + i) );
  //  }
  int a[3] = {0,1,2};
  int *p = a;
  for (int i = 0; i < 3;i++ ) {
    printf("*(p + [%d]) : %p\n", i, p + i );
  }
   return 0;
}