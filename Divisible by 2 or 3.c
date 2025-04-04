#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (num%2==0 && num%3==0)
    {
    	printf("\n%d IS DIVISIBLE BY BOTH 2 AND 3",num);
	}
	else if (num%2==0)
	{
    	printf("\n%d IS DIVISIBLE BY 2",num);
	}
	else if (num%3==0 )
	{
    	printf("\n%d IS DIVISIBLE BY 3",num);
	}
	else
	{
    	printf("\n%d IS NOT DIVISIBLE BY 2 AND 3",num);
	}
	return 0;
}
