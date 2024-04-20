#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a;
	int b;

		for (a = 1;a <= 9; a++)
		{
			for (b = 1; b <= a; b++)
			{
				printf("%d*%d=%d", b, a, a * b);
				printf(" ");


		   }

			printf("\n");
	     }

}
