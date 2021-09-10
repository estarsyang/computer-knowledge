
#include <stdio.h>
int max(int a[], int len);

int main()
{
  int a[] = {0, 1, 2, 3, 4, 5, 6, 20, 12, 30, 1, 20};
  int len = sizeof(a) / sizeof(a[0]);

  for (int i = len - 1; i > 0; i--)
  {

    int maxid = max(a, i + 1);
    int t = a[i];
    a[i] = a[maxid];
    a[maxid] = t;
  }
  for (int i = 0; i < len; i++)
  {
    printf("%d\n", a[i]);
  }

  return 0;
}
int max(int a[], int len)
{
  int maxid = 0;
  for (int i = 0; i < len; i++)
  {
    if (a[maxid] < a[i])
    {
      maxid = i;
    }
  }
  return maxid;
}
