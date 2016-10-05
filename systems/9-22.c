#include <stdio.h>
#include <stdlib.h>


int addition(int val1, int val2) {
  return val1+val2;
}

int greet(int *n){
  //printf("hello, how are you?\n");
  
  return *n;;
}

int main() {
  int i = 7;
  printf("%d\n",greet(i));
  printf("%d\n",i);
  printf("%d\n",greet(&i));
  printf("%d\n",i);
}
