#include <stdio.h>
int main(){
	int N,A,B;
	scanf("%d %d %d",&N,&A,&B);
	int Ptrain=A*N;
	if(Ptrain<=B){
		printf("%d",Ptrain);
    }else{
		printf("%d",B);
    }
	return 0;
}