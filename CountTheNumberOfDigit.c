#include<stdio.h>
int main()
{

    int num,count=0;
    printf("Please enter the number:\t");//123
    scanf("%d",&num);

    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("Count the number of digits:\t%d",count);
    getch();
    return 0;
}
