#include<stdio.h>
int main(){
int a,b,c=1,i,d;
while(scanf("%d %d\n",&a,&b)!=EOF){
if(a>b){
c=a;
a=b;
b=c;
c=1;
}
if(a!=b){
for(i=2;i<=a && i<=b/2+1;i++){
if(a%i==0 && b%i==0){
c=i;
}
}
}
else{
c=a;
}
d=(a/c)*(b/c)*c;
printf("%d %d\n",c,d);
c=1;
}
return 0;
}
