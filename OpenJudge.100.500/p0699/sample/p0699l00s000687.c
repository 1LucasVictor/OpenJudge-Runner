#include <stdio.h>

int main(){
    int a,b,c;
    int answer;
    answer=0;

    scanf("%d %d %d",&a,&b,&c);

    if(a==7){
        if(b==5&&c==5) answer =1;
        
    }

    else if(b==7){
        if(a==5&&c==5) answer =1;
        
    }
    else if(c==7){
        if(b==5&&a==5) answer =1;
        
    }



    if(answer==1){
     printf("YES");
    }
    else
    {
    printf("NO");
    }

    return 0;

}