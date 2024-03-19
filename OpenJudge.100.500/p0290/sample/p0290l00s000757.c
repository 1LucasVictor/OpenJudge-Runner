#include<stdio.h>
#include<math.h>

int prime(int);
int main()

{
    int N,i;
    int A[10001];
    scanf( "%d", &N );
    
    
    for( i=0; i<=N-1; i++ ) {
        scanf( "%d", &A[i] );
    }
    
    int all=0;
    for(i=0; i<=N-1; i++){
        all += prime(A[i]);
    }
    printf("%d\n", all);
    
    return 0;
}

    
int prime(int x)
{
   
    if(x==2 || x==3) return 1;
    if(x==1) return 0;
    if(x%2==0) return 0;
    int i;
    for (i=3; i<=sqrt((double)x); i+=2){
        if (x%i==0) return 0;
    }
    return 1;
    
}