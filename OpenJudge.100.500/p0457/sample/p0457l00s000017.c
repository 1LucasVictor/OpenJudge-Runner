#include<stdio.h>

int main(void)
{
    int a[200001];
    int b[200001];
    
    int n,m,k,o,p;
    o=0;
    p=0;
    
    for(int i=0;i<200001;i++){
        a[i]=0;
        b[i]=0;
    }
    scanf("%d %d %d",&n,&m,&k);
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    
    for(int i=0;i<n+m;i++){
        if(a[o]<=b[p]){
            k-=a[o];
            o++;
        }else{
            k-=b[p];
            p++;
        }
        if(k<0){
            printf("%d",p+o-1);
            return 0;
        }
    }
    printf("%d",n+m);
}