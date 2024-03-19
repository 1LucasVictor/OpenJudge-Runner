int main(void){
    int N,M;
    scanf("%d%d",&N,&M);
    if(M==0){
        printf("-1");
        return 0;
    }
    int keta[M],vl[M],ans[N];
    for(int i=0;i<M;i++){
        scanf("%d %d",&keta[i],&vl[i]);
    }
    for(int i=0;i<N;i++){
        ans[i]=0;
    }
    for(int i=0;i<M;i++){
        if(keta[i]==1 && vl[i]==0){
            printf("-1");
            return 0;
        }else if(ans[keta[i]-1]==0){
            ans[keta[i]-1]=vl[i];
        }else if(ans[keta[i]-1]!=vl[i]){
            printf("-1");
            return 0;
        }
    }
    if(ans[0]==0)
        ans[0]=1;
    for(int i=0;i<N;i++){
        printf("%d",ans[i]);
    }
    return 0;
}
