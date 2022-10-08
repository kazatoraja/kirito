#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("enter the number a");
scanf("%d",&a);
printf("enter the ticket b");
scanf("%d",&b);
if(a%5==0)
{
c=b*5;
d=a-b;
printf("ticket is ready",c);
scanf("%d",&b);
printf("\nbalance paid=%d",d);
}
else if(a>5)
{
printf("\nticket is not ready");
}
else
{
printf("input not valid");
}
getch();
}

