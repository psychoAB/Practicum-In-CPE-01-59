#include <stdio.h>

int main()
{
    double t = 30;
    double g = 9.81;
    
    printf("At time t=%.1f seconds, the velocity is %.2f m/s\n", t, t * g);

    return 0;
}
