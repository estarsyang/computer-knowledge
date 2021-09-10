#include <stdio.h>

void isPrime(int number);

int main()
{
  int number = 25;
  isPrime(25);
  return 0;
}

void isPrime(int number)
{
  int a[number];
  for (int i = 0; i < number; i++)
  { // 标记为全部素数
    a[i] = 1;
  }

  for (int x = 2; x < number; x++)
  {
    if (a[x])
    {
      for (int i = 2; i * x < number; i++)
      {
        a[i * x] = 0;
      }
    }
  }
  for (int i = 2; i < number; i++)
  {
    if (a[i])
    {
      printf("%d ", i);
    }
  }
}
