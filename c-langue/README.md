# c-langue学习仓库
|  变量  |  32   | 64  |
|  ---- |  ----  | ----  |
| char  | 1 |1 |
| int  | 4 |大多数4 少量8 |
| short  | 2 |2 |
| long  | 4 |8 |
| float  | 4 |4 |
| double  | 4 |8 |
| 指针  | 8 |8 |

（单位都为字节）
结构体(struct)：比较复杂，对齐问题。  
联合(union)：所有成员中最长的。   
枚举(enum)：根据数据类型    