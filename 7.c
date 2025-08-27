#include <stdio.h>
int main()
{
     int min,hours, rmin;
     printf("Enter min : ");
     scanf("%d", &min);
     hours=min/60;
     rmin=min%60;
     
     printf("%d min= %d hours and %d min",min,hours,rmin);
}


