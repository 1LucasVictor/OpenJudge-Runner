#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,a[1000],i;
    char token[1000]={};
    fgets(token, sizeof(token), stdin);n=atoi(token);
    fgets(token, sizeof(token), stdin);
    a[0]=atoi(strtok(token, " "));
    for (i=1; i<n; i++) a[i]=atoi(strtok(NULL, " "));
    for (i=0; i<n; i++) {
        if (a[i]%2==0) {
            if (a[i]%3!=0&&a[i]%5!=0){
                printf("DENIED");
                return 0;
            }
        }
    }
    printf("APPROVED");
    return 0;
}
