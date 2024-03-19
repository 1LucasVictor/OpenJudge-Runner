#include<stdio.h>
int main(void){
    int t,n,r;
    
scanf("%d",&t);
scanf("%d",&n);
r=t*n;
if(r%2==0){
    puts("Even");
}else if(r%2==1){
    puts("Odd");
}


return 0;
}