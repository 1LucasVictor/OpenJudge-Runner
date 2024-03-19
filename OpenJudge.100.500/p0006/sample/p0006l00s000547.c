#include<stdio.h>
#include<string.h>
int main(){
    int S,N;
    S=100000;
    scanf("%d",&N);
    for (int i=0; i<N; i++) {
        S*=1.05;
        if (S%1000!=0) {
            S=((S/1000)+1)*1000;
        }
    }
    printf("%d\n",S);
    return 0;
}

