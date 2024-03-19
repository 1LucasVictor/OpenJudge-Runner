#include<stdio.h>
int main(){
    int n,m,i;
    scanf("%d%d",&n,&m);
    int s[m],c[m];
    for(i=0;i<m;i++)
        scanf("%d%d",&s[i],&c[i]);
    for(i=0;i<m;i++){
        if(s[i]==1&&c[i]==0&&n!=1){
            printf("-1\n");
            return 0;
        }
    }
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
    if(n==1&&m!=0){
        printf("%d\n",c[0]);
        return 0;
    }
    else if(n==2&&m!=0){
        int ans=0,count=0,count1=0;
        for(i=0;i<m;i++){
            if(s[i]==1&&count==0){
                ans+=10*c[i];
                count++;
            }
            else if(s[i]==2&&count1==0){
                ans+=c[i];
                count1++;
            }
        }
        if(count==0){
            ans+=10;
        }
        printf("%d\n",ans);
        return 0;
    }
    else if(m!=0){
        int ans=0,count=0,count1=0,count2=0;
        for(i=0;i<m;i++){
            if(s[i]==1&&count==0){
                ans+=100*c[i];
                count++;
            }
            else if(s[i]==2&&count1==0){
                ans+=10*c[i];
                count1++;
            }
            else if(s[i]==3&&count2==0){
                ans+=c[i];
                count2++;
            }
        }
        if(count==0) ans+=100;
        printf("%d\n",ans);
        return 0;
    }
    if(m==0&&n==1) printf("0\n");
    if(m==0&&n==2) printf("10\n");
    if(m==0&&n==3) printf("100\n");
    return 0;
}