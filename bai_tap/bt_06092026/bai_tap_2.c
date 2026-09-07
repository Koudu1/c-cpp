#include <stdio.h>

int main()
{
    int hours, minutes, seconds;
    printf("Hay nhap so gio: ");
    scanf("%d", &hours);
    printf("Hay nhap so phut: ");
    scanf("%d", &minutes);

    seconds = (hours * 60 + minutes) * 60;
    printf("So luong giay la: %d", seconds);

    return 0;
}
