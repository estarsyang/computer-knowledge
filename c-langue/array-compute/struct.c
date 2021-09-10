# include <stdio.h>
// 美分，输入数字 ，输出它的英语名称  1美分  输出 penny
/**
 * 1 penny
 * 5 nickel
 * 10 dime
 * 25 quarter
 * 50 half-dollar
 * 
 * */

int amount[] = {1,5,10,25,50};
char *name[] = {"penny", "nickel", "dime", "quarter", "half-dollar"};
struct {
  int amount;
  char *name;
} coins[] = {
  {1, "penny"},
  {5, "nickel"},
  {10, "dime"},
  {25, "quarter"},
  {50, "half-dollar"}
};

int main() {
  int k =1;
  for (int i = 0; i < sizeof(coins)/sizeof(coins[0]); i++) {
    if(k == coins[i].amount) {
      printf("%s\n", coins[i].name);
      break;
    }
  }


  return 0;
}
// 为什么不用两个对应的数组来实现，在没有学习到hash list的时候，因为这样两个数组之间是割裂的，不利于cache，也不利于更新