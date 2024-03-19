#include<stdio.h>
#include<string.h>

int Hashinsert(char *s){
    int hash=0,i;
    for(i=0;s[i]!='\0';i++){
        if(i==0)hash=(int)s[i]%1000000;
        else hash=(hash*8+(int)s[i])%10000000;
    }
    return hash;
}

int main(){
    int hash[1000000],n,i,h=0;
    char cmd[7],s[12];
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%s %s",cmd,s);
        h=Hashinsert(s);
        if(cmd[0]=='i'){
            hash[h]=1;
        }else{
            if(hash[h]==1)printf("yes\n");
            else printf("no\n");
        }
    }
    
    return 0;
}