#include <stdio.h>

int main(void)
{
    int pages, papers, tmp;
    scanf("%d", &pages);
    tmp=pages%2;
    papers=(int)(pages/2);
    if(tmp==0){
        printf("%d", papers);
        return papers;
    }else{
        printf("%d", papers+1);
        return papers+1;
    }
}