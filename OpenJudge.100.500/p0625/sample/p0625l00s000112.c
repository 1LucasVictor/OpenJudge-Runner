#include <stdio.h>
#define N 16

int main(){
	int A, B;
	scanf("%d %d", &A, &B);
	int n[N]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, i, flag=0;
	
	for(i=0;i<N;i++){
		if(i==15){
			if(n[0]!=1 && n[i-1]!=1){
				A--;
				n[i]=1;
			}
		}
		else if(i==0){
			if(n[i+1]!=1){
				A--;
				n[i]=1;
			}
		}
		else{
			if(!n[i-1]&&!n[i+1]){
				A--;
				n[i]=1;
			}
		}
		if(A<=0){
			flag=1;
			break;
		}
	}
	if(!flag){
		printf(":(");
		return 0;
	}
	for(i=0;i<N;i++){
		if(n[i]==0){
			if(i==0){
				if(n[15]!=2 && n[i+1]!=2){
					B--;
					n[i]=2;
				}
			}
			else if(i==15){
				if(n[0]!=2 && n[i-1]!=2){
					B--;
					n[i]=2;
				}
			}
			else{
				if(n[i-1]!=2 && n[i+1]!=2){
					B--;
					n[i]=2;
				}
			}
		}
		if(B<=0){
			flag=2;
			break;
		}
	}
	if(flag==2){
		printf("Yay!");
		return 0;
	}
	else{
		printf(":(");
		return 0;
	}
	
}