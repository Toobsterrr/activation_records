void second(int vals[]) {
    vals[0] = 8;
    vals[3] = 9;
}

void first(int x, int y, int z, int a, int b, int c, int s) {
    int arr[] = {x,y,6,7};
    second(arr);
}

void main() {


    int x = 2;
    int y = 3;
    first(x, y, 9, 8, 7, 6, 4);
    int z = x + y;

}
