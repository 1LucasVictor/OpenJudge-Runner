#include<stdio.h>

int main(void){
    int n,m,i,s,c;
    scanf("%d%d",&n,&m);
    int num[4],cnt[4];
    for(i=1;i<4;i++){
        num[i] = 0;
        cnt[i] = 0;
    }
    
    for(i=0;i<m;i++){
        scanf("%d%d",&s,&c);
        if(n>=2 && s == 1 && c == 0){
            printf("-1\n");
            return 0;
        }
        if(cnt[s]>=1 && num[s] != c){
            printf("-1\n");
            return 0;
        }
        
        num[s] = c;
        cnt[s]++;
    }
    
    printf("%d\n",num[1]*100+num[2]*10+num[3]);
    return 0;
}
