#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int secretnum = rand() % 100 + 1;
    int guess;
    cout << "Welcome to the Number Guessing Game!";
    cout << "\nThe computer has chosen the no..Now it's your turn to guess it.";
    do{
        cout << "\nEnter your guess: ";
        cin >> guess;
       if (guess < secretnum){
            cout << "\nToo low! Try a higher number.";
        } else if (guess > secretnum) {
            cout << "\nToo high! Try a lower number.";
        } else {
            cout << "\nCongratulations! You guessed the correct number: " << secretnum;
        }
    } while (guess != secretnum);

    return 0;
}
