#include <stdio.h>
#define buf 101
int main(void){
	int a,b,i,j,cnt,d[buf]={0},e[buf]={0},f[buf]={0};
	char c[buf];
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++)
		scanf("%s %d",&c[i],&d[i]);
	for(i=0; ;i++){
		cnt=0;
		if(i==a)
			i=0;
		if(d[i]==0)
			goto out;
		if(d[i]>b){
			d[i]-=b;
			for(j=0;j<a;j++)
				e[j]+=b;
		}
		else if(d[i]<=b){
			for(j=0;j<a;j++)
				e[j]+=d[i];
			d[i]=0;
			f[i]=e[i];
			printf("p%d %d\n",i+1,f[i]);
		}
		out:
		for(j=0;j<a;j++){
			if(d[j]==0)
				cnt++;
		}
		if(cnt==a)
			break;
	}
	return 0;
}


		