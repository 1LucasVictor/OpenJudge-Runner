#include<stdio.h>

main(void){
    int a,b,c,u=0;
    scanf("%d %d %d",&a,&b,&c);
    for(a;a<b;a++){
        if(c%a==0) u++;
     }
    printf("%d\n",u);
}       

