# include <stdio.h>
# include <stdbool.h>
// int numberOfDays(struct date d)
/**
 * 整个结构可以作为参数的值传入函数
 * 这时候是在函数内新建一个结构变量，并复制调用者的结构的值
 * 也要返回一个结构
 * 与数组完全不同
 */
struct date {
  int year;
  int month;
  int day;
};

bool isLeap(struct date d);
int numberOfDays(struct date d);


int main() {
  struct date today,tomorrow;
  printf("please today's date(dd mm yyyy):\n");
  scanf("%i %i %i", &today.day, &today.month, &today.year);

  if(today.day != numberOfDays(today)) { // 不是一个月的最后一天
    tomorrow.day = today.day + 1;
    tomorrow.month = today.month;
    tomorrow.year = today.year;
  } else if(today.month == 12) { // 最后一个月
    tomorrow.day = 1;
    tomorrow.month = 1;
    tomorrow.year = today.year + 1;
  } else { // 这个月的最后一天
    tomorrow.day = 1;
    tomorrow.month = today.month + 1;
    tomorrow.year = today.year;
  }
  printf("tomorrow is %i-%i-%i\n", tomorrow.year, tomorrow.month, tomorrow.day);

  return 0;
}
bool isLeap(struct date d) {
  bool leap = false;
  if((d.year % 4 == 0 && d.month % 100 == 0) || d.year % 400) {
    leap = true;
  } else {
    leap = false;
  }
  return leap;
};
int numberOfDays(struct date d) {
  int days;
  const int daysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31}; // 每个月的最后一天
  if(d.month == 2 && isLeap(d)) {
    days = 29;
  } else {
    days = daysPerMonth[d.month - 1];
  }
  return days;
}


