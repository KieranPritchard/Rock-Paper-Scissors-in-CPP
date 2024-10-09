#include <iostream>
#include <cstdlib>
using namespace std;

// Gets the move the computer chooses based on a random number

char getcomputermove(){
    int move = rand() % 3;

    if(move == 1){
        return 'r';
    }
    else if(move == 2){
        return 'p';
    }
    else{
        return 's';
    }
}

// Gets the result based on user and computers choices

int getresults(char computerchoice, char userchoice){
    if(computerchoice == userchoice){
        return 1;
    }
    else if((computerchoice == 'r' && userchoice == 's' || computerchoice == 'p' && userchoice == 'r' || computerchoice == 's' && userchoice == 'p')){
        return 2;
    }
    else{
        return 3;
    }    
}

// Leader board display that displays after each iteration

void leaderboard(int computerscore, int userscore){
    cout << "----------------------------------------";
    cout << "User Score: " << userscore;
    cout << "Computer Score: " << computerscore;
    cout << "----------------------------------------";
}

int main(){

    // Scoring varibles and user choice, for keeping score and storing user score for conditional statment.
    // Directly below this is the welcome message.
    
    int computerscore = 0;
    int userscore = 0;
    char userchoice;

    cout << "----------------------------------------";
    cout << "Welcome to Rock, Paper, Scissors in C++.";
    cout << "----------------------------------------";
    
    while(true){
        
        // Conditional statements to determine who wins or not.

        cout << "Please input your choice. 'r' for rock, 'p' for paper, and 's' for scissors:";
        cin >> userchoice;

        if (userchoice == 'r' || userchoice == 'p' || userchoice == 's'){
            char computerchoice = getcomputermove();
            int result = getresults(computerchoice, userchoice);

            if(result == 1){
                cout << "It's a draw!";
            }
            else if(result == 2){
                computerscore += 1;
                cout << "You lose!";
            }
            else{
                userscore += 1;
                cout << "You win!";
            }
            leaderboard(computerscore, userscore);
        }
        else if (userchoice == 'q'){
            break;
        }
        else{
            cout << "Invalid input. Please try again.";
        }
    }

    cout << "Final Scores:";
    leaderboard(computerscore, userscore);
    return 0;
}
