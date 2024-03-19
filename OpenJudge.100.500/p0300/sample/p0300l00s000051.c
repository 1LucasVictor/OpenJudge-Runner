#include<stdio.h>

main(){
	int i,j,s,q,t,sum;
	int n[10001];
	for(i=1;i<=10000;i++){
		n[i]=0;
	}
	scanf("%d",&s);
	for(i=0;i<s;i++){
		scanf(" %d",&j);
		n[j]=1;
	}
	scanf(" %d",&t);
	sum=0;
	for(i=0;i<t;i++){
		scanf(" %d",&j);
		if(n[j]==1){
			sum++;
		}
	}
	printf("%d\n",sum);
	return 0;
}