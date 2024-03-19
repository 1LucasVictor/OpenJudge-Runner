#include <stdio.h>

#define max 100

int main()
{
    int N, str[max], i, flag=0, num=0;
    
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &str[i]);
    }
    
    for (i=0; i<N; i++) {
        if(str[i]%2==0){
            num++;
            if(str[i]%3==0||str[i]%5==0)
                flag++;
        }
    }
    
    if(flag==num)
        printf("APPROVED");
    else
        printf("DENIED");
    
    return 0;
}
