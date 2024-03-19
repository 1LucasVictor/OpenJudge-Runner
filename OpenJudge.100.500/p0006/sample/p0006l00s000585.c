#include<stdio.h>
int main(){
	int n,i,temp,Loan = 100000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		Loan *= 1.05;
		temp = Loan % 1000;
		if(temp != 0)
			Loan += (1000 - temp);
	}
	printf("%d\n",Loan);
	return 0;
}