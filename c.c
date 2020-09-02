// C cheat source (single line comment)

/*
multi-line comment
*/

/* include system header files */
#include <stdio.h>
#include <stdlib.h>

/* include program header files */
#include "c.h"

/* defining the hello functin that was declared in c.h */
int hello(const char *name)
{
  printf("hello, %s\n", name);
  return 0;
}

/* static functions are not visible outside the compilation unit */
static void loops(void) {
  int i;

  /* for loop */
  for (i = 0; i < 5; i++) {
    printf("%d\n", i);
  }

  /* while loop (check before) */
  i = 0;
  while (i < 5) {
    printf("%d\n", i);
    i++;
  }

  /* while loop (check after, rare) */
  i = 0;
  do {
    printf("%d\n", i);
    i++;
  } while (i < 5);
}

/* The main function. argc is the "argument counter" (the number of command line
   arguments), argv is the "argument vector" which contains the command line
   arguments, including the program name, indexed from 0. */
int main(int argc, char **argv)
{
  int rc;
  puts(argv[0]); /* print program name */
  rc = hello("world");
  if (rc) {
    return EXIT_FAILURE;
  }
  loops();
  return EXIT_SUCCESS;
}
