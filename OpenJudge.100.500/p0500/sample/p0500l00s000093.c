#include <stdio.h>
int main(void){
    int n, m, s[5+3], c[5+3];
    scanf("%d %d", &n, &m);
    for(int i=0; i<m; i++)scanf("%d %d", &s[i], &c[i]);
    
    int num[3+3];
    for(int i=0; i<n; i++)num[i]=-1;
    
    for(int i=0; i<m; i++){
        if(num[s[i]-1]==-1 || num[s[i]-1]==c[i])num[s[i]-1]=c[i];
        else{
            printf("-1\n");
            return 0;
        }
    }
    
    if(n!=1 && num[0]==0){
        printf("-1\n");
        return 0;
    }
    if(n!=1 && num[0]==-1)num[0]=1;
    
    for(int i=0; i<n; i++)if(num[i]==-1)num[i]=0;
    
    for(int i=0; i<n; i++)printf("%d", num[i]);
    return 0;
}
