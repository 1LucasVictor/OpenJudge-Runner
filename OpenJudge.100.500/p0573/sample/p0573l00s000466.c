#include<stdio.h>
#include<stdlib.h>


int main(void){
    char s[4];
    int i,count=1,ans=1;
    scanf("%s",&s);
    for(i=1;i<=3;i++){
        if(s[0]==s[i]){
            count +=1;
        }
    }
    if(count==2){
        if(i==1){
            if(s[2]==s[3]){
                printf("Yes\n");
                ans=0;
            }
        }else if(i==2){
            if(s[1]==s[3]){
                printf("Yes\n");
                ans=0;
            }
        }else{
            if(s[1]==s[2]){
                printf("Yes\n");
                ans=0;
            }
        }
    }
    if(ans==1){
        printf("No\n");
    }

    return 0;
}