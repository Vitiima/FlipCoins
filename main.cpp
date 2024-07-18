#include <iostream>
#include "flipcoin.h"
using namespace std;

int main() {
        flipcoin coin;
    cout<< "do want play many times?"<<endl;
    cin >>coin.plays;
        for (int i; i < coin.plays; i++) {
            coin.FlipCoin();
        }
    coin.GetHeads();
    coin.GetTails();
    coin.playagain();
}
