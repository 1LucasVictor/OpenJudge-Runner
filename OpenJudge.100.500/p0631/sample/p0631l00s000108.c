 #include <stdio.h>
int main(void){
    
int A,B,C;

scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&C);
if(C>A&&A+B>C){
printf("YES");
}else{
printf("NO");
}
return(0);
}
