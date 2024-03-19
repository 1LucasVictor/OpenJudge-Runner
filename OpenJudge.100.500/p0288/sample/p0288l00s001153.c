#include <stdio.h>
#define N 100

int main(void) {
	// your code goes here
	int i,v,k,n,m,j,a[N];
	scanf("%d",&n);
	for(m=0;m<n;m++){
		scanf("%d",&a[m]);
	}
	for(k=0;k<n;k++){
		if(k>0) printf(" ");
		printf("%d",a[k]);
	}
	printf("\n");

	for(i=1;i<n;i++){
	
		v = a[i];
		 j = i-1;
		while(j>=0 && a[j]>v){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = v;
		for(k=0;k<6;k++){
			printf(" ");
			printf("%d",a[k]);
	    }

	}
	
	return 0;
}

	