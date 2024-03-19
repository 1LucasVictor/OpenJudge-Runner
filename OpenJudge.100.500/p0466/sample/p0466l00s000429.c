#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    char S[10];
    scanf("%s",S);

    char T[11];
    scanf("%s",T);

    int count;
    for(count=0;S[count]!='\0';count++);

    int i;
    int flag=0;
    for(i=0;i<count;i++){
        if(S[i] != T[i]){flag = 0;break;}
        flag =1;
    }
    
    if(flag == 1){
        printf("Yes");
    }else{
        printf("No");
    }
return 0;

}