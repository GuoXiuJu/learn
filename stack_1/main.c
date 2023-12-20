#include <stdio.h>
#include "stack.h"

int main(int argc, char const *argv[])
{

    make_empty();
    push(1);
    push(2);
    push(3);
    pop();
    print_stack();

    return 0;
}
