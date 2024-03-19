#include<stdio.h>

int main(void){
    int n,m,i,s,c;
    scanf("%d%d",&n,&m);
    int num[4],cnt[4];
    for(i=0;i<4;i++){
        num[i] = 0;
        cnt[i] = 0;
    }
    
    for(i=0;i<m;i++){
        scanf("%d%d",&s,&c);
        if(n>=2 && s ==1 && c== 0){
            printf("-1");
            return 0;
        }
        
        if(cnt[s]>=1 && num[s] != c){
            printf("-1\n");
            return 0;
        }
        
        num[s] = c;
        cnt[s]++;
    }
    
    if(n==3 && cnt[1] ==0){
        num[1] = 1;
    }else if(n==2 && cnt[1] == 0){
        num[2] = 1;
    }
    if(n==3){
        printf("%d\n",num[1]*100+num[2]*10+num[3]);
    }else if(n==2){
        printf("%d\n",num[1]*10+num[2]);
    }else{
        printf("%d\n",num[1]);
    }
    
    return 0;
}
