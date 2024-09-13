#include <stdio.h>
#include <string.h>

void test();

void test1(int, int);

void test2(int arr[]);

int fib(int n) {
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return *a, *b;
}

// int main(void) {
//     //    int a = 10;
//     //    //指针类型需要与变量类型相同，且后面需要添加一个*符号(注意这里不是乘法运算，表示的是对于类型的指针)
//     //    int *p = &a; //这里的&不是进行按位与运算，而是取地址操作，也就是拿到变量a的地址
//     //    *p = 555;
//     //    printf("%p\n", p); //地址使用%p表示
//     //    printf("%p,%d", p, *p); //我们可以在指针变量前添加一个*号(间接运算符，也可以叫解引运算符)来获取对应地址存储的值
//     //    int a = 10, b = 20;
//     //    swap(&a, &b), swap(&a, &b));
//     //    scanf("%d", &a);
//     //    printf("%d", a);
//     //    char str[] = "hello world";
//     //    char *p = str;
//     //    printf("%c", *(p + 1));
//
//     //    int arr[][3] = {{1, 2, 3},
//     //                    {4, 5, 6}};
//     //    int *p = arr[0];  //因为是二维数组，注意这里要指向第一个元素，来降一个维度才能正确给到指针
//     //    //同理如果这里是arr[1]的话那么就表示指向二维数组中第二个数组的首元素
//     //    printf("%d = %d", *(p + 4), arr[1][1]);   //实际上这两种访问形式都是一样的
//
//     //    int a = 20;
//     //    int *p = &a;   //指向普通变量的指针
//     //    //因为现在要指向一个int *类型的变量，所以类型为int* 再加一个*
//     //    int **pp = &p;   //指向指针的指针（二级指针）
//     //    int ***ppp = &pp;   //指向指针的指针的指针（三级指针）
//
//     //    int arr[3] = {111, 222, 333};
//     //    int (*p)[3] = &arr;  //直接对整个数组再取一次地址
//     //
//     //    printf("%d, %d, %d", *(*p + 0), *(*p + 1), *(*p + 2));   //要获取数组中的每个元素，稍微有点麻烦
//
//     int arr[][3] = {
//         {111, 222, 333},
//         {444, 555, 666}
//     };
//     int (*p)[3] = arr; //二维数组不需要再取地址了，因为现在维度提升，数组指针指向的是二维数组中的其中一个元素（因为元素本身就是一个数组）
//     printf("%d", *(*p + 0)); //因为上面直接指向的就是第一个数组，所以想要获取第一个元素和之前是一模一样的
//     printf("%d", *(*(p + 1) +
//                    2)); //首先*(p+1)为一个整体，表示第二个数组（因为是数组指针，所以这里+1一次性跳一个数组的长度），然后再到外层+2表示数组中的第三个元素，最后再取地址，就是第二个数组的第三个元素了
// }


void test() {
    printf("hello world");
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
    //    char str[20];
    //    scanf("%s",str);
    //    printf("%s",str);

    //     从控制台接受输入(scanf) 非数组类型
    //    int i ;
    //    scanf("%d",&i);
    //    printf("%d",i);

    //    char str [20];
    //    gets(str);
    //    puts(str);
    //
    //    char c ;
    //    c = getchar();
    //    putchar(c);

    //  回文串判断
    //    char str[64];
    //    scanf("%s",str);
    //    int len = strlen(str),left = 0,right = len-1;
    //    _Bool flag = 1;
    //    while(left<right){
    //        if(str[left]!=str[right]){
    //            flag = 0;
    //            break;
    //        }
    //        left++;
    //        right--;
    //    }
    //
    //    puts(flag?"是回":"不是");

    //    包含字符串判断(暴力算法)
    //    char str[64];
    //    char str1[64];
    //    gets(str);
    //    gets(str1);
    //    int len1 = strlen(str1);
    //    int len2 = strlen(str1);
    //    _Bool flag = 0;
    //    for (int i = 0; i < len1; ++i) {
    //        for (int j = 0; j < len2; ++j) {
    //            flag = 0;
    //            if(str[i + j] != str1[j]){
    //                flag = 1;
    //                break;
    //            }
    //        };
    //        if(!flag) break;
    //    };
    //    puts(flag?"不是":"是");
}

void test1(int a, int b) {
    int c = a + b;
    printf("%d", c);
}

void test2(int a[]) {
    a[0] = 1;
}

//结构体
struct Student {
    char *name;
    int age;
    int id;
};

//联合体
union studnet_info {
    char *name;
    int age;
};

int main(void) {
    struct Student student = {"小明", 10, 1};
    struct Student *p = &student;
    printf("%d\n", (*p).age);
    printf("%d\n", p->age);
}
