#include <stdio.h>
#include <stdlib.h>

void stringly( char arr[], char arr2[] ) {
  
}

int main() {
  char arr[20];
  arr[0] = 'c';
  arr[1] = 65;
  arr[2] = 't';
  
  printf("arr: %p\n", arr); //memory address;
  printf("arr: %s\n", arr); //string- array of chars

  //time to... reassign values to strings!!

  char apple[] = "Golden apple";
  stringly( apple, "green");
  
  return 0;
}
