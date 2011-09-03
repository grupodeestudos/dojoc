#include <stdio.h>
#include <stdlib.h>

#include <linkedlist.h>

int main(){

  int x = 10;
  int *y = NULL;
  int *z = NULL;

  printf("x=%d\n", x);
  y = &x;
  z = &y;
  printf("y=%p\n", y);
  printf("&y=%p\n", &y);
  printf("z=%p\n", z);
  printf("z=%p\n", (*z));


  return 0;

}
