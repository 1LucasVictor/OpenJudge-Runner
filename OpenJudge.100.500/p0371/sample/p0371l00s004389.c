#include <stdio.h>

int main(){
	int n;
	int a[10000];
	int min,max=0;
	int sum=0;
	int cnt;
	scanf("%d",&n);
	
	for(cnt=0;cnt < n;cnt++){
		scanf("%d",&a[cnt]);
		if(cnt==0){
			min=a[cnt];
		}
		else if(min > a[cnt]){
			min=a[cnt];
		}
		if(max < a[cnt]){
			max=a[cnt];
		}
		sum+=a[cnt];
	}
	printf("%d %d %d\n",min,max,sum);
	return 0;
}