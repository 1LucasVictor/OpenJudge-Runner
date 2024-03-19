#include <stdio.h>
int main(void){
    char a[1200] = {0};
    int i=0,j=0;
    
    for(i=0;i<1200;i++){
        scanf("%c",&a[i]);
        if(a[i]=='\n'){break;}
    }
    
    for(j=0;j<=i;j++){
        if(a[j]>=65 && a[j]<=90){
            a[j] = a[j]+32;
        }
        else if(a[j]>=97 && a[j]<=122){
            a[j] = a[j]-32;
        }
    }
    for(j=0;j<=i;j++){
        printf("%c",a[j]);
    }
    return 0;
}

