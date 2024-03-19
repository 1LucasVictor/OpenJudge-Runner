#include <stdio.h>
int main ( void ) {
    int sya[30]={0},i,n;
    i=0;
    while(scanf("%d",&n)!=EOF){
        if(n!=0){
            sya[i]=n;
            i++;
        }else{
            i=i-1;
            printf("%d\n",sya[i]);
        }
    }
    
    return 0;
}