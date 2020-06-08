#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i = 0;
    int j;
    int used[10];
    int current;
    int continue_next;
    srand(time(NULL));
    while(i < 10) {
        current  =  rand() % 10 + 1;
        continue_next = 0;
        for(j = 0; j < i; j++) {
            if( current == used[j]) {
                continue_next = 1;
                break;
            }
        }
        if(continue_next == 0) {
            used[i] = current;
            printf("\n%d", current);
            i++;
        }
    }

    return 0;
}