#include<stdio.h>
int main ()
{
    int num,rev,sum=0, temp;
    printf("Please enter the number:\t");
    scanf("%d",&num);
    temp=num;

    while(temp!=0)
    {
        rev=temp%10;
        sum=sum*10+rev;
        temp=temp/10;
    }

    if(num==sum)

        printf("Palindrome");

    else
        printf("not palindrome");

    getch();
    return 0;
}
