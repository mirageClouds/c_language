#include <stdio.h>

int main(void) {
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
    double a = 2.5;
    int b = (int) a;
    int c = (int) (a + b);//  ���ź���ѧ�к��񣬶��������������ȼ�
    printf("%d  %d", b, c);
}