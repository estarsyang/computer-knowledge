#include "Node.h"
#include <stdio.h>
#include <stdlib.h>
// 可变数组的缺陷
/**
 * 1. 每次长度增加都需要重新复制，浪费时间
 * 2. 可能存在明明内存足够，但是无法再分配内存的情况
 */
// 为了解决这个问题，能不能不需要复制，直接指向下一个block，连接起来。这个时候就出现了链表

// typedef struct _node{
//   int value;
//   struct _node *next;
// } Node;
// 用户输入一个整数，把它给保存起来，输入 -1 停止保存

typedef struct _list {
  Node * head;
} List;

Node* add1(Node * head, int number);
void add2(Node ** head, int number);
void add3(List * PList, int number);
void showLinkList(List list);
void findLinkList(List list, int number); 



int main()
{
  int number = 0;
  // Node *head = NULL; // 方法1 和 方法2
  List list; // 方法3
  list.head = NULL; // 方法3
  do
  {
    scanf("%d", &number);
    if (number != -1)
    {
      // head = add1(head, number); // 方法1
      // add2(&head, number); // 方法2
      add3(&list, number); // 方法3
    }
  } while (number != -1);
  showLinkList(list);
  printf("请输入你要查找的数\n");
  scanf("%d", &number);
  findLinkList(list, number);
  return 0;
}

Node* add1(Node * head, int number)
{
  // 先生成一个新的
  Node *p = (Node *)malloc(sizeof(Node));
  p->value = number;
  p->next = NULL;
  // 找到最后一个
  Node *last = head;
  if (last)
  { // 判断last是否存在，即head是否有挂载了
    while (last->next)
    {
      last = last->next;
    }
    // 将最后一个指向新生成的这个
    last->next = p;
  }
  else
  { // 如果head不存在，则直接将新生成的直接作为head
    head = p;
  }
  return head;
}
void add2(Node ** Phead, int number)
{
  // 先生成一个新的
  Node *p = (Node *)malloc(sizeof(Node));
  p->value = number;
  p->next = NULL;
  // 找到最后一个
  Node *last = *Phead;
  if (last)
  { // 判断last是否存在，即head是否有挂载了
    while (last->next)
    {
      last = last->next;
    }
    // 将最后一个指向新生成的这个
    last->next = p;
  }
  else
  { // 如果head不存在，则直接将新生成的直接作为head
    *Phead = p;
  }
}
void add3(List * Plist, int number)
{
  // 先生成一个新的
  Node *p = (Node *)malloc(sizeof(Node));
  p->value = number;
  p->next = NULL;
  // 找到最后一个
  Node *last = Plist->head;
  if (last)
  { // 判断last是否存在，即head是否有挂载了
    while (last->next)
    {
      last = last->next;
    }
    // 将最后一个指向新生成的这个
    last->next = p;
  }
  else
  { // 如果head不存在，则直接将新生成的直接作为head
    Plist->head = p;
  }
}
void showLinkList(List list)
{
  Node *p;
  for(p = list.head; p != NULL; p = p->next) {
    printf("%d\n", p->value);
  }
}
void findLinkList(List list,int number) 
{
  Node *p;
  int isFound= 0;
  for(p = list.head; p != NULL; p = p->next) {
    if(p->value == number) {
      printf("找到了\n");
      isFound = 1;
      break;
    }
  }
  if(!isFound) {
    printf("没找到\n");
  }
}