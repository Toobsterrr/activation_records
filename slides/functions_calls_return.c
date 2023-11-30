int* second() {
    int* arr = malloc(3*sizeof(int));
    arr[0] = 2;
    arr[1] = 3;
    arr[2] = 4;
    return arr;
}

int first() {
    int* arr = second();
    return 1;
}

void main() {

    int i = first();

}
