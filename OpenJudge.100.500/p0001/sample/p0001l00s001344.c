#include<stdio.h>
int main(void){
int a,b;
char s1[100000] = {'\0'};
while(scanf("%d %d",&a,&b) == 2){
a = a+b;
sprintf(s1,"%d",a);
for(b=0;b<100000;b++){
    s1[b];
    if(s1[b]==0)break;
}
printf("%d",b);
a =0;
b = 0;
}
return 0;
}