#include<stdio.h>

int main(){
	int i,j,n,a[5000];
	long long max,t;
	while(1){
		scanf("%d",&n);
		if(!n)break;
		for(i=0;i<n;i++)scanf("%ld",&a[i]);
		max=0;
		for(i=0;i<n;i++){
			t=0;
			for(j=i;j<n;j++){
				t+=a[j];
				if(t>max)max=t;
			}
		}
		printf("%ld\n",max);
	}

	return 0;
}