#include "stdio.h"

int main(){
    int times = 0;
    
    char *all[1000][20];
    scanf("%d", &times);
    for (int i=0; i<times; i++){
        scanf("%s", &all[i]);
    }
    for (int i=0; i<times; i++){
        printf("Takk %s\n",all[i]);
    }
    return 0;
}