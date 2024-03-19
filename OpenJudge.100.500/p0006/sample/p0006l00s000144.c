#include<stdio.h>

int main(){

int n;
int i;
int x=100000;

scanf("%d",&n);

while(n--!=0){
x*=1.05;
if(x%1000!=0){
x=(x/1000+1)*1000;
	}
	}


printf("%d\n",x);

return 0;
	}