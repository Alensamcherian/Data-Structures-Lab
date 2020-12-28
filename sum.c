#include<stdio.h>
#include <stdlib.h>
int sum(int num1 , int num2);
int main()
{
int num1,num2,total;
printf("Enter the two number ");
scanf("%d %d",&num1,&num2);
total=sum(num1,num2);
printf("The sum of these numbers :%d",sum(num1,num2));
return 0;
}
int sum(int num1, int num2)
{
int sum=num1+num2;
return sum;
}