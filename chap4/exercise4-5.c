#include <stdio.h>

int main(void) {

    float download_speed;
    float file_size;

    printf("please enter download speed(Mb/s) and file size(MB):");
    scanf("%f,%f", &download_speed, &file_size);
    printf("At %f megabits per second, a file of %f megabytes downloads in %f seconds",
           download_speed, file_size, file_size / download_speed);

}