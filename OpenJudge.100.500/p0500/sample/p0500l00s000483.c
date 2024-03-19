#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
#define N 3
#define M 5
 
int n, m, s[5];
char c[5];  

int main(){
    scanf("%d %d",&n, &m);
    for (int i = 0; i < m; i++){
        scanf("%d %c",&s[i], &c[i]);
    }
    
    char ans[3]={'n','n','n'};
    for (int i = 0; i < m; i++){
        if(ans[s[i]-1]=='n'){
            ans[s[i]-1] = c[i];
        }
        else if(ans[s[i]-1]!=c[i]){
            printf("-1\n");
            return 0;
        }
    }
    for (int j = 0; j < n; j++){
        if(ans[j]=='n'){
            ans[j] = '0';
        }
    }
    if(atoi(ans)<pow(10,n-1)){
        printf("-1\n");
        return 0;
    }
    printf("%d\n",atoi(ans));  
    return 0;
}