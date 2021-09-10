# include <stdio.h>
# include <string.h>
// strlen
// strcmp
// strcpy     char * stpcpy(char * dst, const char * src);
// strcat
// strchr
// strstr

int mylen(const char *s) { // strlen
    int idx=0;
    while(s[idx] != '\0') {
        idx++;
    }
    return idx++;
}
int mycmp(const char *s1, const char *s2) {
    // int idx=0;
    // while(s1[idx] == s2[idx] && s1[idx]!='\0') {
    //     idx++;
    // }
    // return s1[idx] - s2[idx];
  while (*s1 == *s2 && *s1 != '\0') {
    *s1++;
    *s2++;
  }
  return *s1 - *s2;
}

int mycpy(char *dst, const char *src) {
  // int idx= 0; // 数组版本
  // while (src[idx])
  // {
  //   dst[idx] = src[idx];
  //   idx++;
  // }
  // dst[idx] = '\0';
  // return dst;
  // char * ret = dst; // 指针版本
  // while(*src) {
  //   *dst = *src;
  //   dst++;
  //   src++;
  // }
  // *dst='\0';
  // return ret;
}

int main() {
    
    char line[]="hello";
    printf("%d\n", mylen(line));
    printf("%d\n", strlen(line));
    printf("%d\n", sizeof(line));
    char s1[]="abc";
    char s2[]="abc";
    printf("%d\n", strcmp(s1,s2));
    printf("%d\n", mycmp(s1,s2));
    return 0;
}