/* Test program */

#include <stdio.h>
#include <stdlib.h>

void test_func(void)
{
    const cpl_Uint8_t connectedString[]    = "CONNECTED";
    const cpl_Uint8_t disconnectedString[] = "DISCONNECTED";
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
