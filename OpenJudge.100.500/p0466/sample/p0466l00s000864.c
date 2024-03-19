#include <stdio.h>
#include <string.h>

char s[15], t[15];

int main () {
    scanf("%s%s",&s,&t);
    // // printf("%s %s",s,t);
    // int flag=1;
    // for(int i=0;i<2;i++) {
    //     for(int j=0,k=i;j<strlen(s);k++,j++) {
    //         // printf("%c %c ", s[j], t[k]);
    //         if(s[j]==t[k]) continue;
    //         else {
    //             flag=0;
    //             break;
    //         }
    //         // printf("\nflag: %d\n",flag);
    //     }
    //     if (flag==1) {
    //         printf("Yes");
    //         return 0;
    //     }
    //     else flag=1;
    // }
    // printf ("No");
    
    
    
    
    
    // int f1=0,f2=0;
    // if(s[0]==t[0]) {
    //     f1=1;
    //     for(int i=0;i<strlen(s);i++) {
    //         if(s[i]!=t[i]) f1=0;
    //     }
    // }
    // if(s[0]==t[1]) {
    //     f2=1;
    //     for(int i=0;i<strlen(s);i++) {
    //         if(s[i]!=t[i+1]) f2=0;
    //     }
    // }
    // // printf("f1:%d f2:%d",f1,f2);
    // if(f1==0&&f2==0) printf("No");
    // else printf("Yes");
    
    
    int f1=0;
    if(s[0]==t[0]) {
        f1=1;
        for(int i=0;i<strlen(s);i++) {
            if(s[i]!=t[i]) f1=0;
        }
    }
    // printf("f1:%d f2:%d",f1,f2);
    if(f1==0) printf("No");
    else printf("Yes");
    
    
    
    
}