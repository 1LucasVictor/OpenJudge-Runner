#include<stdio.h>
	int main(){
		int n,a[10000],i,j,k,max,pre;
		while(scanf("%d",&n),n){
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);
			max=a[0];
			for(i=0;i<n;i++)
				for(j=1;j<=n;j++){
					if(i+j>n)
						break;
					pre=0;
					for(k=i;k<j;k++)
						pre+=a[k];
					if(pre>max)
						max=pre;
			}
			printf("%d\n",max);
		}
		return 0;
}
	