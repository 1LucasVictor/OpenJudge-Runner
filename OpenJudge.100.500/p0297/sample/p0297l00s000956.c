#include <stdio.h>
#define buf 100001

int main(void){
	int a,b,i,j,cnt,d[buf]={0},e[buf]={0},f[buf]={0};
	char c[buf]={0};
	scanf("%d %d",&a,&b);
	for(i=0;i<a;i++)
		scanf("%s %d",&c[i*10],&d[i]);
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
			printf("%s %d\n",&c[i*10],f[i]);
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


		