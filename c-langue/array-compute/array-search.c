#include <stdio.h>

/**
 * 找出key在数组中的位置
 * @param key 数组要寻找的数字
 * @param a 要寻找的数组
 * @param length 数组 a的长度
 * @return 如果找到，则返回在a中的位置，如果没找到，则返回-1
*/
int search(int key, int a[], int length);
int main()
{
  int a[] = {0, 1, 2, 3, 4, 5, 6};
  int x;
  int loc;
  printf("请输入一个数字\n");
  scanf("%d", &x);
  loc = search(x, a, sizeof(a) / sizeof(a[0]));
  if (loc != -1)
  {
    printf("数字%d在数组中的位置是%d\n", x, loc);
  }
  else
  {
    printf("数字%d在数组中不存在\n", x);
  }

  return 0;
}

int search(int key, int a[], int length)
{

  int ret = -1;
  for (int i = 0; i < length; i++)
  {
    if (a[i] == key)
    {
      ret = i;
      break;
    }
  }

  return ret;
}
