# include <stdio.h>
# include <time.h>

clock_t start, stop;
double duration;

int main() {

  start = clock();
  // myFunction(); // 需要统计的函数
  stop = clock();
  duration = ((double)(stop - stop))/CLOCKS_PER_SEC;
  return 0;
}