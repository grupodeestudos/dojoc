#include <stdio.h>
#include <stdlib.h>

struct _Node {
  int v;
  int c;
  char *o;
  float p;
};

typedef struct _Node Node;

int main(){


  Node *n;
  Node p;

  n = malloc(sizeof(Node) * 3);

  printf("sizeof(p)=%d\n", sizeof(p));
  printf("sizeof(n)=%d\n", sizeof(n));

  return 0;
}
