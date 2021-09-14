# ifndef _ARRAY_H_
# define _ARRAY_H_
/**
 * resizable array
 *  1. growing
 *  2. get its size
 *  3. access to elements
 */

  typedef struct {
    int *array;
    int size;
  } Array;
  

  Array array_create(int init_size);
  void array_free(Array *a);
  int array_size(const Array *a);
  int* array_at(Array *a, int index);
  void array_inflate(Array *a, int more_size);

  #endif