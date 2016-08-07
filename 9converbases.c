#include <stdio.h>
#include <stdlib.h>
void main(void)
{
   char base_digits[16] =
	 {'0', '1', '2', '3', '4', '5', '6', '7',
	  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

   int converted_number[64];
   long int number_to_convert;
   int next_digit, base, index=0;


   printf("Ingresa el numero y su base: ");
   scanf("%ld %i", &number_to_convert, &base);

   while (number_to_convert != 0)
   {
	 converted_number[index] = number_to_convert % base;
	 number_to_convert = number_to_convert / base;
	 ++index;
   }


   --index;  
   printf("\n\n Numero convertido = ");
   for(  ; index>=0; index--) 
   {
	 printf("%c", base_digits[converted_number[index]]);
   }
   printf("\n");
}
