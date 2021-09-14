  #include "array.h"
  #include <stdio.h>
  #include <stdlib.h>
  
  // typedef struct {
  //   int *array;
  //   int size;
  // } Array;
  const int BLOCK_SIZE = 20;

  Array array_create(int init_size) {
    Array a;
    a.size = init_size;
    a.array = (int *)malloc(sizeof(int) * a.size);
    return a;
  }
  void array_free(Array *a) {
    free(a->array); // 回收array_create时动态分配的内存；
    a->array = NULL;
    a->size = 0;
  }
  // 封装
  int array_size(const Array *a) {
    return a->size;
    // 单独返回一个size，为什么还要封装一个函数，不直接用a.size 呢。
    // 因为封装，如果后期算法有优化和或者变动，直接用a.size就很不方便，同时使用者不需要关注内部的实现情况
  }
  int* array_at(Array *a, int index) {
    if(index >= a->size) {
      array_inflate(a, (index/BLOCK_SIZE+1) * BLOCK_SIZE - a->size);
    }
    return &(a->array[index]);
    // 为什么要返回一个指针？
    // 方便进行赋值，不然就要写 get 和 set 方法了。
    // *(array_at(0)) = 10;
    // get
    /**
     * int array_get(const Array *a, int index) {
     *  return a->array[index];
     * }
     */
    // set 
    /**
     * void array_set(Array *a, int index, int value) {
     *  a->array[index] = value;
     * }
     */
  }
  void array_inflate(Array *a, int more_size) {
    int *p = (int *)malloc(sizeof(int)*(a->size+more_size));
    for (int i = 0; i < a->size; i++) {
      p[i] = a->array[i];
    }
    free(a->array);
    a->array = p;
    a->size += more_size;
  }

  int main() {
    Array a = array_create(100);
    printf("%d\n", array_size(&a));
    printf("%d\n", a.size);
    *(array_at(&a, 0)) = 10;
    printf("%d\n", *(array_at(&a, 0)));
    int number = 0;
    int cnt=0;
    if(number != -1) {
      scanf("%d", &number);
      if(number != -1) {
        *array_at(&a, cnt++) = number;
      }
    }
    array_free(&a);
  }