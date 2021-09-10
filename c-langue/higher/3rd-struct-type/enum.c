# include <stdio.h>


enum COLOR {RED, GREEN, BLUE, NUMBERCOLOR };
void f(enum COLOR c);
int main() {
  // int color = -1; // 枚举平常使用
  // char *colorName = NULL;
  // printf("请输入你喜欢的颜色代码:\n");
  // scanf("%d", &color);
  // switch (color) {
  //   case RED: colorName = "red"; break;
  //   case GREEN: colorName = "green"; break;
  //   case BLUE: colorName = "blue"; break;
  //   default: colorName = "unknow";break;
  // }
  // printf("你喜欢的颜色是%s\n", colorName);
  // enum COLOR t = RED; // 枚举函数使用
  // f(t);
  int color = -1; // 妙用enum最后一个的值，获得枚举的长度，从而构造合适的数组结构
  char *colorNames[NUMBERCOLOR] = {
    "red", "green", "blue"
  };
  char *colorName = NULL;
  printf("请输入你喜欢的颜色代码:\n");
  scanf("%d", &color);
  if(color >= 0 && color < NUMBERCOLOR) {
    colorName = colorNames[color];
  } else {
    colorName = "unknow";
  }
  printf("你喜欢的颜色是%s\n", colorName);
  return 0;
}
void f(enum COLOR c) {
  printf("%d\n",c);
}