#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  if((fp = fopen(argv[1], "r")) == NULL)
  {
    printf("Error\n");
    return(0);
  }
