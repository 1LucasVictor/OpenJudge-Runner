#include<stdio.h>
#define MAX 5000
int sum(int s,int e,int *list){
	int ans=0;
	int i;
	for(i=s;i<=e;i++){
		ans+=list[i];
	}
	return ans;
}
int main(){
	int t[MAX];
	int n;
	int a[MAX];
	int i,j,k;
	int max=-200000000;
	while(scanf("%d",&n)){
		if(n==0){
			break;
		}
		max=-200000000;
		for(i=0;i<n;i++){
				t[i]=0;
		}
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			for(j=i;j<n;j++){
				t[j]+=a[i];
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<i;j++){
				int S = sum(j,i,a);
				if(S>t[i]){
					t[i]=S;
				}
			}
		}
		for(i=0;i<n;i++){
			if(max<t[i]){
				max=t[i];
			}
			
		}
		printf("%d\n",max);
	}	
	return 0;

}