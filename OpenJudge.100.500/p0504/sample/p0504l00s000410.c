#include<stdio.h>

int main()
{
	int H, A, B = 0;
	scanf("%d %d", &H, &A);

	while(H>0){
      B++;
      H=H-A;
    }
	printf("%d", B);
	return 0;
}