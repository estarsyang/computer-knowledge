#include <stdio.h>

// 90以上 A 80及以上为B，以此类推
int main() {
  int score = 0;
  printf("请输入学生成绩:");
  scanf("%d", &score);
  score /=10;
  switch(score) {
    case 9:
      printf("A");
      break;
    case 8:
      printf("B");
      break;
    case 7:
      printf("C");
      break;
    case 6:
      printf("D");
      break;
    default:
      printf("不及格");

  }



  return 0;
}