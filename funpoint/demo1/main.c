#include <stdio.h>
typedef void (*callback_p)(void);

void demo(callback_p callback)
{
    printf("enter demo func\n");
    callback();
    printf("exit demo func\n");
}

void callback1()
{
    printf("This is callback1\n");
}

void callback2()
{
    printf("This is callback2\n");
}

void callback3()
{
    printf("This is callback3\n");
}

int main(int argc, char const *argv[])
{
    demo(callback1);
    demo(callback2);
    demo(callback3);
    return 0;
}
