
int gAll=12; // 声明了一个全局变量,需要在相应的.h文件中抛出，让编译器知道
int max(int a, int b) {
  return a > b ? a : b;
}