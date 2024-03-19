#include<stdio.h>
#define MAX 5000


int main(){
	int t[MAX];
	int n;
	int a[MAX];
	int b[MAX];
	int i,j,k;
	int max=-200000000;
	while(scanf("%d",&n)){
		if(n==0){
			break;
		}
		max=-200000000;
		for(i=0;i<n;i++){
				t[i]=b[i]=0;
		}
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			for(j=i;j<n;j++){
				t[j]+=a[i];
				b[j]=t[j];
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<i;j++){
				t[i]-=a[j];
				if(t[i]>b[i]){
					b[i]=t[i];
				}
			}
		}
		for(i=0;i<n;i++){
			if(max<b[i]){
				max=b[i];
			}	
		}

		printf("%d\n",max);
	}	
	return 0;

}