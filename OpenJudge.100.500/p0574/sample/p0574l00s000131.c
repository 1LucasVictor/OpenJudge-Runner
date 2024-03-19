#include <stdio.h>
#include <string.h>

int main(){
    char a[7];
    
    scanf("%s",a);
    
    if(a[0]==a[1] || a[1]==a[2] || a[2]==a[3]){
        printf("Bad\n");
    }
    
    else{
        printf("Good\n");
    }
    
    return 0;
}