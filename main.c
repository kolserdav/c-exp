#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

#define SEC_TO_US(sec) ((sec)*1000000)
#define NS_TO_US(ns)    ((ns)/1000)

uint64_t micros()
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC_RAW, &ts);
    uint64_t us = SEC_TO_US((uint64_t)ts.tv_sec) + NS_TO_US((uint64_t)ts.tv_nsec);
    return us;
}

int main(void) { 
	char s[] = "Hello from C!";
	uint64_t start = micros();
	puts(s);
	printf("%lu\n",micros() - start);
 	return EXIT_SUCCESS;
} 

