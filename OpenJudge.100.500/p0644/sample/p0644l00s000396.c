     #include<stdio.h>
     int main()
    {
         int a = 0;
         char s[3];
                              
          scanf("%s", s);
          
          if(s[0] == '1'){
            a++;
           }
          if(s[1] == '1'){
          a++;
          }
         if(s[2] == '1'){
         a++;
         }
         printf("%d", a);
         
       return 0;
     }