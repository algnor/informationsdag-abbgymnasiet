#include <stdio.h>

#include "colors.h"

int main(void) {
  struct {
    char buf[32];
    int flag;
  } data = {NULL, 0};

  printf("Vad heter du? ");
  gets(data.buf);

  printf("Välkommen, %s!\n\nVärdet av flaggan: %d\n\n", data.buf, data.flag);
  if(data.flag == 1234)
    puts(COL_GRN "Du satt flaggan till rätt värde, grattis!" COL_RST);
  else
    puts(COL_RED "Du satt inte flaggan till rätt värde." COL_RST);
}
