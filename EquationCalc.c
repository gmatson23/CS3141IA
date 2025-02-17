/*
Gunnar Matson
gjmatson
This program takes in coefficents for a function along with an x value and 
calculates the y value.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
   if (argc < 3)
   {
      printf("Usage: EquationCalc <x_value> <a_0> [a_1] ... [a_k]\n");
      return 0;
   }

   double x = atof(argv[1]);
   // TODO: code!
   double ans = 0;

   // Will do ans + argv[1]^i * argv[i + 2]
   for (int i = 0; i < argc - 2; i++) {
     double temp1 = atof(argv[1]);
     double temp2 = temp1;  

     if (i != 0) {
       for (int y = 1; y < i; y++) {
	 temp1 = temp1 * temp2;
       }
     }
     else if (i == 0) temp1 = 1;

     temp1 = temp1 * atof(argv[i + 2]);
     ans = ans + temp1;
   }
   // Print y-value
   printf("%.2f\n", ans);
   return 0;
}
