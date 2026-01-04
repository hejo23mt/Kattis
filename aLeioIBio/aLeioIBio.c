#include "stdio.h"

int main(){
    int driveTime = 0;
    int driveTimeCinema = 0;
    int startTime = 0;
    scanf("%d %d %d",&driveTime, &driveTimeCinema, &startTime);
    int totalTime = startTime-(driveTime+driveTimeCinema);
    printf("%d",totalTime);
    return 0;
}
