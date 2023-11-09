#include <stdio.h>

// void forbidden_function() __attribute__((used));
void forbidden_function()
{
    int bad[4] = {1, 2, 3, 4};
    // printf("Forbidden function has been called!");
}

void okay_function()
{
    char string[5] = "baaa";
    string[21] = 'I';
    // string[21] = 'i';
    string[22] = 'Q';
}

void main ()
{
    okay_function();
}