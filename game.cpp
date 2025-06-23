#include <bits/stdc++.h>

using namespace std;


// vector<vector<char>> Board(3, vector<char>(3,'#'));
int rowSize = 3;
// void printBoard() {


//     cout << "|||||----The Current Board----||||"<< endl;
//     for(int i=0; i<Board.size(); i++) {

//         cout << "      ";
//         for(int j=0; j<Board[i].size(); j++) {

//             if(j != 2)
//                 cout << Board[i][j] << "  |  ";
//             else
//                 cout << Board[i][j];
//         }
//         cout << endl;
//         if( i != 2)
//             cout << "      --------------" << endl;

//     }
// }

// void TwoPersonTicTacToe() {

//     // vector<int> Board(10,-1);   // Board size is actually 9 and default valie is -1


//     bool win = false;

//     int min = 1;
//     int max = 2;

//     srand(time(0));                                   // Seed the random generator
//     int randomNumber = rand() % (max-min+1) + min;     // Generate a random integer

//     // cout << "Random number: " << randomNumber << endl;

//     char player1, player2;
//     if(randomNumber == 1){
//         player1 = 'X';
//         player2 = 'O';
//         cout << "Player 1 is X" << endl;
//         cout << "Player 2 is O" << endl;
//     }
//     else if(randomNumber == 2){
//         player1 = 'O';
//         player2 = 'X';
//         cout << "Player 1 is O" << endl;
//         cout << "Player 2 is X" << endl;
//     }


//     cout << "Player 1 will go first!"  << endl;
//     int turn = 1;

//     // turn is 1 player 1 will go
//     // turn is 2 player 2 will go

//     int choice;
//     do {

//         // printBoard();

//         if(turn == 1) {
//             cout << "Player 1 turn-----" << endl;
//             // turn = 2;
//         }
//         else if(turn == 2) {
//             cout << "Player 2 turn-----" << endl;
//             // turn = 1;
//         }
        
    
//         cout << "Enter block number to mark:  ";
//         cin >> choice;

//         int row = (choice-1) / rowSize;
//         int col = (choice-1) % rowSize;
//         cout << "Marked block " << choice << endl;

//         if(turn == 1) Board[row][col] = player1;
//         else Board[row][col] = player2;

//         printBoard();


//         // winning condition
//         if(Board[0][0] == Board[0][1] && Board[0][1] == Board[0][2] && Board[1][0] != '#') {
//             char p = Board[0][0];
//             if(p == player1) {
//                 cout << player1 << " won" << endl;
//             }
//             else if(p == player2){
//                 cout << player2 << " won" << endl;
//             }
//             win = true;
//         }

//         else if(Board[1][0] == Board[1][1] && Board[1][1] == Board[1][2]  && Board[1][0] != '#'){
//             char p = Board[1][0];
//             if(p == player1) {
//                 cout << player1 << " won" << endl;
//             }
//             else if(p == player2){
//                 cout << player2 << " won" << endl;
//             }
//             win = true;
//         }

//         else if(Board[2][0] == Board[2][1] && Board[2][1] == Board[2][2] && Board[2][0] != '#'){
//             char p = Board[2][0];
//             if(p == player1) {
//                 cout << player1 << " won" << endl;
//             }
//             else if(p == player2){
//                 cout << player2 << " won" << endl;
//             }
//             win = true;
//         }

//         else if(Board[0][0] == Board[1][0] && Board[1][0] == Board[2][0] && Board[0][0] != '#'){
//             char p = Board[2][0];
//             if(p == player1) {
//                 cout << player1 << " won" << endl;
//             }
//             else if(p == player2){
//                 cout << player2 << " won" << endl;
//             }
//             win = true;
//         }

//         else if(Board[0][1] == Board[1][1] && Board[1][1] == Board[2][1] && Board[0][1] != '#'){
//             char p = Board[2][1];
//             if(p == player1) {
//                 cout << player1 << " won" << endl;
//             }
//             else if(p == player2){
//                 cout << player2 << " won" << endl;
//             }
//             win = true;
//         }


//         else if(Board[0][2] == Board[1][2] && Board[1][2] == Board[2][2] && Board[0][2] != '#'){
//             char p = Board[2][2];
//             if(p == player1) {
//                 cout << player1 << " won" << endl;
//             }
//             else if(p == player2){
//                 cout << player2 << " won" << endl;
//             }
//             win = true;
//         }

//         else if(Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[0][0] != '#'){
//             char p = Board[2][2];
//             if(p == player1) {
//                 cout << player1 << " won" << endl;
//             }
//             else if(p == player2){
//                 cout << player2 << " won" << endl;
//             }
//             win = true;
//         }

//         else if(Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[0][2] != '#'){
//             char p = Board[2][0];
//             if(p == player1) {
//                 cout << player1 << " won" << endl;
//             }
//             else if(p == player2){
//                 cout << player2 << " won" << endl;
//             }
//             win = true;
//         }

//         turn = turn == 1 ? 2 : 1;

//     }while(win != true);

// }












// Real task to build (Person to Computer) tic tac toe
// bhai ghanta tough hai ye , kuch bhi nhi hai

vector<vector<char>> Board(3, vector<char>(3,'#'));

void printBoard() {


    cout << "|||||----The Current Board----||||"<< endl;
    for(int i=0; i<Board.size(); i++) {

        cout << "      ";
        for(int j=0; j<Board[i].size(); j++) {

            if(j != 2)
                cout << Board[i][j] << "  |  ";
            else
                cout << Board[i][j];
        }
        cout << endl;
        if( i != 2)
            cout << "      --------------" << endl;

    }
}



char p = 'X';
char c = 'O';

void getPlayerMove() {

    cout << "Now , Your Move " << endl << "Please choose a Block to Mark: " ;
    int block;
    cin >> block;
    
    while(block < 1 || block > 9) {
        cout << "Please, Enter a valid block to Mark: ";
        cin >> block;
    }

    int row = (block-1) / 3;
    int col = (block-1) % 3;

    // Check for occupied cell
    while (Board[row][col] != '#') {
        cout << "Block is already occupied, please choose another: ";
        cin >> block;

        // Recalculate row & col after new input
        while (block < 1 || block > 9) {
            cout << "Please enter a valid block (1-9): ";
            cin >> block;
        }

        row = (block - 1) / 3;
        col = (block - 1) % 3;
    }


    Board[row][col] = p;
}


vector<vector<int>> winningCombos = {
    {},        // 0
    {123, 147, 159},        // 1 block
    {123, 258},              // 2 block
    {123, 357, 369},           // 3 block
    {456, 147 },           // 4 block
    {456, 159, 357, 258},     // 5 block
    {456, 369},              // 6 block
    {789, 357, 147},         // 7 block
    {789, 258},              // 8 block
    {789, 159, 369}          // 9 block
};


bool canWin(int row, int col) {

    Board[row][col] = 'O';

    int blockNumber = row * 3 + col + 1;        // block number
    int size = winningCombos[blockNumber].size();       // no of combos to check
    
    for(int i=0; i<size; i++) {
        
        int combo = winningCombos[blockNumber][i];
        int flag = 1;

        while(combo > 0) {
            int cell = combo % 10;

            // corresponding row and column to cell number
            int r = (cell-1) / 3;
            int c = (cell-1) % 3;

            if(Board[r][c] != 'O'){
                flag = 0;
                break;
            }
            combo = combo / 10;
        }
        if(flag == 1){
            // we found a combo through which computer is winning
            Board[row][col] = '#';
            return true;
        }
    }

    Board[row][col] = '#';
    return false;
}

int winBlock = -1;

bool canWinNow() {
    // should give the block number in return , which will be the ultimate move of computer 

    for(int row=0; row<3; row++) {

        for(int col=0; col<3; col++) {
            // check putting in every block if computer can win 
            if(Board[row][col] == 'X' || Board[row][col] == 'O') continue;   // already occupied by player skip that block

            else if(canWin(row, col)){
                // mark that block and end the game and computer wins
                int blockNumber = row * 3 + col + 1;        // 1 to 9
                winBlock = blockNumber;                         // this is the winning move
                return true;
            }
        }
    }
    return false;
}

bool canBlock(int row, int col) {
    Board[row][col] = 'X';

    int blockNumber = row * 3 + col + 1;        // block number
    int size = winningCombos[blockNumber].size();       // no of combos to check
    
    for(int i=0; i<size; i++) {
        
        int combo = winningCombos[blockNumber][i];
        int flag = 1;

        while(combo > 0) {
            int cell = combo % 10;

            // corresponding row and column to cell number
            int r = (cell-1) / 3;
            int c = (cell-1) % 3;

            if(Board[r][c] != 'X'){
                flag = 0;
                break;
            }
            combo = combo / 10;
        }
        if(flag == 1){
            // we found a combo through which computer is winning
            Board[row][col] = '#';          //  revert your simulations
            return true;
        }
    }

    Board[row][col] = '#';     //  revert your simulations
    return false;
}

int blockingBlock = -1;

bool canBlockPlayer() {

    // here we come when we cannot win  now find here if player is winning in its next move  means simulate putting X on every empty cell
    
    for(int row=0; row<3; row++) {

        for(int col=0; col<3; col++) {

            // check putting in every block if computer can win 
            if(Board[row][col] == 'X' || Board[row][col] == 'O') continue;   // already occupied by player or computer then skip that block

            else if(canBlock(row, col)){
                // mark that block and end the game and computer wins
                int blockNumber = row * 3 + col + 1;        // 1 to 9
                blockingBlock = blockNumber;                         // this is the winning move
                return true;
            }
        }
    }
    return false;
}

void makeWinningMove(int block) {

    int row = (block-1) / 3;
    int col = (block-1) % 3;

    Board[row][col] = 'O';
}


void makeBlockingMove(int block) {

    int row = (block-1) / 3;
    int col = (block-1) % 3;

    Board[row][col] = 'O';
}


int cornersAvailable() {

    if(Board[0][0] == '#') {
        return 1;
    }
    else if(Board[0][2] == '#'){
        return 3;
    }
    else if(Board[2][0] == '#') {
        return 7;
    }
    else if(Board[2][2] == '#') {
        return 9;
    }

    return -1;
}

int sideAvailable() {

    if(Board[0][1] == '#') {
        return 2;
    }
    else if(Board[1][0] == '#'){
        return 4;
    }
    else if(Board[1][2] == '#') {
        return 6;
    }
    else if(Board[2][1] == '#') {
        return 8;
    }

    return -1;
}

void makeBestAvailableMove() {

    // find the best available move 

    // 1st priority to mark centre if available 

    if(Board[1][1] == '#') {
        // take the center
        Board[1][1] = 'O';
        return;
    }

    // take the corners
    int corner = cornersAvailable();
    if(corner != -1) {
        int row = (corner-1) / 3;
        int col = (corner-1) % 3;

        Board[row][col] = 'O';
        return;
    }

    // take either side
    int side = sideAvailable();
    if(side != -1){
        int row = (side-1) / 3;
        int col = (side-1) % 3;

        Board[row][col] = 'O';
        return;
    }
}

void getComputerMove() {

    cout << "Computer's turn" << endl;

    if (canWinNow()) {
        makeWinningMove(winBlock);
    }
    else if (canBlockPlayer()) {
        makeBlockingMove(blockingBlock);
    }
    else {
        makeBestAvailableMove();
    }
}


char checkWinner() {
    // Rows
    for (int i = 0; i < 3; i++) {
        if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2])
            return Board[i][0];
    }

    // Columns
    for (int i = 0; i < 3; i++) {
        if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i])
            return Board[0][i];
    }

    // Diagonals
    if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2])
        return Board[0][0];

    if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0])
        return Board[0][2];

    return ' '; // No winner yet
}

bool isDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (Board[i][j] != 'X' && Board[i][j] != 'O')
                return false; // Found empty spot → not a draw
    return true;
}
char winner = ' ';

bool checkWinOrDraw() {

    char result = checkWinner();

    if (result == 'X' || result == 'O') {
        winner = result;
        return true; // Someone has won
    }

    else if (isDraw()) {
        winner = 'D'; // D for Draw
        return true;  // Game over
    }

    return false; // Game should continue
}

void switchTurn(char &turn) {

    turn = turn == 'P' ? 'C' : 'P';
}


void PlayerToComputerTicTacToe() {

    // you have to build brain for computer so that it can analyse the possibility of the user of winning and according to that the computer will choose the best move suitable at that time


    char firstPlayer;
    cout << "Who will go first? (P for Player, C for Computer): ";
    cin >> firstPlayer;
    firstPlayer = toupper(firstPlayer); 

    // validate if the user enters invalid choice
    while (firstPlayer != 'P' && firstPlayer != 'C') {

        cout << "Invalid choice. Please enter P or C: ";
        cin >> firstPlayer;
        firstPlayer = toupper(firstPlayer);
    }

    char turn = (firstPlayer == 'P') ? 'P' : 'C';


    bool gameOver = false;

    while (!gameOver) {

        printBoard();
        if (turn == 'P') {
            getPlayerMove();
        } else {
            getComputerMove();  // NEW FUNCTION
        }

        // Check if game should end
        if(checkWinOrDraw()){ 
            if(winner == 'X'){
                printBoard();
                cout << "Congratulations, You Won!!";
                gameOver = true;
            }

            else if(winner == 'O') {
                printBoard();
                cout << "Oh!!, You Lost it";
                gameOver = true;
            }
            else if (winner == 'D') {
                printBoard();
                cout << "It's a draw!" << endl;
                gameOver = true;
            }
        }      
        switchTurn(turn);      // Change turn
    }


}


int main() {

    // printBoard();
    // int st;
    // cout << "enter 0 to start game:  ";
    // cin >> st;

    // if(st == 0)
    //     TwoPersonTicTacToe();

    PlayerToComputerTicTacToe();

    Board = vector<vector<char>>(3, vector<char>(3, '#'));
    return 0;
}




























// NameYourThings – Creative Name Generator
// Tech Stack: React.js, Vite, React Router, JavaScript, CSS, Vercel

// Built an interactive name generation web app to streamline project brainstorming. Enabled users to generate creative names and shortlist favorites in a cart-like system for later use. Integrated React Router for seamless navigation across Home, Generator, and Cart views. Utilized Vite for optimized build speed and development flow. Enhanced user engagement with a clean, responsive UI, improving ideation efficiency by 60%. Achieved real-time interactivity with minimal latency and implemented scalable component architecture to support future feature expansion.

// WeatherNow – Real-Time Weather App
// Tech Stack: React.js, OpenWeather API, Fetch API, JavaScript, CSS, Vite, Vercel

// Developed a responsive weather forecasting app providing real-time climate updates based on user-entered locations. Integrated OpenWeather API to fetch accurate data including temperature, humidity, wind speed, and conditions. Utilized the Fetch API for efficient asynchronous requests with proper loading and error handling. Built a clean, mobile-friendly interface using React and CSS, improving accessibility and user engagement. Implemented dynamic UI elements and weather icons to enhance clarity, increasing data usability by 70%.