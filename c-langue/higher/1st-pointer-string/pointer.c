# include <stdio.h>
// 表示得到了某个变量的地址，不能再指向其他变量
int i=1;
int * const q = &i;
*q=25; // ok
q++; // error

// 表示不能通过这个指针去修改那个变量，并不能使那个变量变成const

const int *p=&i;
*p = 26; // error
i=26; // ok
p=&j; // ok 可以赋给新的地址

// 转换
// 在函数中传入一个数据多的数组，array[10000000]，但是又不能让函数内部修改到,
// 如何去实现
int test(const int arr[]) { // 加 const

}