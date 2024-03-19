#include<stdio.h>
#include<ctype.h>
int main(void){
    int i;
    char a[1200];
    char mo;
    for(i=0;i<1200;i++){
        scanf("%c",&mo);
        a[i]=mo;
        if(islower(a[i])){
            printf("%c",toupper(a[i]));
        }else if(isupper(a[i])){
        printf("%c",tolower(a[i]));
        }else{
        printf("%c",a[i]);
        }
        if(a[i]=='.')break;
    }
    printf("\n");
    return 0;
}