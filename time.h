
#include "my_stdio.h"
#include "time.h"

int main() {
    time_t now;
    time(&now);
    printf("Current time: %s", ctime(&now));
    return 0;
}
