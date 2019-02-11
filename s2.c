#include<stdio.h>
#include<conio.h>
voidmain()
{
int a;
printf("enter the number");
scanf("%d",&a);
if(a<0)
{
printf("invalid choice");
}
elseif(a%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}
