#include <stdio.h>
int main() {
  char charzard = 'e';
  int inti = 42;
  long long_er = 2187;
  printf("our char's address is %p which is %lu in decimal\n", &charzard, &charzard);
  printf("our intt's address is %p which is %lu in decimal\n", &inti, &inti);
  printf("our long's address is %p which is %lu in decimal\n", &long_er, &long_er);
  return 0;
}
