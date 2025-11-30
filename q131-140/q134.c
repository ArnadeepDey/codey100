#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

void printStatus(enum Status s)
{
    switch (s)
    {
    case SUCCESS:
        printf("Status Code %d: Operation Completed Successfully.\n", s);
        break;
    case FAILURE:
        printf("Status Code %d: Operation Failed.\n", s);
        break;
    case TIMEOUT:
        printf("Status Code %d: Operation Timed Out.\n", s);
        break;
    default:
        printf("Unknown Status.\n");
    }
}

int main()
{
    enum Status currentStatus;

    currentStatus = SUCCESS;
    printStatus(currentStatus);

    currentStatus = TIMEOUT;
    printStatus(currentStatus);

    currentStatus = FAILURE;
    printStatus(currentStatus);

    return 0;
}
