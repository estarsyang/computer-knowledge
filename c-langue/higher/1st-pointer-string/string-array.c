# include <stdio.h>





int main() {
  
  char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'}; //  字符串表示方法
  char site1[] = "RUNOOB";
  printf("%s\n", site);
  printf("%s\n", site1);

  int i;
  char *a[] = { // 字符串数组 表示 
    "一",
    "二",
    "三",
    "四",
  };
  char a1[][10] = {'R', 'U', 'N', 'O', 'O'};
  int a2[] = {1,2,3,4,5,5,6,7};
  // // scanf("%d", &i);
  // i = 1;
  // printf("%s\n", a[i-1]);
  // for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
  //   printf("%s", a[i]);
  // }

  printf("%d\n",sizeof(a1));
  printf("%d\n",sizeof(a1[0]));
  printf("%d\n",sizeof(a2)/sizeof(a2[0]));
  for (int i = 0; i < sizeof(a1)/sizeof(a1[0]); i++) {
    printf("%s", a[i]);
  }
  return 0;
}
