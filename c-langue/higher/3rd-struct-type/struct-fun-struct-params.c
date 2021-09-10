# include <stdio.h>
// 结构作为入参，同时修改外部的参数
struct point {
  int x;
  int y;
};

struct point getStruct(void);
void output(struct point);

struct point *getStructPoint(struct point *);
void printOut(const struct point *p);

int main() {
  // 使用返回结构的方式来修改
  struct point y = { 0, 0 };
  y = getStruct(); // 返回结构并赋值
  output(y);
  // 使用指针来修改
  // getStructPoint(&y);
  printOut(getStructPoint(&y));

  return 0;
}
struct point getStruct(void) {
  struct point p;
  printf("请输入结构中x y的值: \n");
  scanf("%d", &p.x);
  scanf("%d", &p.y);
  printf("getStruct %d %d\n", p.x, p.y);
  return p;
}
void output(const struct point p){
  printf("output %d %d\n", p.x, p.y);
}

struct point *getStructPoint(struct point *p) {
  printf("请输入结构中x y的值: \n");
  scanf("%d", &p->x);
  scanf("%d", &p->y);
  printf("getStructPoint %d %d\n", p->x, p->y);
  return p;

}
void printOut(const struct point *p) {
  printf("printOut %d %d\n", p->x, p->y);
}