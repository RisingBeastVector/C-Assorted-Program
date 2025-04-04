#include <stdio.h>
int main()
{
	float f,c;
    printf("ENTER TEMPERATURE IN FAHRENHEIT : ");
    scanf("%f",&f);
    c = (5*(f-32))/9;
    printf("TEMPERATURE IN CELSIUS = %f",c);
    return 0;
}
