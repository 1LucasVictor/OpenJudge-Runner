#include<stdio.h>

int main(){
	int num_in,num,n[10],m[10],i;
	for(i=0;i<10;i++){
		n[i]=0;
		m[i]=0;}
	num=0;
	while(1){
		scanf("%d",&num_in);
		if(num_in==0){
			for(i=0;i<10;i++)if(m[i]==0)break;
			m[i]=n[0];
			n[0]=0;
			for(i=0;i<9;i++)n[i]=n[i+1];
			num-=1;
			if(num==0)break;}
		else{
			for(i=0;i<9;i++)n[9-i]=n[8-i];
			n[0]=num_in;
			num+=1;}}
	for(i=0;i<10;i++)if(m[i]!=0)printf("%d\n",m[i]);
	return 0;
}