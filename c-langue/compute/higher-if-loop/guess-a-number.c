#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 随机生成一个 0~100 的数，主动输入，计算后给出是否大于或者小于，最后得出这个数及输入的次数

int main(int argc, char **argv) {
    srand(time(0));
    int number = rand()%100 + 1;
    int count = 0;
    int a = 0;
    
    
    do{
        printf("请输入0~100之间的数\n");
        scanf("%d",  &a);
        count++;
        if(a > number) {
            printf("大了\n");
        } else {
            printf("小了\n");
        }
        
    } while(a != number);
    
    printf("恭喜你，答对了，这个数是%d,总共用了%d\n", a,count);

    return 0;
}
