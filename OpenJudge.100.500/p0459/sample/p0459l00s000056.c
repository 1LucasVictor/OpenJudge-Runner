#include<stdio.h>
int main()
{
	int x,y,a,cnt;
	scanf("%d %d",&x,&y);
	a=y;
	cnt=0;
	while(1){
		if(x==1&&y==4){
			if(a<=0) break;
			else a=a-4;
			cnt++;
		}
		else{
			if(a<=0) break;
			else a=a-2;
			cnt++;
			if(a<=0) break;
			else a=a-4;
			cnt++;
		}
	}
	if(cnt==x) printf("Yes\n");
	else printf("No\n");
	return 0;
}
