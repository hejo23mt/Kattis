#include "stdio.h"
#include "string.h"

int main(){
    char phrase[20];
    int times = 0;

    scanf("%s %d", phrase, &times);
    for (int i=0; i<times; i++){
        printf("%s", phrase);
    }
    return 0;
}
