#include <stdio.h>

int main() {
    int a = 5;


    int buf[] = {2,7,3,8,8,6};

    printf("%d\n",buf[0]);
    printf("%d\n",buf[5]);
    printf("%d\n",buf[6]);
    printf("%d\n",buf[-1]);
    buf[-1] = 3;

    printf("%d\n",a);
}
