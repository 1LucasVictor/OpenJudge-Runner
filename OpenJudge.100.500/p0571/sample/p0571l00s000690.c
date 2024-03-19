#include <stdio.h>

int main()
{
    int num,train,taxi;

    scanf("%d%d%d",&num,&train,&taxi);
    
    if(num*train<taxi||num*train==taxi){
        printf("%d\n",num*train);
    }
    else if(num*train>taxi){
        printf("%d\n",taxi);
    }
   

}