#include <stdio.h>
int main(void){
    int a1,b2,c3,five=0,seven=0;
    scanf("%d%d%d",&a1,&b2,&c3);
    if(a1==5){
        five++;
    }else if(a1==7){
        seven++;
    }
    if(b2==5){
        five++;
    }else if(b2==7){
        seven++;
    }
    if(c3==5){
        five++;
    }else if(c3==7){
        seven++;
    }
    if(five==2||seven==1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
	}