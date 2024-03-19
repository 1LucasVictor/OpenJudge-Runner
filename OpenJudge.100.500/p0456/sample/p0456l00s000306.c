#include <stdio.h>
#include <string.h>

int main(void){
    // Your code here!
    
    int n;
    int ans=0;
   char s[200001];
   char t[200001];
    scanf("%s %s",s,t);
    n=strlen(s);

for(int i=0;i<n;i++){
    if(s[i]==t[i]){
        ans++;
    }
}

    printf("%d",n-ans);
 
  return 0;
}