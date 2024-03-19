#include <stdio.h>
int main(){
int a,b,c,n,s=0;
char i[3];
scanf("%s",i);
for(n=0;n<3;n++){
if(i[n]=='1')
{s+=1;}
}
printf("%d\n",s);
}