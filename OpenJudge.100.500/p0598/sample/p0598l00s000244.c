#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
signed main(void){

    char str[3000];
    char *tok;
    int m,n;
    int i1,i2,i3,i4,i44;
    int gn,gm,sn,sm;
    int fin=0;
    int nn,nm;
    unsigned long long int k;
    unsigned long long int a;
    unsigned long long int b;
    unsigned long long int ans=0;
    
    for(i1=0;i1<=0;i1++){
        fgets(str, sizeof(str), stdin);
        tok=strtok(str," ");
        a=strtol(tok,NULL,10);
        tok=strtok(NULL," ");
        b=strtol(tok,NULL,10);

    }
    
    if(b%a==0){
        printf("%d",a+b);
    }else{
        printf("%d",b-a);
    }

    
    
}