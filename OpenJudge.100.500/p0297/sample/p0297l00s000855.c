#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUEUE_SIZE 1000000  /* キューデータ数の最大値 */

struct qq {
    char name[100];
    int t;
};

int head, tail;
struct qq Q[QUEUE_SIZE];
 
void enqueue(char *a, int b){
    strcpy(Q[tail].name, a);
    //Q[tail].name = a;
    Q[tail++].t = b;
}   
 
struct qq dequeue(){
    head++;
    return Q[head - 1];
}

int main(void)
{
    head = 0;
    tail = 0;

    int n, q, input_time;
    int i = 0;
    int sum_t = 0;
    char input_name[100];

    scanf("%d %d", &n, &q);

    while(i < n) {
        scanf("%s %d", &input_name, &input_time);
        enqueue(input_name, input_time);
        i++;
    }

    while(head != tail) {
        struct qq head_element = dequeue();
        if (head_element.t > q) {
            enqueue(head_element.name, head_element.t - q);
            sum_t += q;
        } else {
            printf("%s %d\n", head_element.name, head_element.t + sum_t);
            sum_t += head_element.t;
        }
    }
 
    return 0;
}
