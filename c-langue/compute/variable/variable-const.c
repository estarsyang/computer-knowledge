# include <stdio.h>

int main(int argc, char **argv) {
  const int AMOUNT = 100;
  int price =0;
  printf("please input your price: \n");
  scanf("%d",&price);
  int change = AMOUNT - price;
  printf("output for you %d\n", change);
  return 0;
}