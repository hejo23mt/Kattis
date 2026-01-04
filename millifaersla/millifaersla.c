#include "stdio.h"

int main(){
    int monnei = 0;
    int fjee = 0;
    int dolladollabilljoll = 0;

    scanf("%d %d %d", &monnei, &fjee, &dolladollabilljoll);
    if (monnei <= fjee && monnei <= dolladollabilljoll){
        printf("Monnei");
    } else if (fjee <= monnei && fjee <= dolladollabilljoll){
        printf("Fjee");
    } else if (dolladollabilljoll <= monnei && dolladollabilljoll <= fjee){
        printf("Dolladollabilljoll");
    }
    return 0;
}
