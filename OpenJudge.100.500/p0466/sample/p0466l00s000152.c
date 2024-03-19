#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    char S[10];
    scanf("%s",S);

    char T[11];
    scanf("%s",T);

    int j;
    int count=0;
    for(j=0;S[j]!='\0';j++){
        count += 1;
    }

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