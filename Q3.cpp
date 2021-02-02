//1171100781 Faretz Emir Imran bin Rizal Imran
//1171101849 Pang Jie Xin 

#include <iostream>
#include <string.h>
using namespace std;



class Board{
public:
    Board(){}
    void setBoard();
    int checkWin();
    char square[17] = {'Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','0','P'};
    
};

void Board::setBoard(){
    cout << "Welcome to Tic Tac Toe." << endl;
    cout << "Player 1 --> X || Player 2 --> O" << endl;
    cout << "A = 1, B = 2, C = 3, D = 4, E = 5, F = 6, G = 7, H = 8, I = 9, J = 10, K = 11, L = 12, M = 13, N = 14, 0 = 15, P = 16." << endl;
    cout << "      |     |     |   " << endl;
    cout << "   " << square[1] << "  |  " << square[2] << "  |  " << square[3] << "  |  " << square[4] << endl;
    cout << "______|_____|_____|______" << endl;
    cout << "      |     |     |   " << endl;
    cout << "   " << square[5] << "  |  " << square[6] << "  |  " << square[7] << "  |  " << square[8] << endl;
    cout << "______|_____|_____|______" << endl;
    cout << "      |     |     |   " << endl;
    cout << "   " << square[9] << "  |  " << square[10] << "  |  " << square[11] << "  |  " << square[12] << endl;
    cout << "______|_____|_____|______" << endl;
    cout << "      |     |     |   " << endl;
    cout << "   " << square[13] << "  |  " << square[14] << "  |  " << square[15] << "  |  " << square[16] << endl;
    cout << "      |     |     |   " << endl;
}

int Board::checkWin(){
    //horizontal check
    if (square[1] == square[2] && square[2] == square[3] && square[3] == square[4])
        return 1;
    else if(square[5] == square[6] && square[6] == square[7] && square[7] == square[8])
        return 1;
    else if(square[9] == square[10] && square[10] == square[11] && square[11] == square[12])
        return 1;
    else if(square[13] == square[14] && square[14] == square[15] && square[15] == square[16])
        return 1;
        //veretical check
    else if(square[1] == square[5] && square[5] == square[9] && square[9] == square[13])
        return 1;
    else if(square[2] == square[6] && square[6] == square[10] && square[10] == square[14])
        return 1;
    else if(square[3] == square[7] && square[7] == square[11] && square[11] == square[15])
        return 1;
    else if(square[4] == square[8] && square[8] == square[12] && square[12] == square[16])
        return 1;
    //left diagonal check
    else if(square[1] == square[6] && square[6] == square[11] && square[11] == square[16])
        return 1;
    //right diagonal check
    else if(square[4] == square[7] && square[7] == square[10] && square[10] == square[13])
        return 1;
    //tie check
    else if (square[1] != 'A' && square[2] != 'B' && square[3] != 'C' && square[4] != 'D' && square[5] != 'E' && square[6] != 'F' 
                && square[7] != 'G' && square[8] != 'H' && square[9] != 'I' && square[10] != 'J' && square[11] != 'K' && square[12] != 'L' && square[13] != 'M'
                && square[14] != 'N' && square[15] != '0' && square[16] != 'P')
        return 0;
    else
    {
        return -1;
    }
    
}

class Player{
private:
    int score;
    string name;
public:
    Player(){}
    Player(int num, string nam){score  = num; name = nam;}
    string showName(){return name;}
    int showScore(){return score;}
    void altName(int player, Player& p1, Player& p2);
};

void Player::altName(int player, Player& p1, Player& p2){
    if (player == 1){
        cout << "Player " << player << ", (" <<  p1.showName() << ") Please enter a number:" << endl;
    }
    else if(player == 2){
        cout << "Player " << player << ", (" <<  p2.showName() << ") Please enter a number:" << endl;
    }
}

int main(){

    string n;
    char mark;
    int player = 1, choice, i;
    
    cout << "Please enter name for Player 1: ";
    cin >> n;
    Player P1(0,n);

    cout << endl;
    cout << "Please enter name for Player 2: ";
    cin >> n;
    Player P2(0,n);
    Player P3;
    
    //cout << "Player 1 name: " << P1.showName() << endl;
    //cout << "Player 2 name: " << P2.showName() << endl;
    Board b1;

    do{

    b1.setBoard();
    player = (player % 2) ? 1:2;
    P3.altName(player, P1, P2);
    cin >> choice;

    mark = (player == 1) ? 'X':'O';
    b1.square[choice] = mark;

    i = b1.checkWin();
    player++;

    }while(i== -1);

    b1.setBoard();
    if(i == 1){
        cout << "Player " << --player << " WINS!!" << endl;
    }
    else{
        cout << "Game is a DRAW." << endl;
    }


    return 0;

}