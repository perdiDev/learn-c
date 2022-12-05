#include <stdio.h>

int array[] = {0,1,2,3,4,5,6,7,8,9};

int main(int argc, char * args[])
{
  int *p;
  int i;
 printf("elemen pertama %d\n",array[0]);
 printf("lokasi elemen pertama array adalah %p\n",array);
 p = &array[0];
 printf("alamat elemen indeks 0 = %p\n",p);
 for(i=0;i<10;i++)
 {
  printf("elemen ke %d = %d\n",i,*p);
  p++;
 }
  return 0;
}

