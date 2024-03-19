#include<stdio.h>

int main(){
	int a[6000],n,i,j,total=0,amax=-99999999;
	while(1){
		scanf("%d",&n);
		if(!n) break;
		amax=-99999999;
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				total+=a[j];
				if(amax<total) amax=total;
			}
			total=0;
		}
		printf("%d\n",amax);
	}
	return 0;
}