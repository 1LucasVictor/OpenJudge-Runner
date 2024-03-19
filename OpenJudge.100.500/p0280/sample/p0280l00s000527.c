#include <stdio.h>
#define MAX 100

int A[MAX][MAX],i,j;

void MST(int n){
    int a=1,size,min,B[MAX],C[MAX],sum=0;
    C[0]=0;
    B[0]=1;
    for(i=1;i<n;i++) B[i]=0;
    
    while(3){
        size=2001;
        for(i=0;i<a;i++){
            for(j=0;j<n;j++){
                if(A[C[i]][j]<size && A[C[i]][j]!=-1 && B[j]!=1){
                    size=A[C[i]][j];
                    min=j;
                }
            }
        }      
        if(a!=n){
            C[a]=min;
            B[min]=1;
            sum+=size;
            a++;
        }
        else break;
    }
    printf("%d\n",sum);
}

int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) scanf("%d",&A[i][j]);
    }
    MST(n);

    return 0;
}
