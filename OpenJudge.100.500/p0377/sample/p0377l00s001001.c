#include<stdio.h>

int main(void){
	int n,i,b,j=0;
	int ka[4][13]={{0}};
	char a,kaigyokun='0';
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%c",&kaigyokun);
		scanf("%c %d",&a,&j);
		if(a=='S')b=0;
		else if(a=='H')b=1;
		else if(a=='C')b=2;
		else if(a=='D')b=3;
		ka[b][j]=1;
	}
	for(i=0;i<4;i++){
		for(j=1;j<=13;j++){
			if((ka[i][j])!=1){
				if(i==0)a='S';
				else if(i==1)a='H';
				else if(i==2)a='C';
				else a='D';
				printf("%c %d\n",a,j);
			}
		}
	}
	return 0;
}
