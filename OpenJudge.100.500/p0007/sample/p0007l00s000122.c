#include<stdio.h>

int main(void){
	int a,b,c,d,n,ans,f,l[4];
	
	while(scanf("%d",&n)!=EOF){
		ans=0;
		for(l[0]=0;l[0]<=9;l[0]++){
			for(l[1]=0;l[1]<=9;l[1]++){
				for(l[2]=0;l[2]<=9;l[2]++){
					for(l[3]=0;l[3]<=9;l[3]++){
						if(l[0]+l[1]+l[2]+l[3]==n)ans++;
						if(l[3]>n)break;
					}
					if(l[2]>n)break;
				}
				if(l[1]>n)break;
			}
			if(l[0]>n)break;
		}
		printf("%d\n",ans);
		
	}
	
	return 0;
	
}