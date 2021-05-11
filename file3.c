#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i,n,x;
	FILE *p,*q;
	char v;
	p=fopen("file3.c","r");
	q=fopen("file3-copy.c","w");
	if((p==NULL)||(q==NULL))
	{
		printf("Nahi huyi");
		getch();
		exit(1);
	}
	// EOF
	while(1) //'0'
	{
		v=fgetc(p);
		if(v==EOF) // if(feof(p))
		{
			break;
		}
		//printf("%c",v);
		fputc(v,q);
	}
	printf("copy ho gyi");
	fclose(p);
	fclose(q);
	getch();

}
