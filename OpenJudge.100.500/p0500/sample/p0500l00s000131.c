#include<stdio.h>

int main(void){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	
	int ans[3];
	
	switch(n){
		case 1:
			ans[0]=0;
			break;
			
		case 2:
			ans[0]=1;
			ans[1]=0;
			break;
			
		case 3:
			ans[0]=1;
			ans[1]=0;
			ans[2]=0;
			break;
	}
	
	int s,c;
	int count[3]={0,0,0};
	for(int i=0;i<m;i++){
		scanf("%d",&s);
		scanf("%d",&c);
		if(count[s-1]!=0&&ans[s-1]!=c){
			printf("-1");
			return 0;
		}
		ans[s-1]=c;
		count[s-1]++;
	}
	
	if(n!=1&&ans[0]==0){
		printf("-1");
		return 0;
	}
	
	for(int i=0;i<n;i++){
		printf("%d",ans[i]);
	}
	return 0;
}