#include<stdio.h>
int main()
{
    int i,n ;
    int factorial=1;
    printf("Please enter the number:\t");
    scanf("%d",&n);

    for(i=1 ; i<=n ;i++)
    {
         factorial = i* factorial;

    }
printf("%d",  factorial);

    getch();
    return 0;
}
