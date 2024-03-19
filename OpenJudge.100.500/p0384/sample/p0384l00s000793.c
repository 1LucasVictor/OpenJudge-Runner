#include <stdio.h>
int main(void){
    char a[1200]={};
    int i=0;
     
    while(1){
        scanf("%c", &a[i]);
        if (a[i]==0){
            break;
        }
        else if (a[i]>='a' && a[i]<='z'){
            a[i]=a[i]-32;
        }
        else if(a[i]>='A' && a[i]<='Z'){
            a[i]=a[i]+32;
        }
        printf("%c", a[i]);
        i++;
    }
    return 0;
}
