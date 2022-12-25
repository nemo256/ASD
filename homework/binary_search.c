/*
 * Full Name
 * Groupe
 * ID: 12345679
 * 
 * Program that searches for a random value (read by the user)
 * in an array (also read by the user) using a binary search approach.
 */

#include <stdio.h>
#include <stdlib.h>

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
   int low = 0, high = size - 1, mid;

   /* 
    * Search for a value in the array (binary search approach)
    * divide and conquer (division at each iteration)
    */
   while (low <= high) {
      mid = (low + high) / 2;
      if (value == array[mid]) {
         printf("%d exists in the array\n", value);
         exit(0);
      } else if (value < array[mid]) {   // value is on the left side 
         high = mid - 1;
      } else {                           // value is on the right side
         low = mid + 1;
      }
   }

   // In case mid is out of bounds (mid >= size or mid <= -1)
   printf("%d does not exist in the array\n", value);
}
