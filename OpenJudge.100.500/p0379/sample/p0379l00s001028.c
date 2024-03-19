#include<stdio.h>
int main(){
int n,m,i,j;
int ai[100][100];
int bi[100][1];
int c[100][1];

scanf("%d%d", &n, &m);
for(i=0; i<n; i++){
	for(j=0; j<m; j++){
		scanf("%d", &ai[i][j]);
	}
}

for(i=0; i<n; i++){
	scanf("%d", &bi[i][0]);
}

for(i=0; i<n; i++){
	for(j=0; j<m; j++){
		c[i][0]+=ai[i][j]*bi[j][0];
	}
	printf("%d\n", c[i][0]);
}

return 0;

}

		
		