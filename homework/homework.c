/*
 * Full Name
 * Groupe
 * ID: 12345679
 * 
 * Program that searches for a random value (read by the user)
 * in an array (also read by the user) using a dichotomic approach.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int
main() {
   // Read the size
   int size;
   printf("Enter size of array: ");
   scanf("%d", &size);

   // Read array elements
   int array[size];
   printf("Enter elements in array:\n");
   for (int i = 0; i < size; i++) {
      printf("Array[%d] = ", i);
      scanf("%d", &array[i]);
   }

   // Read a value to search
   int value;
   printf("Enter a value to search: ");
   scanf("%d", &value);

   // Sort array in ascending order
   for (int i = 0, temp; i < size - 1; i++) {
      for (int j = i + 1; j < size; j++) {
         if (array[j] < array[i]) {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
         }
      }
   }

   // Show the sorted array
   printf("Sorted array = {͞͞");
   for (int i = 0; i < size; i++) {
      printf(" %d,", array[i]);
   }
   printf(" }\n");

   // Initializing variables
   int i = size / 2;
   bool flag1 = false, flag2 = false;

   /* 
    * Search for a value in the array (dichotomic approach)
    *
    * Note: <There are other methods>.
    */
   while (i < size && i > -1) {
      if (flag1 && flag2) {
         printf("%d does not exist in array\n", value);
         exit(0);
      } else if (value < array[i]) {
         i--;
         flag1 = true;
      } else if (value > array[i]) {
         i++;
         flag2 = true;
      } else {
         printf("%d exists in the array\n", value);
         exit(0);
      }
   }

   // In case i is out of bounds (i >= size or i <= -1)
   printf("%d does not exist in the array\n", value);
}
