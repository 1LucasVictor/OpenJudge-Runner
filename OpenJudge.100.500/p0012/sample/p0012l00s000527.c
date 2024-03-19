#include <stdio.h>

int main(){
    int num;
    int result[100];
    int count=-1;
    
    while(scanf("%d",&num)!=EOF){
        if (num == 0) {
            printf("%d\n",result[count]);
            count--;
        }
        else {
            count++;
            result[count]=num;
        }
    }
    return 0;
}
