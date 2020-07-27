/*
Code from user Elideb on StackOverflow: 
https://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c#:~:text=To%20determine%20the%20size%20of,size%20of%20the%20array%20element.
*/

/* #defines by Abby Jones */

#include <stdio.h>
#include <stdlib.h>

//#define SIZE_ARRAY(a) (int) (sizeof(a))
//#define LEN_ARRAY(a) (int) (sizeof(a) / sizeof(a[0]))

void printSizeOf(int intArray[]);
void printLength(int intArray[]);

int main(int argc, char* argv[])
{
  int array[] = { 0, 1, 2, 3, 4, 5, 6 };

  size_t array_s = sizeof(array);
  printf("sizeof of array: %zu\n", array_s);
  printSizeOf(array);

  size_t array_l = sizeof(array) / sizeof(*array);
  printf("Length of array: %zu\n", array_l);
  printLength(array);
}

void printSizeOf(int intArray[])
{
  size_t array_s = sizeof(intArray);
  printf("sizeof of parameter: %zu\n", array_s);
}

void printLength(int intArray[])
{
  size_t array_l = sizeof(intArray) / sizeof(intArray[0]);
  printf("Length of parameter: %zu\n", array_l);
}
