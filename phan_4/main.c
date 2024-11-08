#include <stdio.h>

void print_1(int value)
{
    printf("Hello world! \n");

}

int example(int *a)
{
    *a += 2;
    return *a;
}

int main()
{
    int *a;
    *a = 4;
    int b = example(a);
    printf("%d",b);
    return 0;
}