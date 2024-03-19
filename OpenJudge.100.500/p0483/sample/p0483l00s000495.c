#include <stdio.h>
#define true 1
#define false 0

int main(void)
{
    int n=0;
    int flag=false;
    scanf("%d",&n);

    for(int i=0;i<3;i++){
        if((n%10)%7==0 && (n%10)!=0){
            flag=true;
            break;
        }
        n=n/10;
    }

    if(flag==true){
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
