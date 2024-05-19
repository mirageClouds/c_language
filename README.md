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

## 创建变量

* 创建变量:`数据类型 变量名称 = 初始值,变量名称1 = 初始值1 `(变量名称和变量名称1类型一致)
* 变量命名规则：

  * 不能重复使用其他变量使用过的名字
  * 只能包含英文字母或是下划线、数字，并且严格区分大小写，如a和A不算同一变量
  * 虽然可以包含数字，但不能以数字开头
  * 不能是关键字(如基本数据类型)
  * **建议**:使用英文单词，不要使用拼音,多个词可以使用驼峰命名法或是通过下划线连接
* 对变量的值进行打印：需要使用占位符将变量的值替换上去，如`printf("c的结果是,%d",c)`

## 无符号数

* 使用`unsigned 数据类型 数据名称 = 数据`声明无符号数
* 也可以在打印的使用使用`%u`占位符输出无符号数
* 由于无符号位，所以一律为正数

## 类型转换

* 自动类型转换：
  * 小类型转大类型，会发生隐式转换
  * 大转小，会丢掉前面的几位，只保留小类型所需的位数
  * 小数转换整数会直接丢失小数部分
  * 运算中
    * 不同的类型优先级不同(根据长度而定)
    * char和short类型在参与运算时一律转化成int再进行运算
    * 浮点类型默认按双精度进行计算，就算有float类型，也会转换成double类型参与计算
    * 当一个更高优先级的类型和一个低优先级类型同时参与计算时，统一转化为高优先级运算，比如int和long参与运算，那么int会转换成long再算，所以结果也是long类型，int和double参与运算，那么先把int转换成double再算
* 强制类型转换：
  * 

