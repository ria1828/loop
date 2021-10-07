#include<stdio.h>
int main()
{
    int i,count=0,num;
    printf("Please enter the number:\t");
    scanf("%d",&num);

    if(num==0 || num==1)
    {
        printf("This is not a prime number cause prime number start at 2");
        return 0;
    }


    for(i=2 ; i<num ; i++)
    {
        if(num%i == 0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("%d is prime number",num);
    }
    else{
        printf("%d is not prime number");
    }

    getch();
    return 0;
}
