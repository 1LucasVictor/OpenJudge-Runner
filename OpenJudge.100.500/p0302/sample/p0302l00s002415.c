#include <stdio.h>
#include <string.h>
#define MAX 100000000
 
char str[14];
char H[MAX];
 
int find(void);
void insert(void);
int getChar(char);
int getKey(void);
 
int main(){
    int i,j,n;
    char a[7];
 
    scanf("%d",&n);
 
    for(i=0;i<n;i++){
        scanf("%s %s",a,str);
        if(a[0]=='i'){
            insert();
        }
        else if(a[0]=='f'){
            if(find())printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}
 
int getChar(char c){
    if(c == 'A')return 1;
    else if(c == 'C')return 2;
    else if(c == 'G')return 3;
    else if(c == 'T')return 4;
}
 
int getKey(){
    int sum=0, p=1,i;
    for(i=0;i<strlen(str);i++){
        sum += p*(getChar(str[i]));
        p *= 5;
    }
    return sum;
}
 
int find(){
  
    int key = getKey();
    if(H[key]) return 1;
    else return 0;
}
 
void insert(){
    H[getKey()] = 1;
}