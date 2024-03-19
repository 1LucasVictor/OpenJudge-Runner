#include <stdio.h>
#include <string.h>

int main(){
    int i,count=0;
    char a[5];
    
    scanf("%s",a);
    
    for(i=0;i<3;i++){
        if(a[i]=='1'){
            count++;
        }
    }
    
    printf("%d\n",count);
    
    return 0;
}