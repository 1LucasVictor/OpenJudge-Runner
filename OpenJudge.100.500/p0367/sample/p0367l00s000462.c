#include<stdio.h>

main(void){
    int a,b,c,i,u=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=a;i<=b;i++){
        if(c%i==0) u++;
     }
    printf("%d\n",u);
}       

