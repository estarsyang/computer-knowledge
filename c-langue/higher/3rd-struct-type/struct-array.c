# include <stdio.h>
// 结构数组

struct time {
  int hour;
  int minutes;
  int seconds;
};
// 结构嵌套
struct point {
  int x;
  int y;
};
struct rectangle {
  struct point pt1;
  struct point pt2;
};

struct time timeUpdate(struct time time);
void test();
void printRect(struct rectangle r);
int main () {
  struct time testTimes[5]= {
    {11,59,59},{12,0,0}, {1,29,59},{23,59,59},{19,12,27}
  };
  for(int i=0; i<5; i++) {
    printf(" Time is %d:%d:%d\n", testTimes[i].hour, testTimes[i].minutes,testTimes[i].seconds);
    testTimes[i] = timeUpdate(testTimes[i]);
    printf("one second later Time is %d:%d:%d\n", testTimes[i].hour, testTimes[i].minutes,testTimes[i].seconds);
  }
  test();
  struct rectangle rects[] = {
    {
      {1,2},
      {3,4}
    },
    {
      {5,6},
      {7,8}
    },
  };
  for (int i = 0; i < 2; i++)
  {
    printRect(rects[i]);
  }
  return 0;
}
struct time timeUpdate(struct time time) {
  ++time.seconds;
  if(time.seconds == 60) {
    time.seconds = 0;
    time.minutes++;
  }
  if(time.minutes == 60) {
    time.minutes = 0;
    time.hour++;
  }
  if(time.hour == 24) {
    time.hour = 0;
  }
  return time;
}
void test() {

  // 如果有 
  struct rectangle r;
  // 则有
  // r.pt1.x
  // r.pt1.y
  // r.pt2.x
  // r.pt2.y

  // 如果有变量
  struct rectangle a, *ap;
  ap = &a;
  // 则下面四种是等价的
  // a.pt1.x  == ap->pt1.x == (a.pt1).x == (ap->pt1).x
  // 但是 ap->pt1->x 是错误的，因为 pt1 不是指针变量

}

void printRect(struct rectangle r) {
  printf("<%d,%d> to <%d,%d>\n",r.pt1.x,r.pt1.y,r.pt2.x,r.pt2.y);
}