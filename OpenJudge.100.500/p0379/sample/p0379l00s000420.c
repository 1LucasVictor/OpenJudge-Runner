#include<stdio.h>
int main(void){
	int n,m,i,k,num,sum;
	scanf("%d %d",&n,&m);
	int a[n][m],b[m];
	for(i=0;i<n;i++){
		for(k=0;k<m;k++){
			scanf("%d",&a[i][k]);
		}
	}
	for(i=0;i<m;i++){
		scanf("%d",&num);
		b[i]=num;
	}
	for(i=0;i<n;i++){
		for(k=0;k<m;k++){
			a[i][k]*=b[k];
		}
	}
	for(i=0;i<n;i++){
		sum=0;
		for(k=0;k<m;k++){
			sum+=a[i][k];
		}
		printf("%d\n",sum);
	}
	return 0;
}
