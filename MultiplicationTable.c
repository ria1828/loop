#include<stdio.h>
int main()
{
    int i,number;
    printf("This is an multiplication table\n");
    printf("\nPlease enter the number:\t");
    scanf("%d",&number);

    for(i=1 ; i<=10 ; i++)
    {
       printf("\n%d x %d = %d\n",number,i,number*i);
    }

    getch();
    return 0;
}
