# include <stdio.h>
# include <string.h>
/**
 * 
 * strlen 字符串长度，不包含末尾的\0
 * strcmp 比较两个两个字符串大小，s1 s2 相等则为0，
 * 不相等则为两个字符串的差值，比如 'abc'和'bbc'就是 'a' 和 'b'的差值，
 * 从第一个开始计算，如果不等就判断可以判断是否大于或小于，不会再计算其他的
 * 
 * strcpy 字符串拷贝 不安全，容易超出 s1的长度 安全版本  strncpy(s1,s2,n) n 为拷贝的长度，多出部分则舍弃
 * strcat 把 s2接到s1的后面，并返回s1 不安全，容易超出 s1的长度 strncat(s1,s2,n) n 为拷贝的长度，多出部分则舍弃
 * strchr 字符串找某个函数，返回第一个的指针
 * strstr
 * */

int main() {

  char line[]="hello";
  printf("strlen=%lu\n", strlen(line));
  printf("sizeof=%lu\n", sizeof(line));
  char s1[]="abc";
  char s2[]="Abc";
  printf("%d\n", strcmp(s1,s2));
  printf("%d\n", 'a'-'A');
  char s3[]="abc";
  char s4[]="abc ";
  /**
   *  a b c \0
   *  a b c 空格 \0
   * */

  printf("%d\n", strcmp(s3,s4)); // -32 0 - 空格 -->> -32
  
  return 0;
}
