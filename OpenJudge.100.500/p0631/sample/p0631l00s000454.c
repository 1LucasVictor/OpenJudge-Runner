 #include <stdio.h>
int main(void){
    
int A,B,X;
 
scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&X);
if(X>A&&A+B>X){
puts("YES");
}else{
puts("NO");
}
return(0);
}