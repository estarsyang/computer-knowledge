# include <stdio.h>
// 结构数组

// 结构嵌套
struct point {
  int x;
  int y;
};
struct rectangle {
  struct point pt1;
  struct point pt2;
};

void printRect(struct rectangle r);
int main () {
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
void printRect(struct rectangle r) {
  printf("<%d,%d> to <%d,%d>\n",r.pt1.x,r.pt1.y,r.pt2.x,r.pt2.y);
}