// A program that uses 2 do while loops to play a game (a very silly game)
#include <iostream>
# include <string>
using namespace std;

void playGame(float & winnings) // winnings passed by reference
{
    // Constants - change these to tweak the game
    const int TRIES_ALLOWED = 3;
    const int LOWER = 1;
    const int UPPER = 10;
    const float PRIZE = 1000;

    // Variables
    int input;
    int t = 0;

    do {
        cout << "Enter a value from " << LOWER << "-" << UPPER << " to play" << endl;
        cin >> input;

        t++; // increment the try counter
    } while (input < LOWER || input > UPPER && t < TRIES_ALLOWED); // keep looping until user enters a valid value or runs out of tries

    // If a valid input
    if(input >= LOWER && input <= UPPER)
    {
        cout << "Yay you followed the instructions and typed " << input << " on try no. " << t << endl;

        // Calculate the payout
        float payout = PRIZE - (PRIZE * float(t-1)/float(TRIES_ALLOWED));

        // Update total winnings
        winnings += payout;

        // Message player with winnings/earnings
        cout << "You win $ " << payout << endl;
        cout << "Total winnings so far is $" << winnings << endl;
    }
    else
    {
        // Message player that he ran out of tries
        cout << "You ran out of tries, you win $ 0"<< endl;
    }
}

int main() {

    // Variables
    char cont;
    float winnings = 0.00;

  do{
      // Start the game - runs at least once
      playGame(winnings);

      cout << "Would you like to play again? Type Y or N" << endl;
      cin >> cont;

  } while(cont == 'Y' || cont == 'y'); // loop if user enters y or Y ie play again

  // User decided to stop playing, so show total earnings
  cout << "You earned $" << winnings << endl;
  cout << "---------------END-----------------" << endl;
}

