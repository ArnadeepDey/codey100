#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

void checkLight(enum TrafficLight light)
{
    switch (light)
    {
    case RED:
        printf("Red Light: Stop\n");
        break;
    case YELLOW:
        printf("Yellow Light: Wait\n");
        break;
    case GREEN:
        printf("Green Light: Go\n");
        break;
    default:
        printf("Invalid Signal\n");
    }
}

int main()
{
    printf("Traffic Control System:\n");
    printf("-----------------------\n");

    checkLight(RED);
    checkLight(YELLOW);
    checkLight(GREEN);

    return 0;
}
