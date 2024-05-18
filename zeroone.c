#include <stdio.h>

int main(void) {

    int gamemode, point, maxround, score;

    //01のポイントとラウンドの設定
    int pointsettings[3] = { 501, 701, 901 };
    int roundsettings[3] = { 15, 20, 20 };

    while(1) {
        printf( "1:501, 2:701, 3:901, 0:Exit\n" );
        scanf( "%d", &gamemode );

        if( gamemode == 0 ) {
            printf("System Shutdown\n");
            break;
        }

        point = pointsettings[gamemode - 1];
        maxround = roundsettings[gamemode - 1];

        printf("----------------------------------------\n");
        printf("Round | Scored | To Go \n");
        for( int round = 1; round <= maxround; round++ ) {
            printf("Round %d | %d | ", round, point);
            scanf("%d", &score);
            point -= score;

            if( point < 0 ) {
                printf("Bust\n");
                point += score;
            }
            if( point == 0 ) {
                printf("Finish!!!\n");
                break;
            } 
            if( round == maxround ) {
                printf("--------------------\n");
                printf("Round Over\n");
                printf("Score : %d\n", point );
                printf("--------------------\n");
            }
        }
    }

}