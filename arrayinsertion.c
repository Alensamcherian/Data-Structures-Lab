#include <stdio.h>
int main()
{
int array[50], position, x, n, value;
printf("Enter number of elements in array\n");
scanf("%d", &n);
printf("Enter %d elements\n", n);
for (x = 0; x < n; x++)
scanf("%d", &array[x]);
printf("Enter the location where you wish to insert an element\n");
scanf("%d", &position);
printf("Enter the value to insert\n");
scanf("%d", &value);
for (x= n - 1; x >= position - 1; x--)
array[x+1] = array[x];
array[position-1] = value;
printf("Resultant array is\n");
for (x = 0; x <= n; x++)
printf("%d\n", array[x]);
return 0;
}