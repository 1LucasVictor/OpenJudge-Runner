#include<stdio.h>
int main(){
	int t,ans,c1,c2,c3,c4;
	while(~scanf("%d",&t)){
		ans=0;
		for(c1=0;c1<10;c1++){
			for(c2=0;c2<10;c2++){
				for(c3=0;c3<10;c3++){
					for(c4=0;c4<10;c4++){
						if(c1+c2+c3+c4==t)ans++;
					}
				}
			}
		}
		printf("%d\n",ans);
	}
}