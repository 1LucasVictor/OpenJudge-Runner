#include<stdio.h>
int main(){
	int a,i,j,c;
	int k[1000000]={0};
	k[1]=k[0]=1;//0が素数
	for(i=2;i<1000000;i++){
	       if(k[i]==0){
		       for(j=i+i;j<1000000;j+=i){
			       k[j]=1;
		       }
	       }
	}
	while(scanf("%d",&a)!=EOF){
		c=0;
		for(i=0;i<=a;i++)if(k[i]==0)c++;
		printf("%d\n",c);
	}
	return 0;
}
