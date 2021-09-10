# include <stdio.h>

int main() {

  int a = 0;
  scanf("%d", &a);

  switch (a) {

    case 0: 
      printf("输入的是零");
      break;
    case 1: 
      printf("输入的是一");
      break;
    case 2: 
      printf("输入的是二");
      break; 
    default: 
      printf("输入的是啥啊");
  }

  return 0;
}