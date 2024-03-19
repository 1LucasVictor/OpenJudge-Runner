#include<stdio.h>


int m,f,r;
int n;
int x,y,z,zz;
int total,ans;
int cnt;
int hoge[256];
int i,s,t;

main(){
	
	for(z=0;;z++){
	scanf("%d%d",&x,&y);
	for(i=1;i<=x;i++){
		for(s=1;s<=x;s++){
			for(t=1;t<=x;t++){
				total=(i+s+t);
				if((total==y)&&i<s&&s<t){cnt++;}
				
				total=0;
				
			}
		}
	}
	hoge[z]=cnt;
	cnt=0;
	if(x==0&&y==0){break;}
	
	}
	
	for(zz=0;zz<z;zz++){
	printf("%d\n",hoge[zz]);
	
	
	}
	
	
	
	return 0;
}