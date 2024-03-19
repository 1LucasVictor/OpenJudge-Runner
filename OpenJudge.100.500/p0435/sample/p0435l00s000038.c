#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,n,d,x[200002]={},y[200002]={},count=0;
    scanf("%d%d",&n,&d);
    for(i=0;i<n;i++){
        scanf("%d%d",&x[i],&y[i]);
        if(d>=sqrt(x[i]*x[i]+y[i]*y[i])) count++;
    }
    printf("%d",count);

    return 0;
}
