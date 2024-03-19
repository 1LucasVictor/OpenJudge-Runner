#include <stdio.h>

int main(){
    int K;
    int A, B;
    scanf("%d", &K);
    scanf("%d %d", &A, &B);
    
    for(int i = 1 ; i < 1000 ; i++){
    	int temp = K;
    	temp *= i; // 7*3 = 21 -> kelipatan k
    	// printf("Temp number: "%d\n", temp);
    	if(temp >= A && temp <= B){ //statement && -> salah 1 false tidak jalan
    		printf("OK\n");
    		// printf("%d\n", i);
    		break;
		}
		else if(temp > B){
			printf("NG\n");
			//printf("%d\n", i);
			break;
		}
    	//balik ke atas
	}
    return 0;
}