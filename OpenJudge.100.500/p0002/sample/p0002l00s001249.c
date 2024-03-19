#include<stdio.h>

int main(){
	
	int N,i,a[1000],b[1000],c[1000],d[1000];
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
		if(a[i]>b[i]&&a[i]>c[i]){
			if(a[i]*a[i]==b[i]*b[i]+c[i]*c[i]){
				d[i]=1;
			}
		}
		else if(b[i]>a[i]&&b[i]>c[i]){
			if(b[i]*b[i]==a[i]*a[i]+c[i]*c[i]){
				d[i]=1;
			}
		}
		else if(c[i]>a[i]&&c[i]>b[i]){
			if(c[i]*c[i]==a[i]*a[i]+b[i]*b[i]){
				d[i]=1;
			}
		}
		else{
			d[i]=0;
		}
	}
	
	for(i=0;i<N;i++){
		if(d[i]==1){
			printf("YES");
		}
		if(d[i]==0){
			printf("NO");
		}
		printf("\n");
	}
		
							
	return 0;
}