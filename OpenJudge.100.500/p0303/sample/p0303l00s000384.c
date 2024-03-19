#include <stdio.h>
int func(int);
int n,q,g[100000];
int main (){
    int i,left=0,right=100000*10000,mid;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){
        scanf("%d",&g[i]);
    }
    while(right-left>1){
        mid=(left+right)/2;
        if(func(mid)){
            right=mid;
        }
        else{
            left=mid;
        }
    }
    printf("%d\n",right);
    return 0;
}

int func(int mid){
    int sum,i,j=0;
    for(i=0;i<q;i++){
        sum=0;
        while(g[j]+sum<=mid){
            sum+=g[j];
            j++;
            if(j==n) return 1;
        }
    }
    return 0;
}



