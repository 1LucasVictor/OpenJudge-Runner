#include <stdio.h>
 
int main(void){
    char a[20000], b[20000];
    int s=0, i=0;
 
    scanf("%s",a);
    scanf("%s",b);
 
    while(a[i]!='\0'){
        if(a[i] != b[i]){
            a[i] = b[i];
            s++;
        }
        i++;
    }
    printf("%d",s);
    return 0;
}