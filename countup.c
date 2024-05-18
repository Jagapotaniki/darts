#include <stdio.h>

void drowLine();

int main(void) {
    int start, round, point, score;
    float stats;

    while(1) {
        drowLine();
        printf( "CountUp\n" );
        drowLine();
        printf( "1:Start, 0:Exit\n" );
        scanf( "%d", &start );

        if( start == 1 ) {

            point = 0;
            stats = 0;

            drowLine();
            printf( "Round | Scored | To Go\n" );

            for( round = 1; round <= 8; round++ ) {
                printf("Round %d | %d | ", round, point);
                scanf("%d", &score);
                point += score;

                if( round == 8 ) {
                    drowLine();
                    printf( "Finish!!!\n" );
                    printf("Score : %d\n", point );
                    drowLine();
                }
            }
        } else if( start == 0 ){
            printf("System Shutdown\n");
            break;
        } else {
            printf( "Invalid Number\n");
        }
    }
}

void drowLine() {
    printf("--------------------------------\n");
}