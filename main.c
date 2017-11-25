// Test program
#include <stdio.h>
#include <stdlib.h>

/**
 * Main function
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
// end
