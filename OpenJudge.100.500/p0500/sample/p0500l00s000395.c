#include <stdio.h>

struct point{
	int s;
	int c;
};

int main(){
	int i, j, n, m,checker=0;
	scanf("%d%d",&n,&m);
	struct point d[m],p;
	for(i=0;i<m;i++){
		scanf("%d%d",&d[i].s,&d[i].c);
		if((n!=1)&&(d[i].s==1)&&(d[i].c==0)) checker = 1;
	}
	for(i=0;i<m-1;i++){
		for(j=i+1;j<m;j++){
			if(d[i].s>d[j].s){
				p=d[i];
				d[i]=d[j];
				d[j]=p;
			}
		}
	}
	
	int ans[n];
	for(i=0;i<n;i++) ans[i]=0;
	ans[0]=1;

	for(i=0;i<m-1;i++){
		for(j=i+1;j<m;j++){
			if((d[i].s==d[j].s)&&(d[i].c!=d[j].c)) {
				checker = 1;
				break;
			}
		}
	}
	if(checker==1) printf("-1");
    else if((n==1)&&(m==0)) printf("0");
	else {
		for(i=0;i<m;i++) ans[d[i].s - 1] = d[i].c;
		for(i=0;i<n;i++) printf("%d",ans[i]);
	}
    printf("\n");
}
	
