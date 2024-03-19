#include<stdio.h>

int main()
{
    int a, b, i, j;
    
    while(1){
        scanf("%d%d", &a, &b);

	if(a ==0 && b ==0) break;
        
        for(i=1; i <b;i++) printf("#");
        printf("#\n");
        for(i =1; i <=a-2;i++){
            for(j=1;j <= b; j++){
                if(j == 1 || j == b) printf("#");
                else printf(".");      
               }
        printf("\n");
        }
        for(i =1; i <b;i++) printf("#");
        printf("#\n");
    }
    printf("\n");
    return 0;
}
