#include <stdio.h>
#include <stdlib.h>

#include <linkedlist.h>

int main(){


  int *p = malloc(sizeof(int) * 10);

  printf("p=%p\n", p);
  printf("sizeof(p)=%d\n", sizeof(p));


  return 0;
}
