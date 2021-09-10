# include <stdio.h>

void f(int *p);
void g(int k);

int main() {
    
    int i = 5;
    printf("  %p\n", &i);
    f(&i);
    g(i);
    
    return 0;
}
void f(int *p){
    printf("p=%p\n", p); // 指针变量保存 变量I的的地址
    printf("*p=%d\n", *p); // 这里拿到 变量i的地址上值，相当于拿到了 i的值
    *p = 26; // 这里修改了 变量i的值，从而影响了外部变量
}

void g(int k) {
    printf("k=%d\n",k); // 26, f中如果不修改变量i的值，则输出为 5;
}
