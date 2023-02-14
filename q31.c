#include <stdio.h>
struct time {
    int hour;
    int minute;
    int second;
};

int main() {
    struct time time;

    printf("Enter hour: ");
    scanf("%d", &time.hour);

    printf("Enter minute: ");
    scanf("%d", &time.minute);

    printf("Enter second: ");
    scanf("%d", &time.second);


    printf("%d:%d:%d\n", time.hour, time.minute, time.second);

    return 0;
}
