



int factorial(int n) {
    if (n == 1)
        return 1;

    return n * factorial(n-1);
}


void main() {
    int fac = factorial(5);
}