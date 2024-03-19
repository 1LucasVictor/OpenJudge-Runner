#include <stdio.h>

void main(){
    char a[200000];
    char b[200000];
    int i;
    int num;
    
    scanf("%s",a);
    scanf("%s",b);
    
    for(i = 0; i < 20000; i++){
        if(a[i] != b[i]) num++;
        
    }

    printf("%d",num);
}