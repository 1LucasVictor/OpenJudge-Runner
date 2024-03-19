    /*head*/
    #include<stdio.h>
    /*main*/
    int main(){
            int d,n;
            int p=100;
     
            scanf("%d%d",&d,&n);
     
             if(d == 0){
                    printf("%d\n",n);
            }
            else if(d == 1){
                    printf("%d\n",n*p);
            }
            else if(d == 2){
                    printf("%d\n",n*p*p);
            }
     
            return 0;
    }