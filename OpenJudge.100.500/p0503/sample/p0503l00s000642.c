#include <stdio.h>

int main(){
	int i, j, n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
              puts("NO");
              return 0;
			}
		}
	}
    puts("YES");
}
