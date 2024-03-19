#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_LIMIT 1001
#define COMMAND_LIMIT 100

#define REPLACE "replace"
#define REVERSE "reverse"
#define PRINT "print"

const char* CMD[] = { REPLACE, REVERSE, PRINT };

typedef struct {
	char* keyword;
	int start;
	int end;
	char* rep;
} Command;

typedef struct {
	char str[STRING_LIMIT];
	int count;
	Command* command;

} DataSet;

void InputDataSet(DataSet* dataSet);
int InputCommand(Command* command, int strSize);
void Calculation(DataSet* dataSet);
void FreeDataSet(DataSet* dataSet);

int Contains(char* str, const char** checker);

int main(void) {
	DataSet dataSet;

	InputDataSet(&dataSet);

	Calculation(&dataSet);

	FreeDataSet(&dataSet);
}

void InputDataSet(DataSet* dataSet) {

	char buf[STRING_LIMIT];
	int strSize = 0;
	int cmdCount;
	int cmdFlag;
	Command* cmd;

	int idx;

	do {
		memset(buf, '\0', STRING_LIMIT);
		scanf("%[^\n]s", buf);
		for (strSize = 0; buf[strSize] != '\0'; strSize++);
	} while(strSize < 1 || strSize >= STRING_LIMIT);

	do {
		scanf("%d", &cmdCount);
	} while (cmdCount < 1 || cmdCount > COMMAND_LIMIT);


	cmd = (Command*)malloc(sizeof(Command) * cmdCount);
	for (idx = 0; idx < cmdCount; idx++) {
		do {
			cmdFlag = InputCommand((cmd + idx), strSize);
		} while (cmdFlag != 1);
	}


	memcpy(dataSet->str, buf, STRING_LIMIT);
	dataSet->count = cmdCount;
	dataSet->command = cmd;
}

int InputCommand(Command* command, int strSize) {
	char buf[COMMAND_LIMIT];
	int cmdSize;
	int start;
	int end;
	char* rep = NULL;
	int repLimit;

	memset(buf, '\0', COMMAND_LIMIT);
	scanf(" %s", buf);
	for (cmdSize = 0; buf[cmdSize] != '\0'; cmdSize++);
	if (!Contains(buf, CMD)) {
		return 0;
	}

	scanf("%d %d", &start, &end);
	if ((start < 0 || start > end) ||
		(end < start || end >= strSize)) {
		return 0;
	}

	if (strcmp(buf, REPLACE) == 0) {
		int repSize;
		repLimit = (end - start + 1);
		rep = (char*)malloc(sizeof(char) * repLimit);

		memset(rep, '\0', repLimit);
		scanf(" %s", rep);
		for (repSize = 0; *(rep + repSize) != '\0'; repSize++);
		if (repSize != repLimit) {
			return 0;
		}
	}

	command->keyword = (char*)malloc(sizeof(char) * cmdSize + 1);
	memcpy(command->keyword, buf, cmdSize + 1);
	command->start = start;
	command->end = end;
	command->rep = rep;

	return 1;
}

void Calculation(DataSet* dataSet) {
	int idx;
	int idc;
	char* str = dataSet->str;

	for (idx = 0; idx < dataSet->count; idx++) {
		Command* cmd = (dataSet->command + idx);
		char* keyword = cmd->keyword;
		int start = cmd->start;
		int end = cmd->end;

		if (strcmp(keyword, REPLACE) == 0) {
			char* rep = cmd->rep;

			for (idc = start; idc <= end; idc++) {
				*(str + idc) = *(rep + idc - start);
			}
		} else
		if (strcmp(keyword, REVERSE) == 0) {
			for (idc = start; idc <= (start + end) / 2; idc++) {
				char tmp = *(str + idc);
				*(str + idc) = *(str + start + end - idc);
				*(str + start + end - idc) = tmp;
			}
		} else
		if (strcmp(keyword, PRINT) == 0) {
			for (idc = start; idc <= end; idc++) {
				printf("%c", *(str + idc));
			}
			printf("\n");
		}
	}
}

void FreeDataSet(DataSet* dataSet) {
	int idx;

	for (idx = 0; idx < dataSet->count; idx++) {
		Command* command = dataSet->command + idx;
		free(command->keyword);
		if (command->rep != NULL) {
			free(command->rep);
		}
	}
	free(dataSet->command);
}

int Contains(char* str, const char** checker) {
	int res = 0;

	int idx = 0;
	for (idx = 0; *(checker + idx); idx++) {
		if (!(res = strcmp(str, *(checker + idx)))) {
			res = 1;
			break;
		}
	}

	return res;
}
