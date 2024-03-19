
#include<stdio.h>

void main(){
    int n;
    int n1;
    scanf("%d",&n);
    n1= n % 10;
if(n1==3){
    printf("bon");
}
else if((n1==0)||(n1==1)||(n1==6)||(n1==8)){
    printf("pon");
}
else{
    printf("hon");
}
}