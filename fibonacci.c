#include<stdio.h>
#include<conio.h>
void main()
{
int n, s=0, m=1, k, l;
clrscr();

printf("Enter the number of terms\n");
scanf("%d",&n);
printf("First %d terms of fibonacci series are :\n",n);
for(l=0;l<n;l++)
{
if(l<=1)
k=l;
else
{
k=s+m;
s=m;
m=k;
}
printf("%d\n",k);
}
getch();
}
