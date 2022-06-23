#include <stdio.h>
#include "bitree.h"

int main(int argc, char *argv[])
{
  // printf("%d\n", argc);
  // for(int i = 0; i < argc; i++){
  //   printf("%s\t", argv[i]);
  // }

  int end = 0;
  BITREE_NODE p;
  inputBITree(argv, argc, &end);
  printBITree(&p, 0, 0);
  return 0;
}