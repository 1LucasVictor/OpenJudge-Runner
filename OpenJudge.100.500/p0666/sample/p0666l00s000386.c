#include<stdio.h>
int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(c-b<=0){
printf("delicious");
}else if(c-b<=a){
printf("safe");
}else{
printf("dangerous");
}
return 0;
}