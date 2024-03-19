#include <stdio.h>
int linearSearch(int); //引数はt[i]
int s[10000],n;

int main(){
	int q,t[500],i,cnt=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&s[i]);

	scanf("%d",&q);
	for(i=0;i<q;i++) scanf("%d",&t[i]);
	
	for(i=0;i<q;i++){
		if(linearSearch(t[i])==1){
			cnt++;
		}
	}

	printf("%d\n",cnt);
	
	return 0;
}

int linearSearch(int key){
	int i=0;
	
	while(s[i]!=key) i++;
	
	if(i==n) return 0;
	
	return 1;
}
