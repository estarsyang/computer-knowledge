# ifndef _NODE_H_
# define _NODE_H_

  typedef struct _node{
    int value;
    struct _node *next;
  } Node;
  // 链表结构，一个value，一个地址(指向下一个链表的地址)

  #endif