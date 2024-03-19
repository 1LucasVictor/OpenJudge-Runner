#include <stdio.h>
#include <string.h>
 
#define Num 1001
 
void print (char* str,int a,int b);
void reverse (char* str,int a,int b);
void replace (char* str,int a,int b,char* rep);
 
int main () {
    char str[Num],func[Num],rep[Num];
    int a,b;
    int command;
     
    scanf ("%s",&str); //操作する文字列
    scanf ("%d",&command); //命令の数
     
    while (command != 0) {
        scanf ("%s",&func);
        if ( strcmp (func,"print") == 0) {
            scanf ("%d %d",&a,&b);
            print (str,a,b);
        } else if ( strcmp (func,"reverse") == 0) {
            scanf ("%d %d",&a,&b);
            reverse (str,a,b);
        } else if ( strcmp (func,"replace") == 0) {
            scanf ("%d %d %s",&a,&b,&rep);
            replace (str,a,b,rep);
        }
        command --;
    }
    return 0;
}
 
void print (char* str,int a,int b) {
    int i;
    for (i = a;i <= b;i ++) {
        printf ("%c",str[i]);
    }
    putchar ('\n');
}
 
void reverse (char* str,int a,int b) {
    int i;
    char rev[Num];
    for (i = 0;i < b - a + 1;i ++) { //b-a+1 個
        rev[i] = str[b -i];
    }
    for (i = 0;i < b - a + 1;i ++) {
        str[a + i] = rev[i];
    }
}
 
void replace (char* str,int a,int b,char* rep) {
    int i;
    for (i = 0;i < b - a + 1;i ++) {
        str[a + i] = rep[i];
    }
}
