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
  int main() {
    int number = 0;
    Node *head = NULL;
    do {
      if(number != -1) {
        // 先生成一个新的
        Node *p = (Node *)malloc(sizeof(Node));
        p->value = number;
        p->next = NULL;
        // 找到最后一个
        Node *last = head;
        if(last) { // 判断last是否存在，即head是否有挂载了
          while(last->next ) {
            last = last->next;
          }
          // 将最后一个指向新生成的这个
          last->next = p;
        } else { // 如果head不存在，则直接将新生成的直接作为head
          head = p;
        }
      }
    } while (number != -1);
    return 0;
  }