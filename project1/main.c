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
//     //    //ָ��������Ҫ�����������ͬ���Һ�����Ҫ���һ��*����(ע�����ﲻ�ǳ˷����㣬��ʾ���Ƕ������͵�ָ��)
//     //    int *p = &a; //�����&���ǽ��а�λ�����㣬����ȡ��ַ������Ҳ�����õ�����a�ĵ�ַ
//     //    *p = 555;
//     //    printf("%p\n", p); //��ַʹ��%p��ʾ
//     //    printf("%p,%d", p, *p); //���ǿ�����ָ�����ǰ���һ��*��(����������Ҳ���Խн��������)����ȡ��Ӧ��ַ�洢��ֵ
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
//     //    int *p = arr[0];  //��Ϊ�Ƕ�ά���飬ע������Ҫָ���һ��Ԫ�أ�����һ��ά�Ȳ�����ȷ����ָ��
//     //    //ͬ�����������arr[1]�Ļ���ô�ͱ�ʾָ���ά�����еڶ����������Ԫ��
//     //    printf("%d = %d", *(p + 4), arr[1][1]);   //ʵ���������ַ�����ʽ����һ����
//
//     //    int a = 20;
//     //    int *p = &a;   //ָ����ͨ������ָ��
//     //    //��Ϊ����Ҫָ��һ��int *���͵ı�������������Ϊint* �ټ�һ��*
//     //    int **pp = &p;   //ָ��ָ���ָ�루����ָ�룩
//     //    int ***ppp = &pp;   //ָ��ָ���ָ���ָ�루����ָ�룩
//
//     //    int arr[3] = {111, 222, 333};
//     //    int (*p)[3] = &arr;  //ֱ�Ӷ�����������ȡһ�ε�ַ
//     //
//     //    printf("%d, %d, %d", *(*p + 0), *(*p + 1), *(*p + 2));   //Ҫ��ȡ�����е�ÿ��Ԫ�أ���΢�е��鷳
//
//     int arr[][3] = {
//         {111, 222, 333},
//         {444, 555, 666}
//     };
//     int (*p)[3] = arr; //��ά���鲻��Ҫ��ȡ��ַ�ˣ���Ϊ����ά������������ָ��ָ����Ƕ�ά�����е�����һ��Ԫ�أ���ΪԪ�ر������һ�����飩
//     printf("%d", *(*p + 0)); //��Ϊ����ֱ��ָ��ľ��ǵ�һ�����飬������Ҫ��ȡ��һ��Ԫ�غ�֮ǰ��һģһ����
//     printf("%d", *(*(p + 1) +
//                    2)); //����*(p+1)Ϊһ�����壬��ʾ�ڶ������飨��Ϊ������ָ�룬��������+1һ������һ������ĳ��ȣ���Ȼ���ٵ����+2��ʾ�����еĵ�����Ԫ�أ������ȡ��ַ�����ǵڶ�������ĵ�����Ԫ����
// }


void test() {
    printf("hello world");
    //    ����int��������,����ӡ
    //    int a = 10, b = 20;
    //    int hello_Word = 10;
    //    int c = a + b;
    //    printf("c�Ľ����,%d\n", c);
    //
    //    printf("------------\n");
    //
    //    ����double�������Ͳ���ӡ
    //    double d = 0.5, e = 2.5, k = d * e;
    //    printf("%.2lf\n", k);
    //
    //    ����char��������,����ӡ
    //    char c = 65;
    //    printf("%c", c);

    //    ����ת���ַ�
    //    char c = '\\';
    //    printf("%c", c);

    //    �޷�����
    //    unsigned char c = -65;
    //    printf("%u\n", c);  //Ϊʲô��191����Ϊû�з���λ��һ��Ϊ������˵��-65 = 10111111 = 128+32+16+8+4+2+1
    //
    //    int i = -1;
    //    printf("%u", i); //�޷���int���ֵΪ4294967295

    //    ����ת��
    //    short a = 10;
    //    int i = a; // i = 10

    //    int i = 511;
    //    char a = i;
    //    printf("%d", a); // a = -1,intռ4���ֽڣ���charռ1���ֽڣ�����ת�����ͻᶪ��ǰ��ļ�λ��ֻ����char���������λ��


    //    double a = 3.14;
    //    int i = a;
    //    printf("%d", i);  // a = 3,С��ת������������ֱ�Ӷ�ʧС�����֣�������������

    //    double a = 2;
    //    double b = 3;
    //    double c = b / a;
    //    printf("%f", c); // c = 1.5

    //    ǿ������ת��
    //    double a = 2.5;
    //    int b = (int) a;
    //    int c = (int) (a + b);//  ���ź���ѧ�к��񣬶��������������ȼ�
    //    printf("%d  %d", b, c);

    //    //Ѱ��ˮ�ɻ���
    //    for (int i = 100; i < 1000; ++i) {
    //        int a = i%10,b = i /10 % 10,c = i/10/10;
    //        if(a*a*a + b*b*b + c*c*c == i){
    //            printf("%d����ˮ�ɻ���\n",i);
    //        };
    //    };
    //    //��ӡ�žų˷���
    //    for(int i = 0;i<=9;i++){
    //        for (int j = 1; j <= i; ++j) {
    //            printf("%d x %d = %d ",i,j,i*j);
    //        }
    //        printf("\n");
    //    };
    //    //쳲��������нⷨ��һ
    //    int target = 7, result;
    //    int a = 1,b = 1,c;
    //    for (int i = 2; i < target; ++i) {
    //        c = a+b;
    //        a = b;
    //        b = c;
    //    }
    //    result = c;
    //    printf("%d", result);

    //  ð������
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

    //    쳲��������нⷨ���
    //    int target = 7;
    //    int dp[target];
    //    dp[0] = dp[1] = 1;
    //    for (int i = 2; i < 7; ++i) {
    //        dp[i]= dp[i-1]+dp[i-2];
    //    }
    //    printf("%d",dp[target -1]);

    //    ��ҽ���
    //    int arr[] = {2,7,9,3,1},size = 5;
    //    int dp[size];
    //    dp[0] = arr[0];
    //    dp[1] = arr[1]>arr[0]?arr[1]:arr[0];
    //    for (int i = 2; i < size; ++i) {
    //        dp[i] = dp[i-1]>dp[i-2] + arr[i] ? dp[i-1]:dp[i-2] + arr[i];
    //    }
    //    printf("%d",dp[size-1]);


    //  �ַ���д��
    //    const char str[] = {'h','e','l','l','o','\0'};
    //    const char str[] = "hello";
    //    char str[] = "���";
    //    printf("%s",str);

    //    �ӿ���̨��������(scanf)
    //    char str[20];
    //    scanf("%s",str);
    //    printf("%s",str);

    //     �ӿ���̨��������(scanf) ����������
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

    //  ���Ĵ��ж�
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
    //    puts(flag?"�ǻ�":"����");

    //    �����ַ����ж�(�����㷨)
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
    //    puts(flag?"����":"��");
}

void test1(int a, int b) {
    int c = a + b;
    printf("%d", c);
}

void test2(int a[]) {
    a[0] = 1;
}

//�ṹ��
struct Student {
    char *name;
    int age;
    int id;
};

//������
union studnet_info {
    char *name;
    int age;
};

int main(void) {
    struct Student student = {"С��", 10, 1};
    struct Student *p = &student;
    printf("%d\n", (*p).age);
    printf("%d\n", p->age);
}
