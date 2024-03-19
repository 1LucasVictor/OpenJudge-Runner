#include <stdio.h>
#include <string.h>
int main(void){
    char a[3];
    scanf("%s",a);
    if(strlen(a) == 3){
        if(a[2]=='3') printf("bon");
        else if(a[2] == '0' || a[2] == '1' || a[2] =='6' || a[2] =='8') printf("pon");
        else printf("hon");
    }
    else if(strlen(a) == 2){
        if(a[1]=='3') printf("bon");
        else if(a[1] == '0' || a[1] == '1' || a[1] =='6' || a[1] =='8') printf("pon");
        else printf("hon");
    }
    else{
        if(a[0]=='3') printf("bon");
        else if(a[0] == '0' || a[0] == '1' || a[0] =='6' || a[0] =='8') printf("pon");
        else printf("hon");
    }
}
