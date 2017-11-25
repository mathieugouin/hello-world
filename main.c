// Test program
// Change in branch2
// Change 2 in branch2
#include <stdio.h>
#include <stdlib.h>

/**
 * Main function
 * change done in branch1
 * change 2 done in branch1
 */
int main(int argc, char * argv[])
{
  int i;
  static int x = 0;
  int y = 1;

  for (i = 0; i < argc; i++)
  {
    printf("argv[%d] = %s\n", i, argv[i]);
  }

  return EXIT_SUCCESS;
}
// END 2
