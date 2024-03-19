// ex3_4
//TKC001
#include<stdio.h>
 
int main(void){
    int N;
    //YN=1ならYes,0ならNo
    int yn = 0;
 
    scanf("%d", &N);
 
    for (int i = 9; i > 0; i--)
    {
        if(N/i<=9 && N/i>=1 && N%i==0){
            yn = 1;
            break;
        }
    }
 
    if(yn==1){
        printf("Yes");
    }else{
        printf("No");
    }
 
    return 0;
    
}