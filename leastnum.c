#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,x,m,b[50],c=0,d;
clrscr();
scanf("%d",&m);
scanf("%d",&x);
for(i=0;i<m;i++)
{
b[i]=m%10;
m=m/10;
c++;
}
for(i=0;i<c;i++)
{
for(j=i+1;j<c;j++)
{
if(b[j]>b[i])
{
d=b[j];
b[j]=b[i];
b[i]=d;
}
}
}
for(i=c-1;i>z;i--)
{
printf("%d",b[i]);
}
getch();
}