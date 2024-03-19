#include <stdio.h>
#define N 101


int main(){
	int v[N][N];
	int n,k,i,j,flag=0,a=2;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&v[i][0]);
		scanf("%d",&v[i][1]);
		for(j=0;j<v[i][1];j++){
			scanf("%d",&v[i][j+2]);
		}
	}

	k = i ;

	for(i=0;v[i][0]!='\0';i++){
		for(j=0;v[j][0]!='\0';j++){
			if(v[i][a]==j+1)flag = 1;
			if(flag==1){
				printf("%d",1);
				flag = 0;
				a++;
				if(j!=k-1)printf(" ");
			}else {
				printf("%d",0);
				if(j!=k-1)printf(" ");
			}
		}
		printf("\n");
		a=2;
	}
return 0;
}