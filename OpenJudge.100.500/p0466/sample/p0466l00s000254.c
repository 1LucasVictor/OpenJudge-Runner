#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char S[10];
    char T[11];


    for(int i=0; i<10; i++){
        S[i]=0;
        T[i]=0;
    }
    T[10]=0;

    scanf("%s",S);
    scanf("%s",T);


    //bool check = true;
    int check=0;
 	for(int i=0; i<strlen(S); i++){
 	    if(S[i]!=T[i]){
 	    	//check = false;
 	    	check++;
 	    	//printf("Called ! : %d",check);
 	    	break;
 	    }

 	}

 	if(T[strlen(S+1)] != S[strlen(S)]){
 	    check = 0;
 	}

 	if(strlen(S) == strlen(T)){
 		check = 1;
 	}

 	//printf("%s %s\n",S,T);
 	if(check == 0){
 	    printf("Yes\n");
 	}else{
 		printf("No: %d\n");
 	}

    

    return 0;

}

