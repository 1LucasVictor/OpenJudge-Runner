#include <stdio.h>
#include <string.h>
int main(void){
    int a,b,c,d,start,end ;
    scanf("%d%d%d%d",&a,&b,&c,&d) ;
    if (a<c) {
        start=c ;
    } else {
        start=a ;
    }
    if (b<d) {
        end=b ;
    } else {
        end=d ;
    }
    if (start<end){
        printf ("%d\n",end-start) ;
    } else {
        printf ("0\n") ;
    }
    return 0 ;    
}