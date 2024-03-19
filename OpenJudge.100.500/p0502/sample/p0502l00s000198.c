#include<stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
int A[1000],N,B[1000],n=0;

scanf("%d", &N);
for (int i = 0; i < N; ++i)scanf("%d", A+i);

for (int i = 0; i < N; ++i)
{
	/* code */
	if(A[i]%2==0){
		B[n]=A[i];
		n++;	
	}
}
N=0;
for (int i = 0; i <n; ++i)
{
	/* code */
	if(B[i]%3==0 || B[i]%5==0) 
		N++;
//	printf("B=%d N=%d n=%d\n",B[i],N,n);
}
if (N==n)
	printf("APPROVED\n");
	else
printf("DENIED\n");
	return 0;
}