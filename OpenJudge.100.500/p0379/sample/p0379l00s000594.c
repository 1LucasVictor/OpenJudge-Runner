#include<stdio.h>
int main(){
int n,m,i,j,c;
int ai[100][100];
int bi[100];

scanf("%d%d", &n, &m);

for(i=0; i<n; i++){
	for(j=0; j<m; j++){
		scanf("%d", &ai[i][j]);
	}
}

for(j=0; j<n; j++){
	scanf("%d", &bi[j]);
}

for(i=0; i<n; i++){
                c=0;
	for(j=0; j<m; j++){
		c+=ai[i][j]*bi[j];
	}

		printf("%d\n", c);
	
}

return 0;

}
	