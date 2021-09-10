# include <stdio.h>

int main(int argc, char **argv) {
  int a=0;
  int b=0;

  printf("请输入两个整数: ");
  scanf("%d %d",&a,&b);
  printf("%d + %d = %d",a,b, a+b);
  return 0;
}