#include <stdio.h>
#include <stdlib.h>

#include <linkedlist.h>

int main(){


  char a[1024] = "abc";


  a[2] = 0;
  a[4] = NULL;
  printf("a=%s\n", a);
  printf("a[0]=%c\n", a[0]);
  printf("&a[0]=%p\n", &a[0]);
  printf("&a[0]=%p\n", a);


  return 0;

}
