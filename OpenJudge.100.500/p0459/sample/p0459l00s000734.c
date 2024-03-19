 #include<stdio.h>
 int main(void)
 {
     int X,Y;
     int i,j=0,A=0;

     scanf("%d%d",&X,&Y);

     if((Y%2==0)&&(Y/2==X)) { printf("Yes\n"); return 0; }
     else if((Y%4==0)&&(Y/4==X)) { printf("Yes\n"); return 0; }
     else if(Y%2==0){
         for(i=1;i<=1000;i++){
           if(Y-4*i<0) { printf("No\n"); return 0; }
           if(Y-4*i>0) j++;
           A=(Y-4*i)/2;
           if(j+A==X) { printf("Yes\n"); return 0; }
         }
       }

     else printf("No\n");

     return 0;
 }

