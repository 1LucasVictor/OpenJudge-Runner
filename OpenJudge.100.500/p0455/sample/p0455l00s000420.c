# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){
    int n;
    char buff[30];

    fgets(buff,sizeof(buff),stdin);
    n = atoi(buff);

    
    printf("%d\n",n+n*n+n*n*n);
}