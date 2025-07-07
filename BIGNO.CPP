#include<stdio.h>
#include<conio.h>
main()
{
	int a[100],i,n,sum=0,big=0;
	clrscr();
	printf("Enter any value:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		printf("\n Enter a[%d] Element:",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		 printf("\t%d",a[i]);
	}
	printf("\n\n");
	for(i=1;i<n;i++)
	{
		sum=sum+a[i];
		if(i==(n-1))
			printf("%d=",a[i]);
		else
			printf("%d+",a[i]);
	}
	printf("%d",sum);
	big=0;
	for(i=0;i<n;i++)
		if(big<a[i])
			big=a[i];
	getch();
	return 0;
}











