#include <stdio.h>

#define N 150

int main(){
	
	int i;
	int j;
	int k;
	int n;
	int num;
	int point;
	int str[N][N];
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
	 for(j=1;j<=n;j++){
	 str[i][j] = 0;
	 }
	}
	
	
	for(i=1;i<=n;i++){
	scanf("%d%d",&num,&k);
	 for(j=1;j<=k;j++){
	 scanf("%d",&point);
	 str[i][point] = 1;
	}
   }
   
   for(i=1;i<=n;i++){
   	for(j=1;j<n;j++){
   printf("%d ",str[i][j]);
   	}
   printf("%d\n",str[i][j]);
   }
   
   return 0;
}