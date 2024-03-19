#include<stdio.h>
int main(){
	int i,j,n,Rt[200000];
	int sa,saMax;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&Rt[i]);
	}
	
	saMax=Rt[1]-Rt[0];
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			sa=Rt[j]-Rt[i];
//			printf("%d-%d=%d\n",Rt[j],Rt[i],Rt[j]-Rt[i]);
			if(sa>saMax){
				saMax=sa;
			}
		}
	}
	printf("%d\n",saMax);
	return 0;
}