#include <stdio.h>
int main(void){
    // Your code here!
    int X,Y;
    
    scanf("%d%d",&X,&Y);
    
    for(int i = 1; i <= X; i++){
        if((4*X - Y == 2 * i) || (Y - 2*X == 2*i)){
            printf("Yes\n");
            return 0;
        }
    }
    
    printf("No\n");
}
