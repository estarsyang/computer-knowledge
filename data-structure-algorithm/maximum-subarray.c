# include <stdio.h>
// 给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
int maxSubseqSum1(int list[], int len);

int main() {
  int list[] = {-1,2,3,4};
  printf("%d\n", maxSubseqSum1(list, sizeof(list)/sizeof(list[0])));
  return 0;
}
// 暴力破解
int maxSubseqSum1(int list[], int len) {
  int thisSum, maxSum= 0;
  for (int i = 0; i < len; i++)
  {
    thisSum = 0;
    for (int j = i; j < len; j++)
    {
      thisSum += list[j];
      if(thisSum > maxSum) {
        maxSum = thisSum;
      }
    }
  }
  return maxSum;
  
}
// 分而治之


// 在线处理