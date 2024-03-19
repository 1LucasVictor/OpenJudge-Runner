#include <stdio.h>
int main(void){
	int a,b,c,n,x,Count=0,count2=0,i,point[100],j,allcount=0;
	
	while(1){
		scanf("%d %d",&n,&x);
		i=0;
		for(a=i;a<=n;a++){
			for(b=a;b<=n;b++){
				for(c=b;c<=n;c++){
					if(a+b+c==x && a!=b && a!=c && b!=c &&a!=0 &&b!=0 &&c!=0){
						count2++;
						//printf("%d+%d+%d=%d\n",a,b,c,a+b+c);
						
					}
				}
			}
		}
		if(n!=0 && x!=0)printf("%d\n",count2);
		if(n==0 && x==0){
			break;
		}
		count2=0;
		Count++;
	}
	/*for(i=0;i<=Count;i++){
		for(a[i]=i;a[i]<=n[i];a[i]++){
			for(b[i]=a[i];b[i]<=n[i];b[i]++){
				for(c[i]=b[i];c[i]<=n[i];c[i]++){
					if(a[i]+b[i]+c[i]==x[i] && a[i]!=b[i] && a[i]!=c[i] && b[i]!=c[i] &&a[i]!=0 &&b[i]!=0 &&c[i]!=0){
						count2[i]++;
						printf("%d %d+%d+%d=%d\n",i,a[i],b[i],c[i],a[i]+b[i]+c[i]);
					}
				}
			}
		}
		printf("%d??±???\n",i);
	}
	for(i=0;i<Count;i++){
		printf("%d %d\n",i,count2[i]);
	}*/
	return 0;
}