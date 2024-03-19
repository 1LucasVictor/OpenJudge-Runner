#include <stdio.h>

int main()
{
	int n,i,p,t,m,j;
	int a[5001];
	
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;i++){
			scanf("%d",a+i);
		}
		p=a[0];
		for(i=0;i<n;i++){
			t=m=a[i];
			for(j=i+1;j<n;j++){
				t+=a[j];
				if(t>m) m=t;
			}
			if(m>p) p=m;
		}
		printf("%d\n",p);
	}
	return 0;
}