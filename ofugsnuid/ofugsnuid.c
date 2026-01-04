#include "stdio.h"

int main(){
    int numberOfInt = 0;
    scanf("%d", &numberOfInt);
    int input[numberOfInt];
    for (int i=0; i<numberOfInt; i++){
        scanf("%d",&input[i]);
    }
    for (int i=(numberOfInt-1); i>=0; i--){
        printf("%d\n", input[i]);
    }
    return 0;
}
