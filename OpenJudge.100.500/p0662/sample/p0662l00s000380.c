#include <stdio.h>
 
int main(){
 
    int a, b, c, d;
    
    printf("\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
  
      if(b>c&&d>a){
        if(b>c){
            if(b<d){
                printf("%d", b-c);
            }
            else{
                printf("%d", d-c);
            }
        }
        else if(d>a)
        {
           if(b<d){
                if(a<c){
                    printf("%d", b-c);
                }
                else{
                    printf("%d", b-a);
                }
            }
            else{
                if(a>c){
                    printf("%d", d-a);
                }
                else{
                    printf("%d", d-c);
                }
            }
        }
    }
    else{
        printf("0");
    }
  
    return 0;
}
