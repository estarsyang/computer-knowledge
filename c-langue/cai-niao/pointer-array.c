#include <stdio.h>
 
const int MAX = 3;
 
int main ()
{
  //  int  var[] = {10, 100, 200};
  //  int i, *ptr[MAX];
 
  //  for ( i = 0; i < MAX; i++)
  //  {
  //     printf("%p\n", &var[i]);
  //     ptr[i] = &var[i]; /* 赋值为整数的地址 */
  //  }
  //  for ( i = 0; i < MAX; i++)
  //  {
  //     printf("Value of var[%d] = %p\n", i, ptr[i] );
  //     printf("Value of var[%d] = %d\n", i, *ptr[i] );
  //  }
  const char *names[] = {
                   "Zara Ali",
                   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
   };
   int i = 0;
   for ( i = 0; i < MAX; i++)
   {
      printf("Value of names[%d] = %s\n", i, names[i] );
   }
   return 0;
}