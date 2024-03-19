#include <stdio.h>
#include <string.h>
struct nt{
    char name[10];
    int time;
};

int main(){
    int a,n,q,i,sum=0;
    char b[10];
    scanf("%d%d",&n,&q);
    struct nt A[n],B[n];
    for(i=0;i<n;i++){
        scanf("%s%d",A[i].name,&A[i].time);
    }
    while(n!=0){
        if((A[0].time-q)<=0){
            sum+=A[0].time;
            printf("%s %d\n",A[0].name,sum);
            for(i=0;i<n;i++){
                if(i==n-1) A[i].time=0;
                else A[i]=A[i+1];
            }
            n--;
        }
        else {
            a=A[0].time-q;
            strcpy(b,A[0].name);
            sum+=q;
            for(i=0;i<n;i++){
                if(i==n-1){
                    strcpy(A[i].name,b);
                    A[i].time=a;
                }
                else A[i]=A[i+1];
            }
        }
    }
    return 0;
}
