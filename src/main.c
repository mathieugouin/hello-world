/* Test program */

#include <stdio.h>
#include <stdlib.h>

void test_func(void)
{
    const cpl_Uint8_t failString[5]          = "FAIL";
    const cpl_Uint8_t connectedString[10]    = "CONNECTED";
    const cpl_Uint8_t disconnectedString[13] = "DISCONNECTED";
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
