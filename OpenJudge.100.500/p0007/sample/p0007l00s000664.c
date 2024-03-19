#include<stdio.h>
int main(){
int a,b,c,n,answer;
while(scanf("%d",&n)!=EOF){
answer=0;
for(a=0;(a<=n&&a<=9);a++){
for(b=0;(a+b<=n&&b<=9);b++){
for(c=0;(a+b+c<=35&&c<=9);c++){
if(((n-a-b-c)>=0)&&((n-a-b-c)<=9)){
answer+=1;
}
}
}
}
printf("%d\n",answer);
}
return 0;
}