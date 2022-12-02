/*prog. to take your name as a string input & show "welcome your name" on the screen*/ 

#include<stdio.h>
int main()
{
	char A[20];
	printf("Enter your name\n");
	fgets(A,sizeof(A),stdin);
	printf("WELCOME %s\n",A);
	return 0;
}
