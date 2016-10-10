#include <stdio.h>
#include <stdlib.h>

int main() {

  int *p;

  p = malloc( 5 * sizeof(int) ); //calloc( 5, sozeof(int) )
  p[0] = 924;
  
  printf("p[0]: %d\n", p[0]);

  //p++;
  //the above would cause an error because the pointer causes 

  /*
  int *p2 = p;
  p++;
  free(p2);
  */
  //however, the above works bc it is a pointer

  free(p);

  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  
  struct { int a; char x; } s;
  printf("size of s: %lu\n", sizeof(s) );

  struct { int a; double x; } s2;
  printf("size of s2: %lu\n", sizeof(s2) );

  struct { int a; double x; char y; } s3;
  printf("size of s3: %lu\n", sizeof(s3) );

  struct foo { int a; char x; };

  struct foo s4;
  s4.a = 694;
  printf("size of s4, foo: %lu\n", sizeof(s4) );
  printf("size of foo: %lu\n", sizeof(foo) );
  printf("s4.a: %d\n", s4.a);
  
  struct foo *s5 = (struct foo *)malloc(sizeof(Struct foo) );

  (*s5).a = 764;
  printf("s5.a
  return 0;
}
