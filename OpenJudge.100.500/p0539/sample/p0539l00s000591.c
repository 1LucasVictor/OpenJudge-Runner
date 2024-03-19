#include<stdio.h>
int main(){
int n,a,b,i;
scanf("%d",&n);
for(i=1;i<10;i++){
if(n%i==0){
printf("Yes\n");
return 0;
}
}
printf("No\n");
return 0;
}
