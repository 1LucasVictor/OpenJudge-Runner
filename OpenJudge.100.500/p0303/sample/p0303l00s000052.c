
#include<stdio.h>
#define MAX 1000000000
int nmax=0;
int n,k,w[100000];
   
int check(int p){
    int i;
    int cnt=1,a=p;
    if(p<nmax) return 0;
    for(i=0;i<n;i++){
        if(a>=w[i]){
           a-=w[i];
        }else{
            cnt++;
            a=p-w[i];
        }
    }
    if(cnt>k) return 0;
    else return 1;
}
   
int main(void){
    int i;
    int left,right,mid;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&w[i]);
        if(w[i]>nmax) nmax=w[i];
    }
   
    left=0,right=MAX;
    while(right-left>1){
        mid=(left+right)/2;
        if( check(mid) ) right=mid;
        else left=mid;
    }
    printf("%d\n",right);
    return 0;
}

/*実行結果
5 3
8
1
7
3
9
10*/
