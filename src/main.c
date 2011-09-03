#include <stdio.h>
#include <stdlib.h>

#include <linkedlist.h>

int main(){


  char a[4] = "abc";

  int x;
  printf("sizeof(x)=%d\n", sizeof(x));
  printf("sizeof(a[0])=%d\n", sizeof(a[0]));
  printf("sizeof(a)=%d\n", sizeof(a));


  printf("a=%s\n", a);
  printf("a[0]=%c\n", a[0]);
  printf("&a[0]=%p\n", &a[0]);
  printf("a[1]=%c\n", a[1]);
  printf("&a[1]=%p\n", (a+1));
  printf("a[1]=%c\n", *(a+1));


  return 0;

}
