#include <stdio.h>
	int main(){
		int n,a,b,c,i,kotae[100];
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d %d %d",&a,&b,&c);
			if((a*a)+(b*b)==(c*c)||(c*c)+(b*b)==(a*a)||(a*a)+(c*c)==(b*b)){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}
	return 0;
}