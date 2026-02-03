#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

class HitGame {
private:
    int teamSize;
    int yourHits;
    int enemyHits;

public:
    HitGame() {
        srand(time(0));
        teamSize = rand() % 4 + 2;
        yourHits = 0;
        enemyHits = 0;
    }

    void playGame() {
        cout << "Total players in your team: " << teamSize << endl;

        for (int i = 0; i < teamSize; i++) {
            int number1 = rand() % 3 + 1;
            int number2 = rand() % 3 + 1;

            cout << "Round " << i + 1 << ":\n";
            cout << "Number1: " << number1 << endl;
            cout << "Number2: " << number2 << endl;

            if (number1 == number2) {
                cout << "\nEnemy got hit by your team!\n";
                yourHits++;
            } else {
                cout << "\nYou got hit by the enemy team!\n";
                enemyHits++;
            }

            cout << endl;
        }

        cout << "Game Over! ";
        if (yourHits > enemyHits)
            cout << "You won\n";
        else if (yourHits < enemyHits)
            cout << "You lost\n";
        else
            cout << "It's a draw\n";
    }
};

int main() {
    HitGame game;
    game.playGame();

    return 0;
}
