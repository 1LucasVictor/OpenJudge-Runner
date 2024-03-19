#include <stdio.h>
#include<string.h>

int main() {
    
    char s[11],t[11],t1[12];
    long n,j;
    scanf("%11s",s);
    scanf("%12s",t1);
    n=strlen(t1);

    for(int i=0;i<n-1;i++){
        t[i]=t1[i];
    }
    
    if(strcmp(s,t)==0){
        n=strlen(s)+1;
        j=strlen(t1);
        if(n==j){
            printf("\nYes");
        }else{
            printf("No");
        }
    }else{
        printf("\nNo");
    }
    
    
    return 0;
}
