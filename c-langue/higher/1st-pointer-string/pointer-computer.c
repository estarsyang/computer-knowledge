# include <stdio.h>
void arrayFor();


int main() {
  char ac[]={0,1,2,3,4,5,6,7,8,9};
  char *p=&ac[0];
  char *p1=&ac[5];
  // 字符串指针相加相差1,相减也差1
  printf("p =%p\n", p); // 0x7ffee3e3f90e 
  printf("p+1 =%p\n", p+1); // 0x7ffee3e3f90f
  printf("p1 =%p\n", p1); // 0x7ffee3e3f913
  printf("p1- p=%d\n", p1 - p); // 5 0x7ffee3e3f913 - 0x7ffee3e3f90f
  
  int ai[]={0,1,2,3,4,5,6,7,8,9};
  int *q=&ai[0];
  int *q1=&ai[6];
  // int指针相加4， 即一个 int 所占的字节大小，相减同理，但是会帮我们转化为整数，及再除以 sizeof(int)
  printf("q =%p\n", q); // 0x7ffee56ca8e0 
  printf("q+1 =%p\n", q+1); // 0x7ffee56ca8e4
  printf("q1 =%p\n", q1); // 0x7ffee56ca8f8
  printf("q1- q=%d\n", q1 - q); // 6 0x7ffee56ca8f8 - 0x7ffee56ca8e4 -->> 24/4 -->> 6
  // 因此，指针的增加是按照sizeof来增加的，即 sizeof(char) -->> 1   sizeof(int) -->> 4
  arrayFor();
  return 0;
}

//  *p++
/**
 * 取出p所指的那个数据来，完事之后顺便把p移到下一个位置去
 * *的优先级高，但是没有++高
 * 常用于数组类的连续空间操作
 * 在某些cpu上，这可以直接被翻译成一条汇编指令
 */

void arrayFor() {
  char ac[]={0,1,2,3,4,5,6,7,8,9, -1};
  char *p=&ac[0];
  for (int i = 0; i < sizeof(ac)/sizeof(ac[0]); i++) {
    printf("%d\n", ac[i]);
  }
  while(*p != -1) {
    printf("%d\n", *p++);
  }
  
}

// 指针比较
/**
 * <, <=,==,>,>=,!= 都可以对指针做
 * 比较他们在内存中的地址
 * 数组中的单元地址肯定是线性递增的
 */

// 0 地址
/**
 * 0 地址不能随便碰。
 * NULL 是一个预定定义的符号，表示 0 地址。
 */
// 指针类型
/**
 * 无论指向什么类型，所有指针的大小都是一样的，因为都是地址
 * 但是指向不同类型的指针是不能直接互相赋值的
 * 这是为了避免用用错指针
 */
// 指针类型转换
/**
 * void* 表示不知道指向什么东西的指针
 *    计算时与char*相同，但不相通
 * 指针也可以转换类型
 *    int *p=&i;void *q=(void*)p;
 * 这里没有改变p所指的变量的类型，而是让后人用不同的眼光通过p看它所指的变量
 *    即 我不再当你是int了，我认为你就是个void
 */

// 指针作用
/**
 * 1. 需要传入较大的数据时用作参数
 * 2. 传入数组后对数组做操作
 * 3. 函数返回不止一个结果
 *      需要用函数来修改不止一个变量
 * 4. 动态申请的内存。
 */