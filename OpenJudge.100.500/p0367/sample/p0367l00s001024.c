#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...

    int a,b,c;
    int count=0;
    
    scanf("%d %d %d",&a,&b,&c);
    for(int i=0;i<=(b-a);i++)
    {
        if(c % (a + i) == 0)count++;
    }
    printf("%d\n",count);
    
    return 0;
}
