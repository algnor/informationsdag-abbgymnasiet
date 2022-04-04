#include <stdio.h>
#include <string.h>

#include "colors.h"

int main(void) {
  struct {
    char buf[32], flag[4];
  } data = {NULL, NULL};

  printf("Vad heter du? ");
  gets(data.buf);

  printf("Välkommen, %s!\n\nVärdet av flaggan: \"%s\"\n\n", data.buf, data.flag);
  if(strcmp(data.flag, "hej") == 0)
    puts(COL_GRN "Du satt flaggan till rätt värde, grattis!" COL_RST);
  else
    puts(COL_RED "Du satt inte flaggan till rätt värde." COL_RST);
}
