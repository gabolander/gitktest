/*
 * Determine endianness of CPU
 * Gabriele Zappi - april 2014
 *************************************
 * Suppose we are on a 32-bit machine.
 * 
 * If it is little endian, the x in the memory will be something like:
 * 
 *        higher memory
 *           ----->
 *     +----+----+----+----+
 *     |0x01|0x00|0x00|0x00|
 *     +----+----+----+----+
 *     A
 *     |
 *    &x
 * so (char*)(*x) == 1, and *y+48 == '1'.
 * 
 * If it is big endian, it will be:
 * 
 *     +----+----+----+----+
 *     |0x00|0x00|0x00|0x01|
 *     +----+----+----+----+
 *     A
 *     |
 *    &x
 * so this one will be '0'.
 * 
 */

#include <stdio.h>
int main()
{
  int x = 1;
  char *y = (char*)&x;
	char e = *y+48; /* e -> var to store result of char operation. */

	printf("\n----------------------------------\n");
	printf("I determine endianness of this CPU\n");
	printf("----------------------------------\n");
  /* printf("%c\n",*y+48); */

	/* e=*y+48; */
  printf("%c - ",e);

	printf("This CPU is %s!\n\n",(e=='1')?"Little Endian":"Big Endian");
}
