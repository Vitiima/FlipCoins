#ifndef FLIPCOIN_H
#define FLIPCOIN_H

class flipcoin {
public:
    flipcoin();
    void FlipCoin();
    void GetHeads();
    void GetTails();
    void playagain();
    int plays;
private:
    int heads;
    int tails;
    int Gennum();
};

#endif //FLIPCOIN_H
