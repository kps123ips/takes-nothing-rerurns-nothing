#include<stdio.h>
void add()
{
	int x,y,z;
	printf("\n Enter two numbers");
	scanf("%d%d",&x,&y);
	z=x+y;
	printf("Sum of two numbers is %d",z);
	
}
void sub()
{
	int x,y,z;
	printf("\nEnter two numbers");
	scanf("%d%d",&x,&y);
	z=x-y;
	printf("Difference of two numbers is %d",z);
}
main()    /*Takes nothing returns nothing*/
{
	void add(void);
	void sub(void);
	add();
	sub();
	getch();
}
