#include <stdio.h>
#define MAX 100000

int main(int argc, const char * argv[]) {
    int t[MAX],n,i,j;
    for(i=0;i<MAX;i++){
        t[i]=1;
    }
    t[0]=t[1]=0;
    for(i=2;i*i<MAX;i++){
        if(t[i]==1){
            for(j=i*i;j<MAX;j+=i){
                t[j]=0;
            }
        }
    }
    
    for(i=1;i<MAX-1;i++)
        t[i+1]+=t[i];
    while(scanf("%d",&n)!=EOF)
        printf("%d\n",t[n]);
    return 0;
}