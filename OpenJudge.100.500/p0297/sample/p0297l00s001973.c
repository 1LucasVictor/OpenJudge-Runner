#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define QUEUE_INITIAL_SIZE 100

typedef struct Process {
    char name[11];
    int time;
} Process;

typedef struct Queue {
    Process *processList;
    int size;
    int head;
    int tail;
} *Queue;

void enqueue(Queue queue, Process process);
Process dequeue(Queue queue);
Queue newQueue(int queueMax);
bool empty(Queue queue);
void freeQueue(Queue queue);

Queue
newQueue(int queueMax)
{
    Queue queue = (Queue)malloc(sizeof(struct Queue));
    queue->processList =
	(Process*)malloc(sizeof(struct Process) * queueMax);
    queue->size = queueMax;
    queue->head = 0;
    queue->tail = 0;
    return queue;
}

void
enqueue(Queue queue, Process process)
{
    if ((queue->tail+1) % queue->size != queue->head) {
	queue->tail = (queue->tail+1) % queue->size;
	queue->processList[queue->tail] = process;
    }
    else
    {
	Process *newProcessList =
	    (Process*)malloc(sizeof(struct Process) * queue->size * 2);
	int i;
	for (i=0; i<queue->size; i++)
	    newProcessList[i] = 
		queue->processList[(queue->head+i) % queue->size];
	free(queue->processList);
	queue->processList = newProcessList;
	queue->head = 0;
	queue->tail = queue->size;
	queue->size *= 2;
	queue->processList[queue->tail] = process;
    }
}

Process
dequeue(Queue queue)
{
    if (empty(queue))
	return (Process) {
	    .name = "",
	    .time = 0
	};
    else {
	queue->head = (queue->head + 1) % queue->size;
	return queue->processList[queue->head];
    }
}

bool
empty(Queue queue)
{
    return queue->head == queue->tail;
}

void
freeQueue(Queue queue)
{
    free(queue->processList);
    free(queue);
}

int
main(void)
{
    int i, n, q, time;
    char buf[128], name[11];
    
    Queue queue = newQueue(QUEUE_INITIAL_SIZE);
    
    scanf("%d %d\n", &n, &q);
    for (i=0; i<n; i++)
    {
	Process process;
	fgets(buf, 128, stdin);
	sscanf(buf, "%s %d\n", name, &time);
	strcpy(process.name, name);
	process.time = time;
	enqueue(queue, process);
    }

    int currentTime = 0;
    while (!empty(queue))
    {
	Process process = dequeue(queue);
	if (process.time <= q)
	{
	    currentTime += process.time;
	    printf("%s %d\n", process.name, currentTime);
	}
	else
	{
	    currentTime += q;
	    process.time -= q;
	    enqueue(queue, process);
	}
    }

    freeQueue(queue);

    return 0;
}