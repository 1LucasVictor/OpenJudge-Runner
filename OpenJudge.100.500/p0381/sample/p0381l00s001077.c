#include<stdio.h>

int C(int n,int x){
	int cunt=0;
	int i,j,k;
	int flag=0;
	
	for(i=1;i<=n-2;i++){
		//printf("i:%d\n",i);
		for(j=i+1;j<=n-1;j++){
			//printf(" j:%d\n",j);
			//if((i+j+n)<x){
				for(k=j+1;k<=n;k++){
					//printf("  k:%d\n",k);
					if(i+j+k==x){
						cunt++;
						//printf("    %d %d %d\n",i,j,k);
						flag=1;
						break;
					}
				}
				if(flag==1){
				flag=0;
				break;
				}
			//}
		}
	}
	
	return cunt;
}

int main(void){
	int n,x;
	int cunt;
	
	while(1){
		scanf("%d %d",&n,&x);
		if(n==0 && x==0)break;
		cunt=C(n,x);
		printf("%d\n",cunt);
	}
	return 0;
}