# include <stdio.h>
// 根据用户的输入调用不同的函数 0-f 1-g 2-h ....
void f(int i) {
  printf("in f %d\n", i);
}
void g(int i) {
  printf("in g %d\n", i);

}
void h(int i) {
  printf("in h %d\n", i);

}
int main() {
  int a= 0;
  scanf("%d", &a); 
  // // 常规做法，如果后续增加的话，需要修改switch. 这里不讨论复杂情况
  // switch(a) {
  //   case 0: f(0);break;
  //   case 1: g(0);break;
  //   case 2: h(0);break;
  //   default:f(0);
  // }
  
  void (*fa[])(int) = {f,g,h};
  if(a >=0 && a < sizeof(fa)/sizeof(fa[0])) {
    (*fa[a])(0);
  }


  return 0;
}