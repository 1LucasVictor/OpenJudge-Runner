#include "stdio.h"

static int IsRightTriangle( int a, int b,int c);

int main( void )
{
    int i,cnt,a,b,c;
    
    scanf("%d",&cnt);
    
    for(i=0;i<cnt;i++){
        scanf("%d %d %d",&a,&b,&c);  
        if( 1 == IsRightTriangle(a,b,c) ){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}

static int IsRightTriangle( int a, int b,int c)
{
    int max;
    int ot1,ot2;
    max = a;
    ot1 = b;
    ot2 = c;
    if( max < b ){
        max = b;
        ot1 = a;
        ot2 = c;
    }
    if( max < c ){
        max = c;
        ot1 = a;
        ot2 = b;
    }
    
    if( max*max == ot1*ot1 + ot2*ot2 ){
        return 1;
    }else{
        return 0;
    }
}