#include<stdio.h>
int main()
{
    int reverse=0 , temp , i, rem, num1,num2,num;
    printf("Please enter the first number:\t");
    scanf("%d",&num1);
    printf("Please enter the second number:\t");
    scanf("%d",&num2);



     for( i =num1 ; i<= num2 ;i++)
     {

         temp=num;
         while(temp!=0)
{
    rem = temp%10;
    reverse = reverse * 10 +rem ;
    temp = temp/10 ;

}
     }

     if(reverse == i)
     {
         printf("%d\t",i);
     }



    getch();
    return 0;
}
