#include <stdio.h>

int summ;


void set_summ(int summand) {
  summ = summand;
}

int add(int summand) {
  return summ + summand;
}

void __attribute__ ((constructor)) initLibrary(void) {
 //
 // Function that is called when the library is loaded
 //
    printf("Library is initialized\n"); 
    summ = 0;
}
void __attribute__ ((destructor)) cleanUpLibrary(void) {
 //
 // Function that is called when the library is »closed«.
 //
    printf("Library is exited\n"); 
}
