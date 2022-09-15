#ifndef PROCESSES_INCLUDED 
#define PROCESSES_INCLUDED

#include <stddef.h>
#include <stdio.h>
#include <printf.h>
#include "types.h"

typedef struct instruction_ {

	char* name;
	int arrival;
	int burst;
	int burst_r;
	int wait;
	int time_u;

} instruction_;


typedef struct instructions_ {

	int processcount; // 1
	int runfor; // 2
	int use; // 3
	int quantum;// 3.5

	instruction_** id; //4

} instructions_;

void execute_process(instructions_* list);
void fcfs(FILE* output, instructions_* list);
void sjf(FILE* output, instructions_* list);
void rr(FILE* output, instructions_* list);

#endif
