# 202444022_C

#include<stdio.h>

int main(void)
{
    short num1;
    int num2;
    long long num3;
    long num4;

    printf("자료형의 크기를 구하는 함수: sizeof() 함수\n");
    printf("1. short형 변수: %d바이트\n", sizeof(num1));
    printf("2. int형 변수: %d바이트\n", sizeof(num2));
    printf("3. long long형 변수: %d바이트\n", sizeof(num3));
    printf("4. long형 변수: %d바이트\n", sizeof(num4));
    printf("1바이트는 8비트입니다.\n");
    printf("5. short형 변수: %d바이트\n", sizeof(num1) * 8);
    printf("6. int형 변수: %d바이트\n", sizeof(num2) * 8);
    printf("7. long long형 변수: %d바이트\n", sizeof(num3) * 8);
    printf("8. long형 변수: %d바이트\n", sizeof(num4) * 8);
}
