# include <stdio.h>

int main() {

  int bill = 0;
  int price = 0;

  printf("请输入你的商品价格\n");
  scanf("%d", &price);
  printf("请输入你支付的金额\n");
  scanf("%d", &bill);
  int other = bill - price;
  if(other > 0) {
    printf("找您%d元", other);
  } else {
    printf("资金不足，还需要%d元", other);
  }
  
  
  return 0;

}