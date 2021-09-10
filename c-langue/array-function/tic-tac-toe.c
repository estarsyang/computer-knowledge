# include <stdio.h>


int main() {
  int size = 3;
  int a[3][3] = { 
    {0,1,1},
    {0,0,1},
    {1,1,0},
  };
  int numOfX;
  int numOfO;
  int result = -1; // -1  没人赢，1 为 x赢， 0 为 o 赢

  for (int i = 0; i < size; i++) // 检查行
  {
    numOfX = numOfO = 0;
    for (int j = 0; j < size; j++)
    {
      if(a[i][j] == 0) {
        numOfO++;
      } else {
        numOfX++;
      }
    }
    if(numOfX == size) {
      result = 1;
    } else if (numOfO == size) {
      result = 0;
    }
  }
  if(result != -1) { // 判断是否已经结束
    printf("行胜利%d\n", result);
    return 0;
  }
  for (int i = 0; i < size; i++) // 检查列
  {
    numOfX = numOfO = 0;
    for (int j = 0; j < size; j++)
    {
      if(a[j][i] == 0) {
        numOfO++;
      } else {
        numOfX++;
      }
    }
    if(numOfX == size) {
      result = 1;
    } else if (numOfO == size) {
      result = 0;
    }
  }
  if(result != -1) { // 判断是否已经结束
    printf("列胜利%d\n", result);
    return 0;
  }
  numOfX = numOfO = 0; // 对角线 00 11 22
  for(int i = 0; i < size; i++) {
    if(a[i][i] == 0) {
      numOfO++;
    } else {
      numOfX++;
    }
  }
  if(numOfX == size) {
    result = 1;
  } else if (numOfO == size) {
    result = 0;
  }
  if(result != -1) { // 判断是否已经结束
    printf("左上到右下胜利%d\n", result);
    return 0;
  }
  numOfX = numOfO = 0; // 对角线 02 11 30
  for(int i = 0; i > size; i++) {
    if(a[i][size - i - 1] == 0) {
      numOfO++;
    } else {
      numOfX++;
    }
  }
  if(numOfX == size) {
    result = 1;
  } else if (numOfO == size) {
    result = 0;
  }
  if(result != -1) { // 判断是否已经结束
    printf("左下到右上胜利%d\n", result);
    return 0;
  }



  return 0;
}
