#include<stdio.h>
int main(void){
	int n,a[10001],i,Min,Max;
	int total=0;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if (i==0) {
			Min=a[i];
			Max=a[i];
		}
		if( Min>a[i] ){
			Min=a[i];
		}
		if ( Max<a[i] ) {
			Max=a[i];
		}
		total+=a[i];
	}


	printf("%d %d %d\n",Min,Max,total);



	return 0;
}

