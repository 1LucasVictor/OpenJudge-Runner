#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    
    char a[200000],b[200000];
    int n=0;
    
    scanf("%s %s",a,b);
    
    
    for(int i=0;i<strlen(a);i++){
        if(a[i]!=b[i]){
            n=n+1;
        }
    }
    printf("%d",n);
    return 0;
}
