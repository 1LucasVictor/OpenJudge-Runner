#include<stdio.h>
int main(void){
	int n,m,a[4]={0,-1,-1,-1},s,c,i,j,f=0;
	scanf("%d %d",&n,&m);
	if(n==3){
		for(i=0;i<m;i++){
			scanf("%d %d",&s,&c);
			if(a[s]==-1||a[s]==c){
				a[s]=c;
			}else{
				f=-1;
			}
		}
		for(i=2;i<=3;i++){
			if(a[i]<0){
				a[i]=0;
			}
		}
		if(a[1]==0){
			f=-1;
		}else if(a[1]<0){
			a[1]=1;
		}
		
		if(f==-1){
			printf("-1\n");
		}else{
			printf("%d\n",a[1]*100+a[2]*10+a[3]);
		}
	}else if(n==2){
		for(i=0;i<m;i++){
			scanf("%d %d",&s,&c);
			if(a[s]==-1||a[s]==c){
				a[s]=c;
			}else{
				f=-1;
			}
		}
		if(a[1]==0){
			f=-1;
		}else if(a[1]<0){
			a[1]=1;
		}
		if(a[2]<0){
			a[2]=0;
		}
		if(f==-1){
			printf("-1\n");
		}else{
			printf("%d\n",a[1]*10+a[2]);
		}
	}else if(n==1){
		for(i=0;i<m;i++){
			scanf("%d %d",&s,&c);
			if(a[s]==-1||a[s]==c){
				a[s]=c;
			}else{
				f=-1;
			}
		}
		if(a[1]<0){
			a[1]=0;
		}
		if(f==-1){
			printf("-1\n");
		}else{
			printf("%d\n",a[1]);
		}
	}
		
	return 0;
}