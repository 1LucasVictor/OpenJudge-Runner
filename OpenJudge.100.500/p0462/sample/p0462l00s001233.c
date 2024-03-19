#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAXSIZE 20
int main(int argc, char *argv[]) {
//	

	char A[MAXSIZE], B[5];
	scanf("%s %s", A, B);
	int i;
	int j;
	int lenA = strlen(A);
	int lenB = strlen(B);
	char temp;
	for (i = 0; i < lenA/2; ++i)
	{
		temp = A[i];
		A[i] = A[lenA-1-i];
		A[lenA - 1 - i] = temp;
		
	}
//	printf("%s\n", A);
	
	for ( i = 1; i < 3; i++)
	{
		B[i] = B[i + 1];
	}
	B[3] = '\0';
	
	temp = B[0];
	B[0] = B[2];
	B[2] = temp;
//	printf("%s", B);
	lenB = strlen(B);
	int *res = (int *)calloc(lenA + 4, sizeof(int));
	
	for ( i = 0; i < lenB; ++i)
	{
		for (j = 0; j < lenA; ++j)
		{
			res[i + j] += (A[j] - '0') * (B[i] - '0'); 
			if (res[i + j] >= 10)
			{
				res[i + j + 1] += 1;
				res[i + j] %= 10;  
			}
		}
	}
	i = lenA + 3;
	
	while (res[i] == 0)
	{
		i--;
	}
	
	while (i >  1)
	{
		printf("%d", res[i--]);
	}
	
//	int k = 0;
//	int res[lenA + 5] = {0};
//	for (i = strlen(B) - 1; i >= 0; --i)
//	{
//		k = 2 - i;
//		for (j = lenA - 1; j >= 0; --j)
//		{
//			res[k++] = res[k] + (B[i] - '0') * (A[j] - '0');
//		}
////		k = i - 1
//		
//	}
//	for ()
//	
	
	return 0;
}