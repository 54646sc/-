#include <stdio.h>

int main() {
    int start_time, elapsed_minutes;
    scanf("%d %d", &start_time, &elapsed_minutes);

    int hours = start_time / 100;
    int minutes = start_time % 100;
    
    hours += elapsed_minutes / 60;
    minutes += elapsed_minutes % 60;

    if (minutes >= 60) {
        hours += 1;
        minutes -= 60;
    } else if (minutes < 0) {
        hours -= 1;
        minutes += 60;
    }

    hours = hours % 24;

    int result_time = hours * 100 + minutes;

    printf("%03d\n", result_time);

    return 0;
}
