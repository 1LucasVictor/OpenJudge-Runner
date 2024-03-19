#include<stdio.h>
int main(){
	char S[11],T[12]; 
    scanf("%s %s",S,T);
    
    int cou,ans;
    for(cou=0;S[cou]!='\0';cou++){
        if(S[cou]==T[cou]){ans=0;}
        else{ans=1;}

        if(ans==1){break;}
    }

    if(ans==0){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}