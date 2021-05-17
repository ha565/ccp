#include <stdio.h>

int main()
{
    float fahernheit,celsius;
    printf("Enter a temp in fahernheit/n:");
    scanf("%f/n",&fahernheit);
    celsius = (fahernheit-32)*5/9;
    printf("the temperature in degree celsius is:%f/n",celsius);
    return 0;
}
