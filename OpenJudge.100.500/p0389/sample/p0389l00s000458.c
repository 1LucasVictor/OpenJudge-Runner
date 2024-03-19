#include <stdio.h>
#include <string.h>
#include <ctype.h>
  
  
  
int main(int argc, const char * argv[]) {
    // insert code here...
      
    while (1) {
        char yama[201];
        scanf("%s",yama);
        if(yama[0] == '-'){
            break;
        }
  
        int m;
        scanf("%d",&m);
          
        int i;
        for(i=0;i<m;i++){
            int h;
            scanf("%d",&h);
              
            char head[201] = {},tail[201] = {};
            strncpy(tail, yama, h);
            strcpy(head, yama+h);
              
            char *sum = strcat(head, tail);
            strcpy(yama, sum);
              
        }
          
        printf("%s\n",yama);
          
    }
  
      
    return 0;
}
