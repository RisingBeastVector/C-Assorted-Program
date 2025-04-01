#include <stdio.h>
int main()
{
	float in,cm;
    printf("ENTER MEASUREMENT IN INCH : ");
    scanf("%f",&in);
    cm = in*2.54;
    printf("MEASUREMENT IN CENTIMETER = %f",cm);
    return 0;
}
