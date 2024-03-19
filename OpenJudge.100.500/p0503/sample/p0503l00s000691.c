#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[300000]={0};
	while(n--){
		int k;
		scanf("%d",&k);
		a[k]++;
	}
	int i;
	int flag=0;
	for(i=0;i<300000;i++){
		if(a[i]>1){
			flag=1;
			break;
		}
	}
	if(flag==1) printf("NO");
	else printf("YES");
	return 0;
}