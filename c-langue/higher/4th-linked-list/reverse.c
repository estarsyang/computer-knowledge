#include <stdio.h>
#include <stdlib.h>
/**
 * 逆序输出（10分）
    题目内容：
    你的程序会读入一系列的正整数，预先不知道正整数的数量，一旦读到-1，就表示输入结束。
    然后，按照和输入相反的顺序输出所读到的数字，不包括最后标识结束的-1。
    输入格式:
    一系列正整数，输入-1表示结束，-1不是输入的数据的一部分。
    输出格式：
    按照与输入相反的顺序输出所有的整数，每个整数后面跟一个空格以与后面的整数区分，最后的整数后面也有空格。
    输入样例：
    1 2 3 4 -1
    输出样例：
    4 3 2 1 
  */

typedef struct _node
{
  int value;
  struct _node *next;
  struct _node *previous;
} Node;
typedef struct _list {
  Node *head;
  Node *tail;
} List;

void add(List *list, int number);
void normalShow(List *list);
void reverseShow(List *list);

int main()
{
  int number = 0;
  List list;
  list.head = list.tail = NULL;

  do
  {
    printf("请输入一个整数\n");
    scanf("%d", &number);
    if (number != -1)
    {
      add(&list, number);
    }
    
  } while (number != -1);
  
  normalShow(&list);
  reverseShow(&list);
  
  return 0;
}

void add(List *list, int number)
{
  // 先生成一个新的Node
  Node *p = (Node *)malloc(sizeof(Node));
  p->value = number;
  p->previous = NULL;
  p->next = NULL;
  // 找到原来最后一个
  Node *last = list->tail;
  if (last)
  {
    p->previous = last;
    last->next = p;
    list->tail = p;
  }
  else
  {
    list->head = list->tail = p;
  }
}
void normalShow(List *list) {
  Node *p;
  for( p = list->head; p !=NULL; p = p->next ) {
    printf("%d ", p->value);
  }
}
void reverseShow(List *list) {
  Node *p;
  for(p=list->tail; p!= NULL; p=p->previous) {
    printf("%d ", p->value);
  }
}