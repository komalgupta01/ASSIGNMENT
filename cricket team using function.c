#include <stdio.h>
int calculateTotalRuns(int numPlayers) {
    int totalRuns = 0;

    for (int i = 0; i < numPlayers; ++i) {
        char playerName[50];
        int runs;
        printf("Enter player name and runs scored ");
        scanf("%s %d", playerName, &runs);
        totalRuns += runs;
    }

    return totalRuns;
}

int main() {
    int numPlayers;
    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);
    if (numPlayers <= 0) {
        printf("Please enter a valid number of players.\n");
        return 1; 
    }
    int totalRuns = calculateTotalRuns(numPlayers);
    printf("Total runs scored by the cricket team: %d\n", totalRuns);

    return 0;
}
