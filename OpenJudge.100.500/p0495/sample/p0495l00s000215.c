#include<stdio.h>
int main(){
    char s[3];
    int i,count=0,m;
    scanf("%s",s);
    for(i=1;i<=3;i++){
        if(s[i]=='A'){
            count++;
        }
    }
    m=3-count;

    if(count==3 || m==3){
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }

return 0;
}