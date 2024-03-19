#include<stdio.h>
int main(){
int train[10];
int x,top,i;
while(scanf("%d",&x)!=EOF){
if(x==0){
printf("%d\n",top);
train[top-1]=0;
for(i=0;i<10;i++){
train[i]-=(train[i]!=0);
if(train[i]==1) top=i+1;
}
}else{
top=x;
for(i=0;i<10;i++){
train[i]+=train[i]!=0;
}
train[x-1]=1;
}
}
return 0;
}