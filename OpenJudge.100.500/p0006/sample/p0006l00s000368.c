#include <stdio.h>

int main(){
    int i,n;
    double sum =100000;
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        sum *=1.05;
        if ((int)sum % 1000 !=0) {
            sum=((int)sum/1000+1)*1000;
        }
    }
    
    printf("%d\n",(int)sum);
    
    return 0;
}