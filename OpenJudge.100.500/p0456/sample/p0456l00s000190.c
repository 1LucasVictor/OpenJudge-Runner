#include <stdio.h>
#include <string.h>
 
int main(){
    char N[200010];
    char T[200010];
    int count=0;
    if ( scanf("%s",N) ){
 
    if ( scanf("%s",T) ){
 
 
    for (int i=0;i<strlen(N);i++){
        if (N[i]==T[i]){
            continue;
        }
        else{
            count++;
        }
    }
    printf("%d\n",count);
    return 1;
    }
    else{
        printf("%s","error");
        return 0;
    }
    }
    else{
        printf("%s","error");
        return 0;
    }
    return 0;
}