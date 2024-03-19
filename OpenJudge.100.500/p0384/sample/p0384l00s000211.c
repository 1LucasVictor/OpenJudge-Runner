#include<stdio.h>
 
char a[1300];
 
int main(void){
    int i;
 
    fgets(a,1300,stdin);
 
    i = 0;
    while(a[i] != '\0'){
        if(a[i] >= 'A' && a[i] <= 'Z')
            printf("%c",a[i] + 0x20);
        else if(a[i] >= 'a' && a[i] <= 'z')
            printf("%c",a[i] - 0x20);
        else
            printf("%c",a[i]);
        i++;
    }
    return 0;
}
