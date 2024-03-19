#include <stdio.h>
int main(){
	int a[100][100], b[100][100];
	int n, m, l, x, y, z, ans;
	ans = 0;
	scanf("%d %d %d", &n, &m, &l);
	for(x = 0; x < n; x++){
		for(y = 0; y < m; y++){
			scanf("%d", &a[x][y]);
		}
	}
	for( x = 0; x < m; x++){
		for( y = 0; y < l; y++){
			scanf("%d", &b[x][y]);
		}
	}
	for(x = 0; x < n; x++){
		for(z = 0; z < l; z++){
			for(y = 0; y < m; y++){
				ans += a[x][y] * b[y][z];
			}
			printf("%d", ans);
			if(z != l-1){
				printf(" ");
			}
			ans = 0;
		}
		printf("\n");
	}
	
	return 0;
}