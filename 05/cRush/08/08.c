#include <stdio.h>

int main()
{
    int maxLoad, passenger, currentWeight;

    maxLoad  = passenger = currentWeight = 0;

    printf("Enter the maximum weight in kg: ");
    scanf("%d", &maxLoad);
    while(currentWeight < maxLoad)
    {
        int weight;
        printf("Enter passenger's weight in kg: ");
        scanf("%d", &weight);
        currentWeight += weight;
        if(currentWeight <= maxLoad)
        {
            passenger++;
        }
    }
    printf("The elevator can carry %d passenger(s)\n", passenger);
    return 0;
}
