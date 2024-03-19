#include<stdio.h>
int ppow(int n){
    if(n==0) return 1;
    return ppow(n-1)*10;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int s[m],c[m];
    for(int i=0;i<m;i++){
        scanf("%d%d",&s[i],&c[i]);
        if(s[i]==1&&c[i]==0){
            printf("-1\n");
            return 0;
        }
    }
    int i;
    for(i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            if(s[i]==s[j]){
                if(c[i]!=c[j]){
                    printf("-1\n");
                    return 0;
                }
            }
        }
    }
    int ans=0,count1=0,count2=0,count3=0;
    for(i=0;i<m;i++){
        if(s[i]==1&&count1==0){
            ans+=ppow(n-1)*c[i];
            count1++;
        }
        else if(s[i]==2&&count2==0){
            ans+=ppow(n-2)*c[i];
            count2++;
        }
        else if(s[i]==3&&count3==0){
            ans+=ppow(n-3)*c[i];
            count3++;
        }
    }
    int count=0;
    for(i=0;i<m;i++){
        if(s[i]!=1)
            count++;
    }
    if(count==m) ans+=ppow(n-1);
    printf("%d\n",ans);
    return 0;
}