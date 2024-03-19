#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int d,n,a;
    double f;
    int i;
    long long x,y;
    //double a,b;
    int count = 0;
    scanf("%d",&n);
    scanf("%d",&d);
    for(i=0; i < n;i++){
        scanf("%lld",&x);
        scanf("%lld",&y);
        //a=pow(x,2);
        //b=pow(y,2);
        f=sqrt((pow(x,2)+pow(y,2)));
        if(f <= d){
            count+=1;
        }        
    }
    printf("%d\n",count);

    return EXIT_SUCCESS;
}
