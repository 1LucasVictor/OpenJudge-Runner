#include<stdio.h>

int main(void){
int n,in,stack[10],c=0;

while((scanf("%d",&in))!=EOF){

if(in!=0){
stack[c]=in;
c++;
}
else{
printf("%d\n",stack[c-1]);
c--;
}

}


return 0;
}