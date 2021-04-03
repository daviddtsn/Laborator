#include <stdlib.h>
#include <stdio.h>
main()
{
#define NUMINTS 3
	int* list, i;		list = (int*)calloc(NUMINTS, sizeof(int));
	*list = 421;	*(list + 1) = 53;	*(list + 2) = 1806;  	printf("Lista adreselor:");
	for (i = 0; i < NUMINTS; i++) 	      printf("%4p ", (list + i));     printf("\n Lista valorilor:");
	for (i = 0; i < NUMINTS; i++)      printf("%4p ", *(list + i));   printf("\n");
}
