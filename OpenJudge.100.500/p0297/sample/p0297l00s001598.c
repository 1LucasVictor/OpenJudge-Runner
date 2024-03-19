#include <stdio.h>
#include <string.h>
struct nt{
    char name[50000];
    int time;
};

int main(){
    int a,n,q,i,j=0,sum=0;
    char b[50000];
    scanf("%d%d",&n,&q);
    struct nt A[n];
    for(i=0;i<n;i++){
        scanf("%s%d",A[i].name,&A[i].time);
    }
    while(A[0].time!=0){
        if((A[0].time-q)<=0){
            sum+=A[0].time;
            printf("%s %d\n",A[0].name,sum);
            for(j=0;j<n;j++){
                if(j==n-1) A[j].time=0;
                else A[j]=A[j+1];
            }
            n--;
        }
        else {
            a=A[0].time-q;
            strcpy(b,A[0].name);
            sum+=q;
            for(j=0;j<n;j++){
                if(j==n-1){
                    strcpy(A[j].name,b);
                    A[j].time=a;
                }
                else A[j]=A[j+1];
            }
        }
    }
}
