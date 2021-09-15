#ifndef __MAX__HEAD__
#define __MAX__HEAD__
int max(int a, int b);
extern int gAll; // 全局变量声明，extern 字眼，会被编译器所理解
struct Node {
  int a;
  int b;
};
// #ifndef、#define、#endif 这三个关键字，是标准头文件引用，
// 是为了避免重复引用造成多次声明的后果。
# endif