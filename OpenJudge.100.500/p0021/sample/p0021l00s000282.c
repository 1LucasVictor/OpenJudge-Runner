#include<stdio.h>

int main(){
	int a[6000],n,i,j,l,k,total=0,amax=0;
	while(1){
		scanf("%d",&n);
		if(!n) break;
		amax=0;
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		for(i=0,k=0;i<n;i++){
			for(j=i+1;j<=n;j++){
				for(l=i;l<j;l++) total+=a[l];
				if(amax<total) amax=total;
				total=0;
			}
		}
		printf("%d\n",amax);
	}
	return 0;
}