#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "find_min_max.h"


int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: %s seed arraysize\n", argv[0]);
    return -1;
  }
  char *help = malloc(sizeof(char) * (strlen(argv[1]) + 1));
  strcpy(help, argv[1]);

  int seed = atoi(help);
  if (seed <= 0) {
    printf("seed is a positive number\n");
    return 1;
  }

  int array_size = atoi(help);
  if (array_size <= 0) {
    printf("array_size is a positive number\n");
    return 1;
  }

  int *array = malloc(array_size * sizeof(int));
  GenerateArray(array, array_size, seed);
  struct MinMax min_max = GetMinMax(array, 0, array_size);
  free(array);

  printf("min: %d\n", min_max.min);
  printf("max: %d\n", min_max.max);

  return 0;
}