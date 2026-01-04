#include "stdio.h"

int main(){
    int slices = 0;
    int persons = 0;
    
    scanf("%d %d", &slices, &persons);
    printf("%d", (slices%persons));
    return 0;
}
