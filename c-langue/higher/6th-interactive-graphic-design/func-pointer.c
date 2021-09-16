# include <stdio.h>

void f() {
  printf("in f\n");
}
int main() {
  int a= 5;
  int *p = &a;
  printf("%p\n", p);
  printf("%p\n", main); // 函数是有地址
  printf("%p\n", f); // 函数是有地址

  // 函数指针
  void(*pf)() = f;
  printf("%p\n", pf); // 地址已经相同
  f();
  (*pf)(); // 同样也能执行
  return 0;
}