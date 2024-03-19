#include<stdio.h>

int main() {
	int n,i,count=0;
	scanf("%d", &n);
	int a[n];
	for (i = 1; i < n; i++) {
      scanf("%d", &a[i]);
    }
	for (i = 0; i < n; i++) {
      for(int j=i;j<n;j++){
        if(i+1 == a[j]) count++;
      }
		printf("%d\n", count);
		count = 0;      
    }
}