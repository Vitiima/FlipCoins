#include "flipcoin.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


flipcoin::flipcoin() {
    heads = 0;
    tails = 0;
    plays;
    srand(time(0));
};

int flipcoin::Gennum() {
   return rand() % 2;
}

void flipcoin::playagain() {
    char choice;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y') {
        heads = 0;
        tails = 0;
        cout << "How many times do you want to play? ";
        cin >> plays;
        for (int i = 0; i < plays; i++) {
            FlipCoin();
        }
        GetHeads();
        GetTails();
        playagain();
    }
}


void flipcoin::FlipCoin() {
    int flip = Gennum();
    if (flip == 0) {
        heads++;
        return;
    }
    if (flip == 1) {
        tails++;

        return;
    }
}
void flipcoin::GetHeads() {
    cout <<" Heads: "<< heads << endl;
}
void flipcoin::GetTails() {
    cout <<" Tails "<< tails << endl;
}



