#include <stdio.h>

char board[3][3];
char currentPlayer;

void initializeBoard() {
	int i,j;
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
	int i,j;
    printf("\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

int checkWin() {
	int i;
    for ( i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return 1;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return 1;
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return 1;
    }
    return 0;
}

int checkDraw() {
	int i,j;
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

void changePlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    int row, col, gameOver = 0;
    currentPlayer = 'X';
    initializeBoard();
    
    while (!gameOver) {
        printBoard();
        printf("Player %c, enter your move (row and column): ", currentPlayer);
        scanf("%d %d", &row, &col);
        
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            printf("Invalid move! Try again.\n");
            continue;
        }
        
        board[row - 1][col - 1] = currentPlayer;
        
        if (checkWin()) {
            printBoard();
            printf("Player %c wins!\n", currentPlayer);
            gameOver = 1;
        } else if (checkDraw()) {
            printBoard();
            printf("It's a draw!\n");
            gameOver = 1;
        } else {
            changePlayer();
        }
    }
    
    return 0;
}

