/*Take user input and find the smallest number between them for using "nested if"*/
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter 3 number\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1<num2)
	{
		if(num1<num3)
		{
			printf("num1 is smaller then among all the numbers & its value is %d\n",num1);
		}
	}
	else if(num2<num1)
	{
		if(num2<num3)
		{
			printf("num2 is smaller then among all the numbers & its value is %d\n",num2);
		}
	}
	else
	{
		printf("num3 is smaller then among all the numbers & its value is %d",num3);
	}
	return 0;
	
}
