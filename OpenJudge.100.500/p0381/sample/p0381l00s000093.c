#include<stdio.h>
int main(){
int n,x,sum;
int a,b,c,d,e,f,g;
while(1){
sum=0;
scanf("%d %d",&n,&x);
if(n==0&&x==0)
break;
for(a=1;a<=n;a++){
for(b=a+1;b<=n;b++){
for(c=b+1;c<=n;c++){
if(a+b+c==x)
sum++;
}
}
}
printf("%d\n",sum);
}
return 0;
} 