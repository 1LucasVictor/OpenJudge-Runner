#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char s[3];
    int i,m=0,n;
    scanf("%s",&s);
    for(i=0;i<3;i++){
        if(s[i]=='A'){
            m++;
        }
        n=3-m;
    }
     if(n==3 || m==3){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }

return 0;
}