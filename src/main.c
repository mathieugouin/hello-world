/* Test program */

#include <stdio.h>
#include <stdlib.h>

// branch-no-change-in-master
// branch-no-change-in-master 2

/**
 * Main function
 * change done in branch1
 * change 2 done in branch1
 */
int main(int argc, char * argv[])
{
  int i;
  for (i = 0; i < argc; i++)
  {
    printf("argv[%d] = %s\n", i, argv[i]);
  }

  return EXIT_SUCCESS;
}
