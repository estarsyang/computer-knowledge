# include <stdio.h>
// 宏 
// tips 
// 1. 末尾最好不加分号；
// 2. 函数使用时，要注意加括号，会直接的文本替换
# define PI 3.14159 // 基本定义
# define FORMAT "%f\n" // 可定义任何值
# define PI2 2*PI // PI *2 可使用之前的宏
# define PRT printf("%f\n", PI2); \
          printf("%f\n", PI2) // 换行
# define cube(x) ((x) * (x) * (x))
# define test(x) (x * 3.14159)

    
int main() {
  printf("%f\n", PI);
  printf(FORMAT, PI);
  printf(FORMAT, PI2);
  PRT;
  cube(5); // ((5)*(5)*(5))
  test(5+2); // 期待的效果应该是 (5+2)*3.14159，
  // 但不是的，它是直接替换(5 + 2 * 3.14159)

  return 0;
}