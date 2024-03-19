#include<stdio.h>
int main(){
int a,b,c,k,max=0,i;
scanf("%d %d %d %d",&a,&b,&c,&k);
for(i=1;i<k+1;i++){
    if (a>0){
        max+=1;
        a = a-1;}
    else if (b>0){
        max+=0;
        b = b-1;}
    else if (c>0){
        max = max-1;
        c = c-1;
}
}
printf("%d",max);
return 0;
}