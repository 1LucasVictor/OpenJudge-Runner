#include <stdio.h>
int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    int num[3]={-1, -1, -1};
    
    for(int i=0; i<m; i++){
        int s, c;
        scanf("%d %d", &s, &c);
        if(num[s-1]==-1)num[s-1]=c;
        else if(num[s-1]!=c){
            printf("-1\n");
            return 0;
        }
    }
    
    if(n!=1 && num[0]==0){
        printf("-1\n");
        return 0;
    }
    
    if(n!=1 && num[0]==-1)num[0]=1;
    
    for(int i=0; i<n; i++){
        if(num[i]==-1)printf("0");
        else printf("%d", num[i]);
    }
    return 0;
}
