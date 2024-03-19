#include<stdio.h>
int main(){
	int n,i,j,v,s[5000],m;
	while(scanf("%d",&n),n){
		memset(s,0,sizeof(s));
		m=-100000;
		for(i=0;i<n;i++){
			scanf("%d",&v);
			for(j=0;j<=i;j++){
				s[j]+=v;
				if(s[j]>m)
					m=s[j];
			}
		}
		printf("%d\n",m);
	}
	return 0;
}