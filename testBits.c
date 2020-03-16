
#include <stdio.h>
#include <string.h>

/* define simple structure */
struct {
   unsigned int widthValidated;
   unsigned int heightValidated;
} status1;

/* define a structure with bit fields */
struct {
   unsigned int widthValidated : 1;
   //unsigned int heightValidated : 1;
} status2;

struct {
  unsigned int word : 8;
} word;

int bitcount(unsigned char x){
  int count;
  int co = 0;
  for(count=0; x!=0; x>>=1){
    co ++;
    printf("%d \n", x);
    if(x & 01){
      count ++;
    }
  }
  return co;
}

int modifyBit(int numb, int position, int bitChange){
  int mask = 1 << position;
  return (numb & ~mask) | ((bitChange<<position) & mask);

}

int main( ) {

  int res1 = modifyBit(7, 3, 1);
  int res2 = modifyBit(7, 2, 0);
  printf(" 15  = %d \n", res1);
  printf(" 3  = %d \n", res2);
   return 0;
}
