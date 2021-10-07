#include<stdio.h>
int main()
{
    int sum=0 ,rem, num;
    printf("Please enter the number:\t");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    printf("Reverse value:\t%d",sum);
    getch();
    return 0;
}
