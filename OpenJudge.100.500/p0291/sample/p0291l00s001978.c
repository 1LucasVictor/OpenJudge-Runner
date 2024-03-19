#include<stdio.h>
int main(){
    int N,i,j,d,max;
	scanf("%d",&N);
	int A[N];
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	/*Max check*/
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			d=A[j]-A[i];
			if(i==0&&j==i+1)max=d;
			if(max<d)max=d;
		}
	}
	printf("%d\n",max);
    return 0;
}
