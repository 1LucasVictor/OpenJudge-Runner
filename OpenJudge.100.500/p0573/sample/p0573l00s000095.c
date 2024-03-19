#include <stdio.h>
#define rep(i,n) for(int i=0;i<n;i++);
typedef long long ll;

int main(){
    char s[4];
    scanf("%s",s);
    int a=0,c;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            if(s[i]==s[j]){
                a++;
            }
        }
    }

    if(a==2) printf("Yes");
    else printf("No");
    
}

