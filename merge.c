#include<stdio.h>
#include<conio.h>
int main()
{
int a[50], b[50], c[100], limitA, limitB, i, j, limitC, temp;
printf("Elements in array A: ");
scanf("%d", &limitA);
printf("Elements in array B: ");
scanf("%d", &limitB);
printf("Enter %d elements in array A:", limitA);
for(i=0; i<limitA; i++)
scanf("%d", &a[i]);
printf("Enter %d elements in array B:", limitB);
for(i=0; i<limitB; i++)
scanf("%d", &b[i]);
printf("\nElements of Array A are:\n");
for(i=0; i<limitA; i++)
{
if(i==(limitA-1))
printf("%d", a[i]);
else
printf("%d, ", a[i]);
}
printf("\n\nElements of Array B are:\n");
for(i=0; i<limitB; i++)
{
if(i==(limitB-1))
printf("%d", b[i]);
else
printf("%d, ", b[i]);
}
// merging the two arrays
for(i=0; i<limitA; i++)
{
c[i] = a[i];
}
for(j=0; j<limitB; j++)
{
c[i] = b[j];
i++;
}
limitC = i;
// sorting the merged array
for(j=0; j<(limitC-1); j++)
{
for(i=0; i<(limitC-1); i++)
{
if(c[i]>c[i+1])
{
temp = c[i];

c[i] = c[i+1];
c[i+1] = temp;
}
}
}
printf("\n\nElements of Array C are:\n");
for(i=0; i<limitC; i++)
{
if(i==(limitC-1))
printf("%d", c[i]);
else
printf("%d, ", c[i]);
}
getch();
return 0;
}