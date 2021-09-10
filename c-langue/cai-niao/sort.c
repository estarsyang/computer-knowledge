#include <stdio.h>
// 排序算法
void bubble_sort(int arr[], int len);
void select_sort(int arr[], int len);
int main()
{
  int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
  int len = sizeof(arr) / sizeof(arr[0]);
  // bubble_sort(arr, len);
  select_sort(arr, len);
  int i;
  for (i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}

void bubble_sort(int arr[], int len)
{
  int temp;
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = 0; j < len - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
void select_sort(int arr[], int len)
{
  int temp;
  for (int i = 0; i < len - 1; i++)
  {
    int min = i;                      // 记录最小值，第一个元素默认最小
    for (int j = i + 1; j < len; j++) // 访问未排序的元素
    {
      if (arr[j] < arr[min]) // 找到目前最小值
      {
        min = j; // 记录最小值
      }
    }
    if (min != i)
    {
      temp = arr[min]; // 交换两个变量
      arr[min] = arr[i];
      arr[i] = temp;
    }
  }
}
