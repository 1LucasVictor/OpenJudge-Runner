#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    int i, n, ans=0;
    char s[114514], t[114514];

    scanf("%s",s);
    scanf("%s",t);

    n=strlen(s);
    for(int i=0;i<n;i++){
       if(s[i]!=t[i])
       ans++;
    }
    printf("%d",ans);

return 0;
}