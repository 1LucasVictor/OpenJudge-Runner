#include <stdio.h>
#include <stdlib.h>


int main()
{
    char read='\0', lst='\0';
    int count=0, ans=0;
    while(1){
        scanf("%c", &read);
        if(read == '\n') break;
        if(lst == read) count++;
        else if(lst == '\0'){
            lst = read;
            count++;
        }else if(count == 0){ 
            lst = read;
        }else{
            count--;
            ans += 2;
        }
    }
    printf("%d\n", ans);
    return 0;
}