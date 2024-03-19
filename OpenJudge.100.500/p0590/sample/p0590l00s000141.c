#include<stdio.h>
int main(){
    int a,b,c,d,e;
    int k;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&k);

if(k>=e-a){
    if(k>=d-a){
        if(k>=c-a){
            if(k>=b-a){
                printf("Yay!\n");
            }
        }
}
}
else{
printf(":(\n");
}
return 0;
}