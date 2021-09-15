# include <stdio.h>

// 静态本地变量
// 即在函数内部的变量，函数生命周期结束之后依然保存状态的变量，用 static 来声明
// 静态本地变量其实也就是全局变量，但是它有全局变量所没有的本地作用域。

int ga = 0;

void f();
void staticF();
void showP();

int main() {
  f();
  f();
  staticF();
  staticF();
  showP();
  return 0;
}

void f() { // 两次都是 1 3
  int a= 1;
  printf("in %s %d\n", __func__, a); // 1
  a+=2;
  printf("in %s %d\n", __func__, a); // 3

}
void staticF() { // 状态保持，数据累加。1 3 3 5
  static int a= 1;
  int b=0;
  printf("in %s %d\n", __func__, a);
  a+=2;
  printf("in %s %d\n", __func__, a);
}
void showP() {
  int a= 1;
  static int b= 1;
  printf("a =%p\n", &a);
  printf("b =%p\n", &b); // 与全局变量 ga 的内存地址仅相差一个int的长度
  printf("ga=%p\n", &ga);
}