#include "stdio.h"
#include "string.h"

int main(){
    char word[1000];
    scanf("%s", word);
    char previousLeter = word[0];
    for (int i=0; i<sizeof(word); i++){
        if (word[i] == 'C'){
            previousLeter = word[i];
        }
    }
    return 0;
}
