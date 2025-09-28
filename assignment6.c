#include <stdio.h>
#include <string.h>
int main()
{

    char room = '\0';
    char appliance = '\0';

    printf("what room, L for living room, K for kitchen:  ");
    scanf(" %c", &room);

    switch (room)
    {

    case 'L':
        printf("which appliance L for light, T for thermostat: ");
        scanf(" %c", &appliance);

        switch (appliance)
        {
        case 'L':
            printf("Adjusting ambient lighting.");
            break;
        case 'T':
            printf("Setting living room temperature.");
            break;
        default:
            printf("enter valid letter");
            break;
        }

        break;
    case 'K':
        printf("which appliance, L for light, T for thermostat");
        scanf(" %c", &appliance);
        switch (appliance)
        {
        case 'L':
            printf("Turning on bright task lighting");
            break;
        case 'T':
            printf("Setting kitchen temperature.");
            break;
        default:
            printf("write a valid letter");
        }

        break;
    default:
        printf("write a valid letter");
    }

    return 0;
}