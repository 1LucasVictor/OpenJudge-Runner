#include <stdio.h>
int main (void){
    int a =0,b =0,c =0;
    int fcount =0,scount =0;
    scanf("%d %d %d",&a, &b, &c );
    if(a == 5){
        fcount++;
    }else if( a ==7){
        scount++;
    }

    if(b == 5){
        fcount++;
    }else if( b ==7){
        scount++;
    }

    if(c == 5){
        fcount++;
    }else if( c ==7){
        scount++;
    }

    if(fcount ==2 && scount ==1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}