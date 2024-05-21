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
//    double a = 2.5;
//    int b = (int) a;
//    int c = (int) (a + b);//  括号和数学中很像，都是用于提升优先级
//    printf("%d  %d", b, c);

//    //寻找水仙花数
//    for (int i = 100; i < 1000; ++i) {
//        int a = i%10,b = i /10 % 10,c = i/10/10;
//        if(a*a*a + b*b*b + c*c*c == i){
//            printf("%d这是水仙花数\n",i);
//        };
//    };
//    //打印九九乘法表
//    for(int i = 0;i<=9;i++){
//        for (int j = 1; j <= i; ++j) {
//            printf("%d x %d = %d ",i,j,i*j);
//        }
//        printf("\n");
//    };
//    //斐波那契数列解法其一
//    int target = 7, result;
//    int a = 1,b = 1,c;
//    for (int i = 2; i < target; ++i) {
//        c = a+b;
//        a = b;
//        b = c;
//    }
//    result = c;
//    printf("%d", result);

//  冒泡排序
//    int arr[10] = {3,5,7,2,9,0,6,1,8,4};
//    for (int i = 0; i < 9; ++i) {
//        _Bool flag = 0;
//        for (int j = 1; j < 10; ++j) {
//            if(arr[j]>arr[j-1]){
//                int tmp = 0;
//                tmp = arr[j-1];
//                arr[j-1] = arr[j];
//                arr[j] = tmp;
//                flag = 1;
//            }
//        }
//        if(flag == 0) break;
//    }
//
//    for (int i = 0; i < 10; ++i) {
//        printf("%d  ",arr[i]);
//    }

//    斐波那契数列解法其二
//    int target = 7;
//    int dp[target];
//    dp[0] = dp[1] = 1;
//    for (int i = 2; i < 7; ++i) {
//        dp[i]= dp[i-1]+dp[i-2];
//    }
//    printf("%d",dp[target -1]);

//    打家劫舍
//    int arr[] = {2,7,9,3,1},size = 5;
//    int dp[size];
//    dp[0] = arr[0];
//    dp[1] = arr[1]>arr[0]?arr[1]:arr[0];
//    for (int i = 2; i < size; ++i) {
//        dp[i] = dp[i-1]>dp[i-2] + arr[i] ? dp[i-1]:dp[i-2] + arr[i];
//    }
//    printf("%d",dp[size-1]);


//  字符串写法
//    const char str[] = {'h','e','l','l','o','\0'};
//    const char str[] = "hello";
//    char str[] = "你好";
//    printf("%s",str);

//    从控制台接受输入(scanf)
    char str[20];
    scanf("%s",str);
    printf("%s",str);
}