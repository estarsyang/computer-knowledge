#include <stdio.h>

enum DAY
{
  MON = 1,
  TUE,
  WED,
  THU,
  FRI,
  SAT,
  SUN
} day;
enum
{
    ENUM_0,
    ENUM_10 = 10,
    ENUM_11
} noErgodic; // 非连续枚举，无法使用for遍历,强行遍历的效果与预期不一致。
enum color { red=1, green, blue } favorite_color;

int main()
{
  day = WED;

  printf("%d\n", day);
  // 遍历枚举元素
    for (day = MON; day <= SUN; day++) {
        printf("枚举元素：%d \n", day);
    }
    /* 用户输入数字来选择颜色 */
    printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue): ");
    scanf("%u", &favorite_color);
 
    /* 输出结果 */
    switch (favorite_color)
    {
    case red:
        printf("你喜欢的颜色是红色");
        break;
    case green:
        printf("你喜欢的颜色是绿色");
        break;
    case blue:
        printf("你喜欢的颜色是蓝色");
        break;
    default:
        printf("你没有选择你喜欢的颜色");
    }
  return 0;

}
