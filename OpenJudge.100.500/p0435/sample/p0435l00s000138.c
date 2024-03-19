#include <stdio.h>
#include <math.h>

int main(){
    int N,D;
    scanf("%d %d",&N,&D);
    int X[N],Y[N];
    int num=0;
    for (int i=0; i<N; i++) {
        scanf("%d %d",&X[i],&Y[i]);
        if (sqrt(X[i]*X[i]+Y[i]*Y[i])<=D) {
            num++;
        }
    }
    printf("%d",num);
}
