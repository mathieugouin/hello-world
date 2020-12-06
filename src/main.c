/* Test program */

#include <stdio.h>
#include <stdlib.h>

void test_func(void)
{
    const char connectedString[]    = "CONNECTED";
    const char disconnectedString[] = "DISCONNECTED";
}

int main(int argc, char * argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    test_func();
    
    return EXIT_SUCCESS;
}
