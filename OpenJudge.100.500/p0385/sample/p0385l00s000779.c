#include<stdio.h>
int main(){
int c=0,d=0,a=0,num,x,n,m,z,f,s;
while(1){
x=getchar();
if(x=='0')
break;
else
num=x-'0';
while(1){
	n=getchar();
	if(n=='\n'){
		printf("%d\n",num);
		num=0;
		break;
	}
	num+=n-'0';
}
}

return 0;
}