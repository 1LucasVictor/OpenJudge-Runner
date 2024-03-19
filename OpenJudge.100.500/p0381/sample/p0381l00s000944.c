#include <stdio.h>
int main(void){
	int a[100],b[100],c[100],n[100],x[100],Count=0,count2[100]={0},i,point[100];
	
	while(1){
		scanf("%d %d",&n[Count],&x[Count]);
		if(n[Count]==0 && x[Count]==0){
			break;
		}
		Count++;
	}
	for(i=0;i<n[i];i++){
		for(a[i]=1;a[i]<=n[i];a[i]++){
			for(b[i]=2;b[i]<=n[i];b[i]++){
				for(c[i]=3;c[i]<=n[i];c[i]++){
					if(a[i]+b[i]+c[i]==x[i] && a[i]!=b[i] && a[i]!=c[i] && b[i]!=c[i]){
						count2[i]++;
						//printf("%d+%d+%d=%d\n",a[i],b[i],c[i],a[i]+b[i]+c[i]);
					}
				}
			}
		}
	}
	for(i=0;i<Count;i++){
		printf("%d\n",count2[i]/3);
	}
	return 0;
}