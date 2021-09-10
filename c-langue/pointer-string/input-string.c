# include <stdio.h>


// 空格或者回车操作，将代表第二个字符的输入，仅仅以一个单词为准
int main() {
    // char word[8];
    // char word1[8];
    // // scanf("%s", word);
    // // scanf("%s", word1);
    // // printf("%s##%s##\n", word, word1);

    // // 限制scanf的输入
    // scanf("%7s", word);
    // scanf("%7s", word1);
    // printf("%s##%s##\n", word, word1);

    // 空字符串
    char buffer[8]="";
    printf("%s\n", buffer[0]);
    // 字符串错误定义
    // char* errorChar;// 未初始化，字符串定义时需要给定初始化的值
    // printf("%s", errorChar);
    char errorChar[]=""; // 字符串长度为1；
    printf("%s\n", errorChar[0]);

    return 0;
}
