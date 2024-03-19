#include <stdio.h>
int main(void){

int a=0,b=0,c=0,d=0,n=0,x=0;

while(1){
scanf("%d %d",&n,&x);

if(n==0&&x==0){
break;
}

for(a=1;a<=n;a++){
	for(b=1;b<=n-1;b++){
		for(c=1;c<=n-2;c++){
			if(a+b+c==n){
			d++;
			}
		}
	}
}

printf("%d\n",d/3);

}

return 0;
}