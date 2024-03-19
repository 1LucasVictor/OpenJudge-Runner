#include<stdio.h>
#include<string.h>

int main(){
    
    char num[999];
    int sum=0;
    while(1){
        scanf("%s",num);
        sum=0;
        if(num[0]=='0')break;
        int i,sz=strlen(num);
        for(i=0;i<sz;i++){
            sum+=num[i]-'0';
        }
        printf("%d\n",sum);
    }
    
    
    return 0;
}

