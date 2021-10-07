#include<stdio.h>
int main()
{
    int num,factorial=1,i,sum=0, temp,rem;

    printf("Please enter the number:\t");
    scanf("%d",&num);

    temp = num;
    while (temp!=0)
    {
        rem = temp%10;
        factorial =1;
        for(i=1 ; i<=rem ; i++)
        {
            factorial = factorial *i;

        }
        sum=sum+factorial;

        temp=temp/10;

    }

    if(sum==num)


    printf("%d is Strong number",num);


    else

        printf("%d is not strong number",num);


    getch();
    return 0;
}
