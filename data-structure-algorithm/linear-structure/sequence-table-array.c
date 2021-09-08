# include <stdio.h>
/**
 * 数据类型 线性表
 * 数据对象集 线性表是由n个元素组成的有序序列(a1,a2...an)
 * 操作集 线性表L属于List，整数i表示位置，元素X属于ElemenType(任意类型数据),有以下基本操作:
 *  1. List MakeEmpty() 初始化一个空线性表L
 *  2. ElemenType FindKth(int k, List L) 根据位序，返回相应元素
 *  3. int Find(ElemenType X, List L) 在线性表L中查找X第一次出现的位置
 *  4. void Insert(ElemenType X, int i, List L) 在位序i前插入一个新元素X
 *  5. void Delete(int i, List L) 删除指定位序i的元素
 *  6. int Length(List L) 返回线性表L的长度
 */
// ELementType 任意数据的声明，MAXSIZE数组的长度，以下是伪代码

typedef struct LNode *List;
struct LNode {
  ElementType Data[MAXSIZE];
  int Last; // Last 为数组最后一位，即 n
};
struct LNode L;
List PtrL;

// 访问下标为i的元素: L.Data[i] 或者 Ptrl->Data[i]
// 线性表长度 L.Last + 1 或 Ptrl->Last + 1
List MakeEmpty() {
  List PtrL;
  PtrL = (List)malloc(sizeof(struct LNode));
  PtrL->Last = -1;
  return PtrL;

}