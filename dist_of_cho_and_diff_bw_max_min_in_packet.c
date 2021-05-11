#include<stdio.h>

void main()
{
	
	int i,b[40],a[100],r,s,j,t,x,m,n;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter number of student=");
	scanf("%d",&m);

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

	x=0;
	for(i=0;i<=n-m;i++)
	{
		b[x++]=a[i+m-1]-a[i];
	}
	m=b[0];
	for(i=1;i<x;i++)
	{
		if(m>b[i])
		{
			m=b[i];
		}
	}
	printf("%d",m);
	getch();
	
}	 		
