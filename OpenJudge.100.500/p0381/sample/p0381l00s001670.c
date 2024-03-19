#include<stdio.h>

int main(void){
	int s,i,j,k,n,m;
	s=0;
	int A[100][3]={};
	while(1){
		scanf("%d %d",&n,&m);
		if(n==0&&m==0) break;
	/*???????¨????*/
	for(i=0;i<100;i++){
		A[i][0]=i+1;
		A[i][1]=i+1;
		A[i][2]=i+1;
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<n;k++){
				if(i+j+k+3==m) s++;
			}
		}
	}
	printf("%d\n",s);
	}
}