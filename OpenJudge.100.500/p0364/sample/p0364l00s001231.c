#include<stdio.h>
int main(){
int a,b,c,d,e,f=0;
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
if(c-e>=0 && c+e<=a){
f++;
}
if(d-e>=0 && d+e<=b){
f++;
}
if(f==2){
printf("Yes\n");
}
else{
printf("No\n");
}
return 0;
}
