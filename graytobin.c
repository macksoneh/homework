/* This program is for converting Gray code to Binary code. */
#include<stdio.h>
#include<conio.h>
void main()
{int a[10],i=0,c=0,n;
printf("\n enter the gray code >");
scanf("%d",&n);
while(n!=0)
	{a[i]=n%10;
		n/=10;
		i++;
		c++;
	}
for(i=c-1;i>=0;i--)
{
	if(a[i]==1)
	{
		if(a[i-1]==1)
		a[i-1]=0;
		else
		a[i-1]=1;
	}
}
printf("\n the binary code is >");
for(i=c-1;i>=0;i--)
printf("%d",a[i]);
getch();
}