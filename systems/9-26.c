#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int strLen( char x[] ) {
  short ctr = 0;
  int mem = x[ctr];
  short bool = 0;
  if( bool == 0 ) {
    if( x[ctr] == '0' || x[0] == 'null' ) {
      ctr ++;
    }
    else { bool = 1; }
  }
  return ctr;
}
*/

int main() {
  //printf("%d\n",strLen("hello"));
  char s1[32] = "zero";
  char s2[] = "hero";
  char s3[100] = "zero";
  char s4[] = "hero";
  
  printf("%s\n",strcat(s1,s2));
  printf("%s\n",strncat(s3,s4,3));
  printf("%s\n",strncat(s3,s4,10));
  printf("%s\n",strncat(s1,s2,100));
  
  return 0;
}
