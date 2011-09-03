#include <stdio.h>
#include <stdlib.h>

struct _Node {
};

typedef struct _Node Node;

Node *criar_lista(){
  return NULL;
}

int insere(Node *raiz, int n){
  return 0;
}


void soma2(int x, int *c){
  *c = x + 2;
  //return x + 2;
}


int main(){

  int x = 10;
  int c = 9;
  
  printf("x=%d\n", x);
  printf("c=%d\n", c);
  printf("&c=%p\n", &c);
  soma2(x, &c);

  printf("c=%d\n", c);

  //printf("soma2(x)=%d\n", soma2(x, c));


  return 0;
}
