#include <stdio.h>
#include <string.h>
int main(void){
        int i;
        int len,count;
        char n[1001];
        while(1){
                scanf("%s",n);
                if(n[0]=='0')
                        break;

                len = strlen(n);
                count = 0;

                for(i=0;i<len;i++)
                        count += (n[i]-'0');

                printf("%d\n",count);
        }
        return 0;
}
