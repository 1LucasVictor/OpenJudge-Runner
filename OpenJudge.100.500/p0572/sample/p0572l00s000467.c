#include<stdio.h>
int main(){
	int L,R,test,min=99999;
	
	scanf("%d %d",&L,&R);
	L=L%2019;
	R=R%2019;
	for(int i=L; i<R-1; i++){
		for(int j=i+1; j<R; j++){
			test = (i*j);
			if(test < min)min=test;
		}
	}
	
	printf("%d\n",min);
	
	return 0;
}