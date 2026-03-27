#include <stdio.h>
int main(void) 
{	
	int i;
	for (i= 5; i >= 1; i--)//행(줄)
	{	
		int j;
		for (j = 1; j <= i; j++) { //열(칸)
			printf("*");
		}

		printf("\n");
	}
	//int i;
	//for (i = 1; i <= 5; i++)//행(줄)
	//{
	//	int j;
	//	for (j = 1; j <= i; j++) { //열(칸)
	//		printf("*");
	//	}

	//	printf("\n");
	//}




	return 0;
}