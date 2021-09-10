# include <stdio.h>
// 指针，就是内存地址，指针变量，就是用来存放内存地址的变量。
// 声明  type *var_name;
/***
 * int *ip; 整数
 * double *dp; 
 * float *fp;
 * char *ch; 
 */
int main() {
  int var  = 20;
  int *ip;
  ip =&var;
   printf("var 变量的地址: %p\n", &var  );
 
   /* 在指针变量中存储的地址 */
   printf("ip 变量存储的地址: %p\n", ip );
 
   /* 使用指针访问值 */
   printf("*ip 变量的值: %d\n", *ip );

  //  int *ptr=NULL;
  //  printf("ptr的地址是%p\n", ptr);
   int  array[] = {10, 100, 200};
   int  i, *ptr;

    const int MAX = 3;
   /* 指针中的数组地址 */
   ptr = array;
   for ( i = 0; i < MAX; i++)
   {
 
      printf("存储地址：var[%d] = %p\n", i, ptr );
      printf("存储值：var[%d] = %d\n", i, *ptr );
 
      /* 指向下一个位置 */
      ptr++;
   }
   
  return 0;
}