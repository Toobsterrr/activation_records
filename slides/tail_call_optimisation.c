
#include <stdio.h>


// before running, enable 
// -o1 optimisation
// -foptimize-sibling-calls
// in tasks.json

int factorial(int n, int accumulator) {
    if (n == 1)
        return accumulator;

    return factorial(n-1, accumulator*n);
}



#pragma GCC push_options
#pragma GCC optimize ("O0")
void main() {

    int fac = factorial(5, 1);

    printf("%d", fac);
}
#pragma GCC pop_options