#include <stdio.h>

int main() {
    int p1, p2;

    scanf("%d %d", &p1, &p2);

    if (p1 < 1 || p1 > 3 || p2 < 1 || p2 > 3) {
        printf("Invalid Input");
    }
    else {
        switch (p1) {
            case 1:  // Rock
                if (p2 == 1)
                    printf("Draw");
                else if (p2 == 2)
                    printf("Player 2 Wins");
                else
                    printf("Player 1 Wins");
                break;

            case 2:  // Paper
                if (p2 == 2)
                    printf("Draw");
                else if (p2 == 3)
                    printf("Player 2 Wins");
                else
                    printf("Player 1 Wins");
                break;

            case 3:  // Scissors
                if (p2 == 3)
                    printf("Draw");
                else if (p2 == 1)
                    printf("Player 2 Wins");
                else
                    printf("Player 1 Wins");
                break;
        }
    }

    return 0;
}