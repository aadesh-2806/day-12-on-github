#include<stdio.h>

void main()
{
	
	int i,b[100],k,s,f,g,n,m,t,z,q,j,l;
	char a[50][50];
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	fflush(stdin);
	
	i=0;
	while(i<n)
	{
		printf("enter string %d=",i+1);					//finding_string_by rearrangement.c
		gets(a[i]);
		j=0;
		while(a[i][j]!='\0')
		{
			j++;
		}
		b[i]=j;
		i++;
	}
	
	for(i=0;i<n;i++)
	{
		for(s=i+1;s<n;s++)
		{
			for(t=0;t<b[s];t++)
			{
				if(a[i][0]==a[s][t])
				{
					j=1;q=1;
					for(t=0;t<b[s];t++)
					{
						if(a[i][j]==a[s][t])
						{
							q++;
							j++;
							t=-1;
						}
					}
					if(q==b[i])
					{
						printf("{%d,%d} ",i+1,s+1);
						break;
					}
				}
			}
		}
	}	
	
	getch();
	
}	
