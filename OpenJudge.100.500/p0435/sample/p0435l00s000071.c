#include<stdio.h>
#include<math.h>

int main(){
    int i;
    int N,D;
    int X[100],Y[100];
    
    scanf("%d %d",&N, &D);
    
    for(i=0;i<N;i++){
        scanf("%d %d", &X[i], &Y[i]);
    }
    
    double r[100];
    
    for(i=0;i<N;i++){
        r[i] = sqrt(X[i]*X[i]+Y[i]*Y[i]);
         //printf("%.1f\n",r[i]);
    }
    
    int cnt=0;
    for(i=0;i<N;i++){
        if(r[i] <= D){
            cnt++;
        }
    }
    
    printf("%d\n",cnt);
    return 0;
}