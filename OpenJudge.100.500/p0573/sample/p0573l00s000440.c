#include<stdio.h>
int main(){
    char s[4] ;
    int count[2];
    int i , j , k =0;
    for(i = 0 ; i <4 ; i++){
        scanf("%c",&s[i]);
    }

    for(i = 0 ; i <2 ; i++){
    count[i] = 0;
    }

    for(i = 0 ; i<3 ; i++){
        for(j =i+1; j <4 ; j++){
            if(s[i]==s[j]){
                count[k]+=1 ;
                k++;
            }
        }

    }

    if(count[0]==count[1]){
        printf("Yes");
    }else{
        printf("No");
    }

}
