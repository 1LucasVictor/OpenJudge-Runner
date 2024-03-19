#include <stdio.h>

int getSum(char st[]);

int main(int argc, const char * argv[]) {
    // insert code here...
    while(1){
        char st[1000];
        scanf("%s",st);
        
        if(st[0] == '0'){
            break;
        }
        
        printf("%d\n",getSum(st));
        
    }
    
    return 0;
}

int getSum(char st[]){
    int sum = 0;
    
    int i;
    for(i=0;i<1000;i++){
        if(st[i] == '\0'){
            break;
        }
        else{
            sum += (int)st[i] - 48;
        }
    }
    
    
    return sum;
}