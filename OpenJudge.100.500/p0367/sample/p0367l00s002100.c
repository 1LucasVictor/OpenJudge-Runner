#include<stdio.h>
int main(){
int a,b,c,d,i,cnt;
scanf("%d %d %d",&a,&b,&c);
for(;a<=b;a++){
if((c%a)==0)cnt++;
}
printf("%d\n",cnt);
return 0;
}