#include <stdio.h>
int main(){
	int n;
	int r;
	int i,t,s,k;
	while(scanf("%d", &n)!=EOF){
		r = 0;
		for(i = 0;i <= 9 && i<=n;i++){
			for(t = 0;t <= 9 && i+t<=n;t++){
				for(s = 0;s <=9 && i+t+s<=n;s++){
					for(k = 0;k <=9 && i+t+s+k<=n;k++){
						if(i+t+s+k==n)r++;
					}
				}
			}
		}
		printf("%d\n", r);
	}
	return 0;
}