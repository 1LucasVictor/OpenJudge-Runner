#include <stdio.h>
int saisyou(int,int);
int saidai(int,int);
main(){
int a,b;
while(scanf("%d%d",&a,&b) != EOF){
printf("%d %d\n",saidai(a,b),saisyou(a,b));
}
return 0;
}

int saisyou(int a,int b){
int i,j;
for(i=1;i<=b;i++){
for(j=1;b*j<=a*i;j++){
if(a*i==b*j){
return b*j;
}
}
}
}

int saidai(int a,int b){
int i,big;
big=a;
if(a<b){
big=b;
}
for(i=big/2;i>0;i--){
if(a%i==0 && b%i==0){
return i;
}
}
}