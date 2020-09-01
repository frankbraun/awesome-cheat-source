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
  return EXIT_SUCCESS;
}
