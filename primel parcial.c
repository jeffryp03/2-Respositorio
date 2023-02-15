#include <stdio.h>

int main()
 {
   int arre1[] = {5, 8, 12, 15, 20, 10, 29, 30, 17, 3};

   int arre2[] = {9, 7, 38, 18, 19, 99, 111, 69, 30, 49};

   int n = sizeof(arre1) / sizeof(arre1[0]);

   int suma[n];

   for (int i = 0; i < n; i++)
    {

      suma[i] = arre1[i] + arre2[n - i - 1];

   }

   printf("\n El resultado de las sumas de los arreglos es: ");


   for (int i = 0; i < n; i++)
        {
      printf("%d ", suma[i]);
   }
   return 0;
}
