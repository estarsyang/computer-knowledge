# include <stdio.h>
# include <stdlib.h>
void dynamic_arr();
void computeMemo();
int main(){
  // dynamic_arr();
  // computeMemo();
  int *p,*q;
  char *t,*s;
    t=(char*)malloc(sizeof(char));
    s=(char*)malloc(sizeof(char));
    printf("%p\n",t);
    printf("%p\n",s);
    free(t);
    free(s);
    p=(int*)malloc(sizeof(int));
    printf("%p\n", p);
    free(p);
    q=(int*)malloc(sizeof(int));
    printf("%p\n", q);
    free(q);
    int *a;
    a=(int *)malloc(0);
    printf("%lu", sizeof(a));
  return 0;
}

// 输入数据
/**
 * 如果输入数据时，先告诉你个数，然后输入，要记录每个数据。
 * c99 可以用变量做数组定义的大小，c99之前呢
 * int *a=(int *)malloc(n*sizeof(int));
 */
void dynamic_arr(){
  int number;
  int *a;
  printf("请输入数量:\n");
  scanf("%d", &number);
  a =(int *)malloc(number*sizeof(int));
  for(int i=0; i<number; i++) {
    scanf("%d",&a[i]);
  }
  for(int j= number -1; j >= 0; j--) {
    printf("%d", a[j]);
  }
  free(a); // 释放动态分配的内存
}

// malloc
/**
 * # include <stdlib.h>
 * void* malloc(size_t size)
 * 向malloc申请的空间的大小是以字节为单位的
 * 返回的结果是 void*，需要类型转换为自己想要的类型
 *  (int *) malloc(n*size(int));
 * 如果没有空间了，直接返回 0 或者NULL。
 * 
 */
// 如何计算还能分配多少空间
void computeMemo() {
  void *p;
  int cnt=0;
  while ((p=malloc(100 * 1024 *1024)))
  {
    printf("分配中");
    cnt++;
  }
  printf("分配了%d00MB的空间", cnt);
}
// free
/**
 * 把申请得来的空间还给"系统"
 * 申请过来的空间，最终都应该要还
 * 只能还申请来的空间的首地址，即 申请的xxxxx, 就只能还xxxx，不能对xxx进行加减乘除
 * 常见问题
 *    1. 申请了没free  没长时间运行内存逐渐下降
 *      新手 - 忘了
 *      老手 - 找不到合适的时机
 *    - free过了再 free
 *    - 地址变过了，直接去free
 */

void freeMalloc() {
  void *p;
  // // p=malloc(100*1024);
  // // p++;
  // // free(p); // error 原来的地址已经被改变，无法对p进行释放
  // free(p); // error, 未赋值，无法释放。
  free(NULL); // 可以
}
// 相邻两次malloc得到的空间是否是连续的呢？
// 你得到的空间的实际大小是否就是你要求的大小呢？如果你malloc零长度会得到什么结果呢？试试看，然后尝试对结果开展猜测和解释。

// 不论输入值的大小为多少，在malloc的内部最小的内存分配大小是一个定值（一般是8B），
// 因为malloc需要用这部分空间来维护堆上的内存块链表。
// 所以当用户申请一块0B的空间时，malloc实际分配的空间是8B，如果用户申请的空间是X，则malloc实际分配的空间是(对齐(X)+8)。
// 这也是为什么malloc分配的空间千万不能越界使用的原因：堆的内部链表结构将被破坏。