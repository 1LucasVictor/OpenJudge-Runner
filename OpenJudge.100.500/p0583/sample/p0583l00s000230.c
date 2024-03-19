#include <stdio.h>
#include <math.h>


int loop(int);


int keta;
int aa[11];



int N,i,j,a,b,c,count,x3,x5,x7,x,y,z;




int A,B,C,D; 
int An, Bn;
char str[200000];
int hantei;


int main(){

hantei=0;

scanf("%d,%d,%d,%d,%d", &N, &A, &B, &C,&D);



scanf("%s", str);

loop(hantei);



if(hantei == 1){

printf("Yes");


}else{


printf("No");

} 

//loop(0);




//if(str[2]=='a'){printf("yes");}

//printf("%s", str);

   return(0);
} 


int loop(int w){

   if((A == C) && (B == D)){
     
       hantei =1;
       return(1);      
       
   }



   if((str[A-1] == '#') || (str[B-1] == '#')|| (str[A] == str[B]) ){
   
     return(2);
   
   } 
   
   
   if(1 <= C && (hantei ==0)){
   
   C = C-1;
   
   x=loop(hantei);
   
   if(x==2){ C=C+1;}
   
   
   }
   
   if(2 <= C && (hantei ==0) ){   
   
   C = C-2;
   
   x=loop(hantei);
   
   if(x==2){ C=C+2;}
   
   }
   
   if(1 <= D && (hantei ==0)){
   
   D = D-1;
   
   x=loop(hantei);
   
   if(x==2){ D=D+1;}
   
   }
   
   if(2 <= D && (hantei ==0)){
   
   D = D-2;
   
   x=loop(hantei);
   
   if(x==2){ D=D+2;}
   
   }


   
   
   
   return(0);
} 


