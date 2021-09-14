// C 语言提供了 typedef 关键字，您可以使用它来为类型取一个新的名字。下面的实例为单字节数字定义了一个术语 BYTE：
// typedef int test 将 int 重新命名为 test
// test a=5; --->> int a=5;
// 为什么会出现这样，主要是为了书写的方便，比如 struct
/**
 * typedef struct date {
 *  int year;
 *  int month;
 *  int day;
 * } Adate;
 * Adate today = {2021,9,14};
 * 这里是代表着 重新为 struct data 取了一个名字，方便书写。
 * 不用 typedef 的写法为
 * struct date {
 *  int year;
 *  int month;
 *  int day;
 * };
 * struct date today =  {2021,9,14};
 * 写法比较麻烦。typedef 优化了写法。
 */
