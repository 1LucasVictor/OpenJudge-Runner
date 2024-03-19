#include<stdio.h>
int main(){
char y[1001],z,x;
int a,b,c,e,f;
c=0; 
while(1){
	scanf("%s",y);
	if(y[0]=='0')break;
for(a=0;y[a]!='\0';a++){
	b=y[a]-'0';
	c=b+c;
}
printf("%d\n",c);
c=0;
}
return 0;
}
