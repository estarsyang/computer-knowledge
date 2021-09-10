#include <stdio.h>

int search(int k, int length, int array[]);

int main()
{
  int number[] = {
      0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
  int k = 20;

  int ret = search(k, sizeof(number) / sizeof(number[0]), number);
  if (ret != -1)
  {
    printf("数字%d在数组中%d的位置\n", k, ret);
  }
  else
  {
    printf("没有找到\n");
  }

  return 0;
}

int search(int k, int length, int array[])
{
  int left = 0;
  int right = length - 1;
  int ret = -1;
  while (left < right)
  {
    int mid = (left + right) / 2;
    if (array[mid] == k)
    {
      ret = mid;
      // 找到了
      break;
    }
    else if (array[mid] < k)
    {
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }
  }
  return ret;
}
