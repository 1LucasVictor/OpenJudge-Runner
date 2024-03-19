#include<stdio.h>
int main(){
int n,a=0,b,c,d,e=0;
while(scanf("%d",&n)!=EOF){
while(1){b=0;
while(1){c=0;
while(1){d=0;
while(1){
if(a+b+c+d-n==0)
e++;
if(d==9)break;
d++;
}
if(c==9)break;
c++;
}
if(b==9)break;
b++;
}
if(a==9)break;
a++;
}
printf("%d\n",e);
}
return 0;
}