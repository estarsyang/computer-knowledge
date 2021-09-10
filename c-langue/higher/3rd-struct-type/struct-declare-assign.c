# include <stdio.h>
// 结构的声明和赋值
struct date {
  int year;
  int month;
  int day;
};

int main() {
  struct date today;
  // 赋值
  today.year = 2021;
  today.month = 9;
  today.day = 10;
  // 完全赋值
  struct date yesterday = {2021,9,9}; // 默认给赋值，顺序 year 2021 month 9 day 10
  struct date yesterday1 = {2021,9}; // 默认给赋值，顺序赋值，不足则补 year 2021 month 9 day 0
  struct date tomorrow = {.year=2021,.day=11}; // 指定赋值 year 2021 month 0 day 10
  printf("today is %i-%i-%i\n", today.year, today.month, today.day);
  printf("yesterday is %i-%i-%i\n", yesterday.year, yesterday.month, yesterday.day);
  printf("yesterday1 is %i-%i-%i\n", yesterday1.year, yesterday1.month, yesterday1.day);
  printf("tomorrow is %i-%i-%i\n", tomorrow.year, tomorrow.month, tomorrow.day);
  // 结构赋值
  struct date specialDay;
  specialDay = yesterday; // 相当于 specialDay.year = yesterday.year 
  printf("specialDay is %i-%i-%i\n", specialDay.year, specialDay.month, specialDay.day);
  // 指针
  struct date *structPointer = &specialDay;
  printf("structPointer = %p\n", structPointer);
  // struct date *structPointer = specialDay; // error 不能将 struct date 结构赋给指针


  return 0;
}