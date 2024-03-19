#include<stdio.h>
int main(void){
int i=1,n;
scanf("%d",&n);
for(;i<=n;i++){
int x=i;
do{
if(x%3==0){
printf(" %d",i);
break;
}
if(x%10==3){
printf(" %d",i);
break;
}
x/=10;
}while(x!=0);


}
printf("\n");
return 0;
}
