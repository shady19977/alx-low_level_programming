#include "main.h"
#include <stdio.h>

int main(void)
{
  char *s0 = "Anne Cognet";
  char *s1 = "Asaia Palacios";

  printf("%s, %s\n", s0, s1);
  set_string(&s1, s0);
  printf("%s, %s\n", s0, s1);
  return (0);
}

