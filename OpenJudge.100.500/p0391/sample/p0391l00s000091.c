#include <stdio.h>
#include <string.h>

void pri(int a, int b, char x[]){
    int i;
    for(i = 0; i < b - a + 1; i++){
    printf("%c",x[ a + i ]);    
    }

printf("\n");
}
void rev(int a, int b, char x[]){
 char z[1100];
 int i;
 strcpy(z,x);
 for(i = 0; i < b - a + 1; i++){
  z[a + i] = x[b - i];
 }
 strcpy(x,z);
}
void rep(int a, int b, char x[], char p[]){
 int i;
 
 for(i = 0; i < b - a + 1; i++){
  x[a + i] = p[i];
 }
}

void func(char x[], char y[]){

int a, b;
char p[1024];

if(strcmp(x ,"print") == 0){
scanf("%d %d",&a,&b);
pri(a,b,y);
}

if(strcmp(x,"reverse") == 0){
scanf("%d %d",&a,&b);
rev(a,b,y);
}

if(strcmp(x,"replace") == 0){
scanf("%d %d %s",&a,&b,p);
rep(a,b,y,p);
}

}

int main(void)
{
 char c[1024];

char f[10];

 int n;

scanf("%s",c);

scanf("%d",&n);

while(n-- > 0){

scanf("%s",f);

func(f,c);

}

 return 0;
}