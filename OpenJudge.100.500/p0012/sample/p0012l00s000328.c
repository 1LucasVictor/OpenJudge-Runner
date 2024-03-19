
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    
    int a[100];
    int n,i=0;
    
    while (scanf("%d",&n) != EOF) {
        if (n == 0) {
            i--;
            printf("%d\n",a[i]);
        }
        else{
            a[i]=n;
            i++;
        }
    }
    
    return 0;
    
}