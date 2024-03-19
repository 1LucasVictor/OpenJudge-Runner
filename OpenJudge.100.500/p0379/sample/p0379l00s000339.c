#include<stdio.h>
int main(){
    int n,m,i[101],j,b,a[1000][101],ans[1000]={},ai,ue,oka;
    scanf("%d %d",&n,&m);
    for(ai=0;ai<n;ai++){
        for(ue=0;ue<m;ue++){
            scanf("%d",&a[ai][ue]);
        }
    }
    for(oka=0;oka<m;oka++){
        scanf("%d",&i[oka]);
    }
    for(ai=0;ai<n;ai++){
        for(ue=0;ue<m;ue++){
            ans[ai]+=i[ue]*a[ai][ue];
        }
    }
     
    for(oka=0;oka<n;oka++){
        printf("%d\n",ans[oka]);
    }
     
     
     
     
     
     
     
    return 0;
}
