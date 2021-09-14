// union 特殊的数据类型，允许你在同一内存位置存储不同的数据，但是只会保存最后一次的数据
/**
 * union Data {
 *  int a;
 *  int b;
 * };
 * union Data data;
 * data.a =1;
 * data.b =2;
 */
// https://www.runoob.com/cprogramming/c-unions.html
# include <stdio.h>
#include <string.h>
int main() {
  union Data {
    int a;
    int b;
    char  str[20];
  };
  union Data data;
  data.a =1;
  data.b =2;
  strcpy( data.str, "C Programming");
  printf("%d\n", data.a);
  printf("%d\n", data.b);
  printf("%s\n", data.str);
}
