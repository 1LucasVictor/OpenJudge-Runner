#include<stdio.h>
int main(void){
		int i,j,N,temp;
		int count=0;
		scanf("%d",&N);
		int a[N];
		for(i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<N;i++){
			for(j=N-1;j>i;j--){
				if(a[j]<a[j-1]){
					count++;
					temp=a[j];
					a[j]=a[j-1];
					a[j-1]=temp;
				}
			}
		}
		for(i=0;i<N;i++){
			printf("%d",a[i]);
		}		
		printf("\n%d\n",count);
return 0;
}