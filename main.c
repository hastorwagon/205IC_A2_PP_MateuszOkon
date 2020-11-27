#include <stdio.h>

int main() {
    int i = 0;
    float f = 3.5;
    double d = 2.5;
    char c = 'c';

    printf("wartosci moich zmiennych: i = %i, f = %.2f, d = %.2lf, c = %c\n", i, f, d, c);

    scanf ("%i", &i);
    scanf ("%f", &f);
    scanf ("%lf", &d);
    scanf (" %c", &c);

    printf("wartosci moich zmiennych: i = %i, f = %.2f, d = %.2lf, c = %c\n", i, f, d, c);

    return 0;
}
