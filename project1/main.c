#include <stdio.h>

int main(void) {
//    声明int变量类型,并打印
//    int a = 10, b = 20;
//    int hello_Word = 10;
//    int c = a + b;
//    printf("c的结果是,%d\n", c);
//
//    printf("------------\n");
//
//    声明double变量类型并打印
//    double d = 0.5, e = 2.5, k = d * e;
//    printf("%.2lf\n", k);
//
//    声明char变量类型,并打印
//    char c = 65;
//    printf("%c", c);

//    声明转义字符
//    char c = '\\';
//    printf("%c", c);

//    无符号数
//    unsigned char c = -65;
//    printf("%u\n", c);  //为什么是191，因为没有符号位，一律为正数，说以-65 = 10111111 = 128+32+16+8+4+2+1
//
//    int i = -1;
//    printf("%u", i); //无符号int最大值为4294967295

//    类型转换
//    short a = 10;
//    int i = a; // i = 10

//    int i = 511;
//    char a = i;
//    printf("%d", a); // a = -1,int占4个字节，而char占1个字节，发生转换，就会丢掉前面的几位，只保留char类型所需的位数


//    double a = 3.14;
//    int i = a;
//    printf("%d", i);  // a = 3,小数转换成整数，会直接丢失小数部分，保留整数部分

//    double a = 2;
//    double b = 3;
//    double c = b / a;
//    printf("%f", c); // c = 1.5

//    强制类型转换
    double a = 2.5;
    int b = (int) a;
    int c = (int) (a + b);//  括号和数学中很像，都是用于提升优先级
    printf("%d  %d", b, c);
}