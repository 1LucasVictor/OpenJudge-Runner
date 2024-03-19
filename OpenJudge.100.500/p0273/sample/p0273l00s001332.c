#include <stdio.h>
int F[44];
void Fibo(int N){
        int i;
        F[0]=1;
        F[1]=1;
        for(i=2; i<=N; i++) {
                F[i]=F[i-2]+F[i-1];
        }
        printf("%d\n",F[N]);
}
int main(){
        int n;
        scanf("%d",&n);
        Fibo(n);
        return 0;
}

