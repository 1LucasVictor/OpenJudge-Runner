#include <stdio.h>
#include<string.h>

int main(void)
{
    int kane = 100000;
    int kane2;
    int hi = 0;
    int i = 0;
    scanf("%d",&hi);
    
    while(hi > i){
        kane *= 1.05;
        if(kane % 1000 != 0){
            kane += 1000 - (kane % 1000);
        }
        
        i++;
    }
    
    printf("%d\n",kane);
    
	return 0;
}
