#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char str[1001],str2[1001];
    int q,i,j,a,b;
    
    scanf("%s",str);
    scanf("%d",&q);
    for(i=0; i<q; i++){
        scanf("%s %d %d",str2, &a,&b);
        
        if(strcmp(str2, "replace") == 0){
            scanf("%s",str2);
            memcpy(str+a, str2, b-a+1);
        }
        
        if(strcmp(str2, "reverse") == 0){
            strncpy(str2, str+a, b-a+1);
            for(j=b; j>=a; j--) str[j]=str2[b-j];
        }
        
        if(strcmp(str2, "print") == 0){
            strncpy(str2, str+a, b-a+1);
            str2[b-a+1]=0;
            printf("%s\n",str2);
        }
    }
    return 0;
}

