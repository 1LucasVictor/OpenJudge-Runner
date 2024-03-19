#include<stdio.h>
#include<string.h>
int main(){
    int a=0;
    char s[4],b,c,d=0,e=0;
    scanf("%s",s);
    b=s[0];
    for(int i=1;i<4;i++){
        if(strncmp(&b,&s[i],1)!=0){
            c=s[i];
            break;
        }
    }
    for(int j=0;j<4;j++){
        if(strncmp(&b,&s[j],1)==0){
            d++;
        }
        if(strncmp(&c,&s[j],1)==0){
            e++;
        }
    }
    if((d==2)&&(e==2)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
