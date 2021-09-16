# include <stdio.h>
// 根据用户的输入调用不同的函数 0-f 1-g 2-h ....
int add(int a,int b) {
  return a + b;
}
int subtract(int a,int b) {
  return a - b;
}
void call(int (*f)(int, int)) {
  printf("%d\n", (*f)(2,3));
}

int main() {
  call(add);
  call(subtract);

  return 0;
}