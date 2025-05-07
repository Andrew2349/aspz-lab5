#include <stdio.h>

int i = 0;

int increment() {
    ++i;
    printf("increment called, i = %d\n", i);
    return i;
}

int get() {
    printf("get called, i = %d\n", i);
    return i;
}

int main() {
    printf("Result: %d %d\n", increment(), get());
    return 0;
}

