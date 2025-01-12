# C语言程序基础学习

## c语句基本格式

* 引入标准库头文件：`#include <stdio.h>`
* 入口：`int main(){}`
* `return 0 `可以省略

## 基本数据类型

* 数据类型:

  * 整数类型

    * int：占4个字节，32个bit位，可以表示-2147483648到2147483647之间的数字，默认使用这种类型
    * long：占8个字节，64个bit位
    * short：占2个字节，16个bit位

  * 浮点类型

    * float：单精度浮点，占用4个字节，32个bit位
    * double：双精度浮点，占用8个字节，64个bit位

  * 字符类型

    * char：占用1个字节(-128~127),可以表示所有ASCII码字符，每个数字对应编码表中的一个字符

  * 无法直接显示的字符，如换行，使用转义字符来表示

    * | 转义字符 | 意义         | ASCII码(十进制) |
      | -------- | ------------ | --------------- |
      | \a       | 响铃(BEL)    | 007             |
      | \b       | 退格(BS)     | 008             |
      | \f       | 换页FF       | 012             |
      | \n       | 换行(LF)     | 010             |
      | \r       | 回车(CR)     | 013             |
      | \t       | 水平制表(HT) | 009             |
      | \v       | 垂直制表(VT) | 011             |
      | \\       | 反斜杠       | 092             |
      | \?       | 问号字符     | 063             |
      | `\'`     | 单引字符     | 039             |
      | `\"`     | 双引字符     | 034             |
      | \0       | 空字符(NULL) | 000             |
      | \ddd     | 任意字符     | 三位八进制      |
      | \xhh     | 任意字符     | 二位十六进制    |

## 变量

* 创建变量:`数据类型 变量名称 = 初始值,变量名称1 = 初始值1 `(变量名称和变量名称1类型一致)
* 变量命名规则：

  * 不能重复使用其他变量使用过的名字
  * 只能包含英文字母或是下划线、数字，并且严格区分大小写，如a和A不算同一变量
  * 虽然可以包含数字，但不能以数字开头
  * 不能是关键字(如基本数据类型)
  * **建议**:使用英文单词，不要使用拼音,多个词可以使用驼峰命名法或是通过下划线连接
* 对变量的值进行打印：需要使用占位符将变量的值替换上去，如`printf("c的结果是,%d",c)`

### 无符号数

* 使用`unsigned 数据类型 数据名称 = 数据`声明无符号数
* 也可以在打印的使用使用`%u`占位符输出无符号数
* 由于无符号位，所以一律为正数

### 类型转换

* 自动类型转换：
  * 小类型转大类型，会发生隐式转换
  * 大转小，会丢掉前面的几位，只保留小类型所需的位数
  * 小数转换整数会直接丢失小数部分
  * 运算中
    * 不同的类型优先级不同(根据长度而定)
    * char和short类型在参与运算时一律转化成int再进行运算
    * 浮点类型默认按双精度进行计算，就算有float类型，也会转换成double类型参与计算
    * 当一个更高优先级的类型和一个低优先级类型同时参与计算时，统一转化为高优先级运算，比如int和long参与运算，那么int会转换成long再算，所以结果也是long类型，int和double参与运算，那么先把int转换成double再算
* 强制类型转换：`数据类型 变量名 = (转换的变量类型) 变量、常量、表达式`

## 运算符

### 基本运算符

* 加法运算符：+
* 减法运算符：-
* 乘法运算符：*
* 除法运算符：/
* 取模运算符：%

### 运算符优先级

* `()>+-(做符号表示)>*/%>+-(加减运算)> =`

### 逗号运算符

* 逗号运算符从前往后依次执行，赋值结果是后面的结果

### 自增自减

* a++ :先进行运算再加
* ++a:先加再进行运算

### 位运算符

* `<<`：让所有bit位左移一位，相当于快速的乘以2的次方
* `>>`：让所有bit位右移一位，相当于快速的除以2的次方
* `&`：按位与的操作，相当于比较两个数的每一位bit比较，如果对应的bit位为1，则为1，其余的都为0
* `|`：按位或运算，相当于比较两个数的每一位bit比较，如果两个数对应的bit位为1，则为1，其余为0
* `^`：按位异或运算，相当于比较两个数的每一位bit比较，如果两个数对应的bit位不同时为1或同时为0，那么就是1，否则就是0
* `~`：按为否定某个数进行操作，相当于把这个数的每一位bit置反，0变1,1变0

### 逻辑运算符

* `&&`：逻辑与，两边都为真则为真
* `||`：逻辑或，表示两边其中一个为真或都为真，结果就是真
* `!`：取反

### 运算符的优先级，从上往下依次降低：

| 运算符                          | 解释                                 | 结合方式 |
| ------------------------------- | ------------------------------------ | -------- |
| ()                              | 同数学中的括号，直接提升到最高优先级 | 由左向右 |
| ! ~ ++ -- + -                   | 否定，按位否定，增量，减量，正负号   | 由右向左 |
| * / %                           | 乘，除，取模                         | 由左向右 |
| + -                             | 加，减                               | 由左向右 |
| << >>                           | 左移，右移                           | 由左向右 |
| < <= >= >                       | 小于，小于等于，大于等于，大于       | 由左向右 |
| == !=                           | 等于，不等于                         | 由左向右 |
| &                               | 按位与                               | 由左向右 |
| ^                               | 按位异或                             | 由左向右 |
| \|                              | 按位或                               | 由左向右 |
| &&                              | 逻辑与                               | 由左向右 |
| \|\|                            | 逻辑或                               | 由左向右 |
| ? :                             | 条件                                 | 由右向左 |
| = += -= *= /= &= ^= \|= <<= >>= | 各种赋值                             | 由右向左 |
| ,                               | 逗号（顺序）                         | 由左向右 |

## 流程控制

### 分支语句-if

* ~~~c
  if(判断条件) {
      执行的代码
  }
  ~~~

* `if(判断条件)执行的代码` 

### 分支语句-switch

* ~~~c
  switch(目标){
  	case 目标值:
  		代码
  		break;
  	default:
  		其他情况下执行的代码
  }
  ~~~

### 循环语句-for

* ~~~c
  for (表达式1;表达式2;表达式3) {
      循环体
  }
  ~~~

* 表达式2不写内容，默认为真，所以要写无限循环，for里面什么都不用写

* `break`：结束循环

* `continue`：加速循环，不管后面的代码了，直接开启下一次循环

* `continue`加速的是内层循环，对外层循环没有作用，break会终结最近的循环

### 循环语句-while

* ~~~c
  while(判断条件){ //每次循环开始之前都会判断括号内的内容是否为真，如果是就继续循环
  	代码
  }
  ~~~

* ~~~c
  do {  //无论满不满足循环条件，先执行循环体里面的内容
     代码
  } while (0);   //再做判断，如果判断成功，开启下一轮循环，否则结束
  ~~~

## 练习

### 寻找水仙花数

```c
for (int i = 100; i < 1000; ++i) {
    int a = i%10,b = i /10 % 10,c = i/10/10;
    if(a*a*a + b*b*b + c*c*c == i){
        printf("%d这是水仙花数\n",i);
    };
};
```

### 打印九九乘法表

```c
for(int i = 0;i<=9;i++){
    for (int j = 1; j <= i; ++j) {
        printf("%d x %d = %d ",i,j,i*j);
    }
    printf("\n");
};
```

### 斐波那契数列解法其一

```c
int target = 7, result;
int a = 1,b = 1,c;
for (int i = 2; i < target; ++i) {
    c = a+b;
    a = b;
    b = c;
}
result = c;
printf("%d", result);
```

## 数组

* 创建和使用

  * `类型 数组名称[数组大小] = {数据1，数据2...}` 后面的数据可以在一开始的时候不赋值，并且数组大小必须为整数

  * 数组的访问，`直接通过数组名称[下标]来访问对应的元素值，下标从0开始`

  * 访问超出数组长度的数据，可以被访问，但是数据无意义

## 多维数组

* 创建和使用
  * `类型 数组名称[外层数组长度][内层数组长度] = {{数据1，数据2...}，{数据3，数据4...}}`
  * 存放内存数组长度是需要确定的，存放数组的数组之和和之前一样，可以根据后面的值决定
  * 多维数组的访问：`数组名称[外层数组下标][内层数组下标]`

## 练习

### 冒泡排序

```c
int arr[10] = {3,5,7,2,9,0,6,1,8,4};
for (int i = 0; i < 9; ++i) {
    _Bool flag = 0;
    for (int j = 1; j < 10; ++j) {
        if(arr[j]>arr[j-1]){
            int tmp = 0;
            tmp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = tmp;
            flag = 1;
        }
    }
    if(flag == 0) break;
}

for (int i = 0; i < 10; ++i) {
    printf("%d  ",arr[i]);
}
```

### 斐波那契数列解法其二

```c
int target = 7;
int dp[target];
dp[0] = dp[1] = 1;
for (int i = 2; i < 7; ++i) {
    dp[i]= dp[i-1]+dp[i-2];
}
printf("%d",dp[target -1]);
```

## 打家劫舍

```c
int arr[] = {2,7,9,3,1},size = 5;
int dp[size];
dp[0] = arr[0];
dp[1] = arr[1]>arr[0]?arr[1]:arr[0];
for (int i = 2; i < size; ++i) {
    dp[i] = dp[i-1]>dp[i-2] + arr[i] ? dp[i-1]:dp[i-2] + arr[i];
}
printf("%d",dp[size-1]);
```

## 字符串

* 第一种写法

  * ```c
    const char str[] = {'h','e','l','l','o','\0'};
    ```

* 第二种写法

  * ```c
     const char str[] = "hello";
     char str[] = "你好";
    ```

##  scanf、gets、puts函数

* 从控制台接受输入(scanf)

  * 使用方式（数组）

    * ```c
      char str[20];
      scanf("%s",str);
      printf("%s",str);
      ```

  * 使用方式(非数组)

    * ```c
      int i ;
      scanf("%d",&i);
      printf("%d",i);
      ```

  * 注意，如果输入的不是数组类型，要在填写变量的时候在前面添加一个&符号，这里的&不是做与运算，而是取地址操作

* 从控制台接受字符串专用函数(gets)

  * ```c
    char str [20];
    gets(str);
    printf("%s",str);
    ```

* 专门打印字符串到控制台的函数(puts)

  * ```c
    char str [20];
    gets(str);
    puts(str);
    ```

* 专门处理单独字符的函数(getchar)

  * ```c
    char c ;
    c = getchar();
    printf("%c",c);
    ```

* 专门打印字符到控制台的函数(putchar)

  * ```c
    char c ;
    c = getchar();
    putchar(c);
    ```

## 练习

### 回文串判断

* ```c
  char str[64];
  scanf("%s",str);
  int len = strlen(str),left = 0,right = len-1;
  _Bool flag = 1;
  while(left<right){
      if(str[left]!=str[right]){
          flag = 0;
          break;
      }
      left++;
      right--;
  }
  
  puts(flag?"是回":"不是");
  ```

### 包含字符串判断

* ```c
  char str[64];
  char str1[64];
  gets(str);
  gets(str1);
  int len1 = strlen(str1);
  int len2 = strlen(str1);
  _Bool flag = 0;
  for (int i = 0; i < len1; ++i) {
      for (int j = 0; j < len2; ++j) {
          flag = 0;
          if(str[i + j] != str1[j]){
              flag = 1;
              break;
          }
      };
      if(!flag) break;
  };
  puts(flag?"不是":"是");
  ```

## 函数

### 创建和使用函数

* 创建函数：`返回值类型 函数名称([函数参数])`

* 定义函数原型:

  * `void test(void);`
  * 因为c语言是从上往下的，所以要在下面的主函数中使用该函数，需要在上面定义

* 定义函数内容:

  * ~~~c
    void test(void){
    	printf("测试")
    }
    ~~~

  * 函数的具体定义，添加一个花括号并在其中编码，就和在main中编写一样

  * 可以不用定义函数原型，直接在需要调用函数的上方直接编写函数的具体定义

### 函数的参数和返回

*	传参
  *	声明：`void test(参数名称);`
  *	调用：`test(参数内容);`
  *	static关键字：使函数内容不会在执行一次后就被销毁
*	返回
  *	声明：`函数返回值类型 函数名称(参数名称);`
  *	函数内部:需要使用`return`将内容返回

## 实战

### 斐波那契数列解法

* ```c
  int fib(int n){
      if(n == 1|| n == 2) return 1;
      return fib(n -1) + fib(n-2);
  }
  
  int main(void) {
      printf("%d", fib(7));
  }
  ```

## 指针

### 声明指针

* ~~~c
   //指针类型需要与变量类型相同，且后面需要添加一个*符号(注意这里不是乘法运算，表示的是对于类型的指针)
      int *p = &a; //这里的&不是进行按位与运算，而是取地址操作，也就是拿到变量a的地址
      printf("%p", p); //地址使用%p表示
      printf("%p,%d", p, *p); //我们可以在指针变量前添加一个*号(间接运算符，也可以叫解引运算符)来获取对应地址存储的值
  ~~~

* 注意，指针访问内存的值，是根据类型获取的，如int占4个字节，取值的时候就读地址后4个字节作为int的值

### 指针与数组

* 对数组取地址，拿到的是数组首元素的地址

* 数组表示法：`str[1]`
* 指针表示法：`*(p+1)`

* ~~~c
  *p   //数组的第一个元素
  p   //数组的第一个元素的地址
  p == str   //肯定是真，因为都是数组首元素地址
  *str    //因为str就是首元素的地址，所以这里对地址加*就代表第一个元素，使用的是指针表示法
  &str[0]   //这里得到的实际上还是首元素的地址
  *(p + 1)   //代表第二个元素
  p + 1    //第二个元素的内存地址
  *p + 1    //注意*的优先级比+要高，所以这里代表的是首元素的值+1，得到字符'K'
  ~~~

* 多维数组

  * ```c
    int arr[][3] = {{1, 2, 3},
                    {4, 5, 6}};
    int *p = arr[0];  //因为是二维数组，注意这里要指向第一个元素，来降一个维度才能正确给到指针
    //同理如果这里是arr[1]的话那么就表示指向二维数组中第二个数组的首元素
    printf("%d = %d", *(p + 4), arr[1][1]);   //实际上这两种访问形式都是一样的
    ```

### 多级指针

* ~~~c
  	int a = 20;
      int * p = &a;   //指向普通变量的指针
      //因为现在要指向一个int *类型的变量，所以类型为int* 再加一个*
      int ** pp = &p;   //指向指针的指针（二级指针）
      int *** ppp = &pp;   //指向指针的指针的指针（三级指针）
   printf("p = %p, a = %d", *pp, **pp);  //使用一次*表示二级指针指向的指针变量，继续使用一次*会继续解析成指针变量所指的普通变量
  ~~~

* **特别提醒：** 一级指针可以操作一维数组，那么二级指针是否可以操作二维数组呢？不能！因为二级指针的含义都不一样了，它是表示指针的指针，而不是表示某个元素的指针了。下面我们会认识数组指针，准确的说它才更贴近于二维数组的形式。

### 指针数组和数组指针

* 指针数组：就是存放指针的数组

  * 访问数组中第一个指针指向的地址：

    * ~~~c
      int a = 10;
      int * arr = {&a};
      int **p = arr;
      printf("%d",**p);
      ~~~

* 数组指针

  * 数组指针则表示指向整个数组

  * ~~~c
     int arr[3] = {111, 222, 333};
        int (*p)[3] = &arr;  //直接对整个数组再取一次地址
      
        printf("%d, %d, %d", *(*p + 0), *(*p + 1), *(*p + 2));   //要获取数组中的每个元素，稍微有点麻烦
    ~~~

  * 注意此时：

    - `p`代表整个数组的地址
    - `*p`表示所指向数组中首元素的地址
    - `*p+i`表示所指向数组中第`i`个（0开始）元素的地址（实际上这里的*p就是指向首元素的指针）
    - `*(*p + i)`就是取对应地址上的值了

  * ~~~c
     	int arr[][3] = {{111, 222, 333},{444, 555, 666}};
        int (*p)[3] = arr;  //二维数组不需要再取地址了，因为现在维度提升，数组指针指向的是二维数组中的其中一个元素（因为元素本身就是一个数组）
        printf("%d", *(*p + 0));   //因为上面直接指向的就是第一个数组，所以想要获取第一个元素和之前是一模一样的
        printf("%d", *(*(p + 1) +2));   //首先*(p+1)为一个整体，表示第二个数组（因为是数组指针，所以这里+1一次性跳一个数组的长度），然后再到外层+2表示数组中的第三个元素，最后再取地址，就是第二个数组的第三个元素了
    ~~~

### 指针函数和函数指针

