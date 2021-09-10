# include <stdio.h>

void swap();

int main() {
  int a=5;
  int b=6;
  swap(a,b);
  // c调用函数时，只能传值过去
  printf("a: %d, b: %d\n",a,b);
  return 0;
}

void swap(int x, int y) {

  int t = x;
  x = y;
  y = t;
}