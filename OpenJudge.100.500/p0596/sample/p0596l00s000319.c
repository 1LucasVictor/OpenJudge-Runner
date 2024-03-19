#include<stdio.h>
#include<string.h>

int main(){
    int i,k,c=0,n=10000;
    char s[n];
    scanf("%s",s);
    n=strlen(s);
    while(1){        
        if(s[1]!='0'&& s[1]!='1'){
            if(s[0]==s[1])c-=2;
            break;
        }
        for(i=0;i<n;i++){
            if(s[i]!=s[i+1]){
                c+=2;
                for(k=i;k<n-i-1;k++){
                    s[k]=s[k+2];
                }
                s[n-1]=' ';
                s[n-2]='\n';
                n-=2;
                break; 
            }       
        }
    }
    printf("%d\n",c);
    return 0;
}