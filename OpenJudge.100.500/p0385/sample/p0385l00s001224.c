#include <stdio.h>
int main (int argc, char * argv[])
{
    char x[1000];
    int sum;
    while (1){
        sum =0;
        scanf("%s",x);
        if(x[0] == '0'){
            break;
        }
        for(int i=0;x[i]!='\0';i++){
            sum += x[i]-'0';
        }
        printf("%d\n",sum);
        
        }
    return 0;
}

