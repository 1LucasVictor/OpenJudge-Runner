#include<stdio.h>
int main()
{
	int A,B,X;
	scanf("%d%d%d",&A,&B,&X);
	
	 if(A+B>X)
	 {
	 	if(X>=A){
	 		printf("YES");
		 }
		 else
		 {
		 	printf("NO");
		 }
	 }
		else{
		
		printf("NO");
	}

}