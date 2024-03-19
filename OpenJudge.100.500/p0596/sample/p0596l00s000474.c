#include <stdio.h>

int main()
{
    char s[100000] = {0};
    scanf("%s",s);
    int n = 0;
    while(s[n]){
        n++;
    }
    int i;
    int zero = 0, one = 0; 
    for(i = 0; i < n; i++){
        if(s[i] == '1'){
            one++;
        }else{
            zero++;
        }
    }
    if(one < zero){
        printf("%d\n",one*2);
    }else{
        printf("%d\n",zero*2);
    }
    return 0;
}
