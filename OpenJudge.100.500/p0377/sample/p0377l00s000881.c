#include<stdio.h>

int z;//パブリック変数

int main(void){//floatよりもdoubleを
int n,a[52+1],i,as[4+1][13+1],j;
char c[52+1],dummy;
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%c",&dummy);
	scanf("%c %d",&c[i],&a[i]);
}
//全数導入↓
for(j=1;j<=4;j++){
	for(i=1;i<=13;i++) as[j][i]=1;
}
//在るもの全て塗りつぶす↓
for(i=1;i<=n;i++){
	if(c[i]=='S') as[1][a[i]]=0;
	if(c[i]=='H') as[2][a[i]]=0;
	if(c[i]=='C') as[3][a[i]]=0;
	if(c[i]=='D') as[4][a[i]]=0;
}
//残った者を出力↓
for(j=1;j<=4;j++){
	for(i=1;i<=13;i++){
		if(as[j][i]==1){
			if(j==1) printf("S %d\n",i);
			if(j==2) printf("H %d\n",i);
			if(j==3) printf("C %d\n",i);
			if(j==4) printf("D %d\n",i);
		}
	}
}
return 0;
}
