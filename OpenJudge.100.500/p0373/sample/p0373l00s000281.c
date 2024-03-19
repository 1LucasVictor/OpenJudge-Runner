#include<stdio.h>

int main()
{
    int a, b, i, j;
    
    while(1){
        scanf("%d%d", &a, &b);

	if(a ==0 && b ==0) break;

        for(i =1; i <=a;i++){
            if(i == 1 || i == a){
                for(j=1; j <b;j++) printf("#");
                printf("#\n");
                }
            else {for(j=1;j <= b; j++){
                      if(j == 1) printf("#");
                      else if(j == b) printf("#\n");
                      else printf(".");   
                } 
            }
        printf("\n");
        }

    }
    return 0;
}
