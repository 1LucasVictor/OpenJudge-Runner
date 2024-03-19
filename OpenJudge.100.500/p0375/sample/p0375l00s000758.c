#include<stdio.h>
int main(){
	int i,n;
	int a[10001],b[10001];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%3==0)printf(" %d",i);
		else if(i<10)a[i]=i;
		else{
			b[i]=i/10;
			a[i]=i%10;
			if(a[i]==3)printf(" %d",i);
		}
	}
	printf("\n");
	return 0;
}

