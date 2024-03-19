#include <stdio.h>

int main() {
	int A, B, maior;
	
	scanf("%d %d",&A,&B);
	if((A<-1000 || B <-1000) || (A>1000 || B >1000)){
	do{
	scanf("%d %d",&A,&B);
	
	}while((A<-1000 || B <-1000) || (A>1000 || B >1000));
	}else if((A+B) > (A-B) && (A+B) > (A*B)){
		maior=(A+B);
		}
		else if((A-B) > (A+B) && (A-B) > (A*B)){
			maior=(A-B);
		}
		else if((A*B) > (A+B) && (A*B) > (A-B)){
			maior=(A*B);
		}
		else if((A+B) == (A-B) && (A+B) == (A*B)){
			maior=(A+B);
		}
	
	printf("%d",maior);
	return 0;
}
