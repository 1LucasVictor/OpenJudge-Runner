#include <stdio.h>

int main() {
	int A, B;
	int soma=0, sub=0, mult=0, maior=0;
	
	scanf("%d %d",&A,&B);
	if((A<-1000 || B <-1000) || (A>1000 || B >1000))
	do{
	scanf("%d %d",&A,&B);
	
	}while((A<-1000 || B <-1000) || (A>1000 || B >1000));
	
		soma=A+B;
		sub=A-B;
		mult=A*B;
		if(soma > sub && soma > mult){
		maior=soma;
		}
		else if(sub > soma && sub > mult){
			maior=sub;
		}
		else if(mult > soma && mult > sub){
			maior=mult;
		}
	
	printf("%d", maior);
	return 0;
}
