#include <iostream>
#include <fstream>
using namespace std;
#include "Field.h"
#include "Bot.h"
#include "MNTS.h"



int main ()
{
    int size;
    std::cout << "Enter the field size ";
    std::cin >> size;
    Field field(size);

    User player1 = User(TTT_CROSS);
    MNTS player2 = MNTS(TTT_CIRCLE, size);
    int current = 1;
    int x = -1, y = -1;
    while (field.is_playable())
    {
        std::cout << field;
        std::cout << current;
        if(current == 1){
            std::cout << "Player " << player1.get_figure() << " turn: ";
            player1.make_move(field);
        } 
        if (current == 2) {
            std::cout << "Player " << player2.get_figure() << " turn: ";
            player2.search(field);
        }
        if (current == 1){
            current = 2;
        } else {
            current = 1;
        }
    }

    std::cout << field;
    std::string s = std::to_string(field.check_win());
    std::cout << "Winner is Player " << field.check_win() << endl;

    return 0;
}