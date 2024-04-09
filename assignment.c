#include <stdio.h>

int main(void)
{
    int change;

    printf("거스름 받을 돈:\n");
    scanf("%d",&change);

    printf("50,000원 %d 장\n",change / 50000);
        change = change % 50000;

    printf("10,000원 %d 장\n",change / 10000);
        change = change % 10000;

    printf("5,000원 %d 장\n",change / 5000);
        change = change % 5000;

    printf("1,000원 %d 장\n",change / 1000);
        change = change % 1000;
    
    printf("500원 %d 개\n",change / 500);
        change = change % 500;
    
    printf("100원 %d 개\n",change / 100);
        change = change % 100;
    
    printf("50원 %d 개\n",change / 50);
        change = change % 50;
    
    printf("10원 %d 개\n",change / 10);
        change = change % 10;
    
    printf("1원 %d 개\n",change / 1);
        change = change % 1;
}