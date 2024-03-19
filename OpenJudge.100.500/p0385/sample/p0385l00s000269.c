#include <stdio.h>
#include<string.h>
int main(void){
    // Your code here!
    int i,n,ans;
    char x[1001];
    
    while(1){
        scanf("%s",&x);
        n=strlen(x);
        ans=0;
        if(n==1 && x[0]=='0') break;
        for(i=0;i<n;i++){
            ans +=x[i]-'0';
        }
        printf("%d\n",ans);
    }
    return 0;
    
}

