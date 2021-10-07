
#include<stdio.h>
int main ()
{

    int num,rem, sum=0;
    printf("Please enter the number:\t");
    scanf("%d",&num);

    if(num>=1000000000)
    {
         printf("Invalid!");
          return 0;
    }


    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("%d",sum);
    getch();
    return 0;
}
