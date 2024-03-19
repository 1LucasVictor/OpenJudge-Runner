#include<stdio.h>
int main() {
	int n, d;
	int a[200000][2];
	int x = 0;
	scanf("%d%d", &n, &d);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &a[i][0], &a[i][1]);
    }
  	for(int i=0;i<n;i++){
    	if(a[i][0]*a[i][0]+a[i][1]*a[i][1]<=d*d){
      		x++;
    	}
  	}
	printf("%d\n", x);
	return 0;
}