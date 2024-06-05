/*
Make a 2 player Tic Tac Toe game:
 - Players can type any character and game will prompt for proper input
 - Players cannot overwrite an already used cell
 - Once game ends, program exits
 - Displays a small game board each turn
 - Detects vertical, horizontal, or diagonal wins
 - Game ends after 9 moves
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    //Define players and quadrants
    string p1 = "x", p2 = "o", one = "1", two = "2", three = "3", four = "4";
    string five = "5", six = "6", seven = "7", eight = "8", nine = "9";

    //Variables to track rounds and character placement
    int quadrant, round = 0;

    //Flag to control game loop
    bool play_flag = true;

    cout << "Welcome to Tic Tac Toe!" << endl << endl;

    cout << "Player one is " << p1 << endl;
    cout << "Player two is " << p2 << endl << endl;


    //Outut the board for players providing the quadrant numbers
    cout << "|" << one << "|" << two << "|" << three << "|" << endl;
    cout << "|" << four << "|" << five << "|" << six << "|" << endl;
    cout << "|" << seven << "|" << eight << "|" << nine << "|" << endl;

    //Game loop - check for round count/play flag
    while (play_flag && round < 9) {

        //Player one turn - check again for round count/play flag
        if (play_flag && round < 9) {

            //Flag to track if quadrant has been played in
            bool quad_used = true;

            cout << endl << "Player 1 enter a quadrant number (1-9): ";
            cin >> quadrant;

            //Loop to prompt user for new quadrant if used
            //If available sets quadrant to user's character
            while (quad_used) {
                switch (quadrant) {
                case 1:
                    if (one != p1 && one != p2) {
                        one = p1;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 1 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 2:
                    if (two != p1 && two != p2) {
                        two = p1;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 1 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 3:
                    if (three != p1 && three != p2) {
                        three = p1;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 1 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 4:
                    if (four != p1 && four != p2) {
                        four = p1;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 1 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 5:
                    if (five != p1 && five != p2) {
                        five = p1;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 1 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 6:
                    if (six != p1 && six != p2) {
                        six = p1;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 1 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 7:
                    if (seven != p1 && seven != p2) {
                        seven = p1;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 1 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 8:
                    if (eight != p1 && eight != p2) {
                        eight = p1;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 1 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 9:
                    if (nine != p1 && nine != p2) {
                        nine = p1;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 1 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                default:
                    //Ask for new input if user enter anything aside from num 1-9
                    cin.clear();
                    cin.ignore();
                    cout << endl << "ERROR: Player 1 enter a quadrant number (1-9): ";
                    cin >> quadrant;
                    break;

                }
            }

            //Output updated gameboard
            cout << "|" << one << "|" << two << "|" << three << "|" << endl;
            cout << "|" << four << "|" << five << "|" << six << "|" << endl;
            cout << "|" << seven << "|" << eight << "|" << nine << "|" << endl;

            //Check for winner and update play_flag to stop game loop if won
            if (one == five && one == nine) {
                cout << "Character " << one << " won!" << endl;
                play_flag = false;
            }
            else if (one == four && one == seven) {
                cout << "Character " << one << " won!" << endl;
                play_flag = false;
            }
            else if (two == five && two == eight) {
                cout << "Character " << two << " won!" << endl;
                play_flag = false;
            }
            else if (three == six && three == nine) {
                cout << "Character " << three << " won!" << endl;
                play_flag = false;
            }
            else if (three == five && three == seven) {
                cout << "Character " << three << " won!" << endl;
                play_flag = false;
            }
            else if (one == two && one == three) {
                cout << "Character " << one << " won!" << endl;
                play_flag = false;
            }
            else if (four == five && four == six) {
                cout << "Character " << four << " won!" << endl;
                play_flag = false;
            }
            else if (seven == eight && seven == nine) {
                cout << "Character " << seven << " won!" << endl;
                play_flag = false;
            }
            round++;
        }

        //Player 2 turn - check for round count/play flag
        if (play_flag && round < 9) {

            //Flag to track if quadrant has been played in
            bool quad_used = true;

            cout << endl << "Player 2 enter a quadrant number (1-9): ";
            cin >> quadrant;

            //Loop to prompt user for new quadrant if used
            //If available sets quadrant to user's character
            while (quad_used) {
                switch (quadrant) {
                case 1:
                    if (one != p1 && one != p2) {
                        one = p2;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 2 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 2:
                    if (two != p1 && two != p2) {
                        two = p2;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 2 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 3:
                    if (three != p1 && three != p2) {
                        three = p2;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 2 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 4:
                    if (four != p1 && four != p2) {
                        four = p2;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 2 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 5:
                    if (five != p1 && five != p2) {
                        five = p2;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 2 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 6:
                    if (six != p1 && six != p2) {
                        six = p2;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 2 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 7:
                    if (seven != p1 && seven != p2) {
                        seven = p2;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 2 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 8:
                    if (eight != p1 && eight != p2) {
                        eight = p2;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 2 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                case 9:
                    //Ask for new input if user enter anything aside from num 1-9
                    if (nine != p1 && nine != p2) {
                        nine = p2;
                        quad_used = false;
                    }
                    else {
                        cout << endl << "Player 2 enter an unused quadrant number (1-9): ";
                        cin >> quadrant;
                    }
                    break;
                default:
                    cin.clear();
                    cin.ignore();
                    cout << endl << "ERROR: Player 2 enter a quadrant number (1-9): ";
                    cin >> quadrant;
                    break;
                }
            }
            //Output updated gameboard
            cout << "|" << one << "|" << two << "|" << three << "|" << endl;
            cout << "|" << four << "|" << five << "|" << six << "|" << endl;
            cout << "|" << seven << "|" << eight << "|" << nine << "|" << endl;

            //Check for winner and update play_flag to stop game loop if won
            if (one == five && one == nine) {
                cout << "Character " << one << " won!" << endl;
                play_flag = false;
            }
            else if (one == four && one == seven) {
                cout << "Character " << one << " won!" << endl;
                play_flag = false;
            }
            else if (two == five && two == eight) {
                cout << "Character " << two << " won!" << endl;
                play_flag = false;
            }
            else if (three == six && three == nine) {
                cout << "Character " << three << " won!" << endl;
                play_flag = false;
            }
            else if (three == five && three == seven) {
                cout << "Character " << three << " won!" << endl;
                play_flag = false;
            }
            else if (one == two && one == three) {
                cout << "Character " << one << " won!" << endl;
                play_flag = false;
            }
            else if (four == five && four == six) {
                cout << "Character " << four << " won!" << endl;
                play_flag = false;
            }
            else if (seven == eight && seven == nine) {
                cout << "Character " << seven << " won!" << endl;
                play_flag = false;
            }
            round++;
        }
        //output only if no player wins and board is full
        if (round >= 9) {
            cout << "Game over. There is no winner." << endl;
            play_flag = false;
        }
    }
    return 0;
}