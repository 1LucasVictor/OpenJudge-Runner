#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define lop(i, n) for(i=0; i<n; i++)

int main()
{
	int n, m, i, j, sum=0;
	int s[5], c[5];
	
	scanf("%d %d", &n, &m);
	lop(i, m){
		scanf("%d %d", &s[i], &c[i]);
		if(i>0){
			for(j=0; j<i; j++){
				if(s[i]==s[j] && c[i]!=c[j]){
					printf("-1"); return 0;
				}
				else if(s[i]==s[j] && c[i]==c[j]){
					c[i]=0;
				}
			}
		}
		sum+=c[i]*pow(10, n-s[i]);
	}
	
	if(sum==0)printf("-1");
	else if(sum < pow(10, n-1))printf("-1");
	else printf("%d", sum);
	
	return 0;
}