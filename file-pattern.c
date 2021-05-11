#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i,n,x;
	FILE *p;
	p=fopen("pattern.txt","a");
	if(p==NULL)
	{
		printf("Nahi huyi");
		getch();
		exit(1);
	}
	//clrscr();
	printf("Welcome\nEnter a value=\n");
	scanf("%d" ,&n);

	x=n;
	while(x>=1)
	{
		i=x;
		while(i>=1)
		{
			fprintf(p,"%d",x);
			//fprintf(stdout,"%d",x);
			printf("%d",x);
			i=i-1;
		}
		fprintf(p,"\n");
		printf("\n");
		x=x-1;
	}
	fclose(p);
	getch();

}
