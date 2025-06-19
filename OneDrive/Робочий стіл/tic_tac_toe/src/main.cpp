#include "tictactoe.hpp"
#include <iostream>

int main() {
    int users_chose;
    bool user1 = false;
    bool user2 = false;

    while (true) {
        std::cout << "KRESTIKI-NULIKI\nsettings";
        std::cout << "3x3 - 1\n";
        std::cout << "4x4 - 2\n";
        std::cout << "5x5 - 3\n";
        std::cout << "exit - 4\n";
        std::cin >> users_chose;

        if (users_chose == 4) {
            std::cout << "game over\nend";
            break;
        }

        switch (users_chose) {
        case 1:
            std::cout << "player 1 (X) name is: ";
            std::cin >> name_player1;
            std::cout << "player 2 (O) name is: ";
            std::cin >> name_player2;

            for (int i = 0; i < 9; ++i) {
                clean_board();
                priklad1();
                board1();
                if (i % 2 == 0) {
                    std::cout << name_player1 << ": ";
                    int move = move1();
                    h1[move] = 'X';
                    if (peremoga1('X')) {
                        user1 = true;
                        break;
                    }
                }
                else {
                    std::cout << name_player2 << ": ";
                    int move = move1();
                    h1[move] = 'O';
                    if (peremoga1('O')) {
                        user2 = true;
                        break;
                    }
                }
            }
            break;

        case 2:
            std::cout << "player 1 (X) name is: ";
            std::cin >> name_player1;
            std::cout << "player 2 (O) name is: ";
            std::cin >> name_player2;

            for (int i = 0; i < 16; ++i) {
                clean_board();
                priklad2();
                board2();
                if (i % 2 == 0) {
                    std::cout << name_player1 << ": ";
                    int move = move2();
                    h2[move] = 'X';
                    if (peremoga2('X')) {
                        user1 = true;
                        break;
                    }
                }
                else {
                    std::cout << name_player2 << ": ";
                    int move = move2();
                    h2[move] = 'O';
                    if (peremoga2('O')) {
                        user2 = true;
                        break;
                    }
                }
            }
            break;

        case 3:
            std::cout << "player 1 (X) name is: ";
            std::cin >> name_player1;
            std::cout << "player 2 (O) name is: ";
            std::cin >> name_player2;

            for (int i = 0; i < 25; ++i) {
                clean_board();
                priklad3();
                board3();
                if (i % 2 == 0) {
                    std::cout << name_player1 << ": ";
                    int move = move3();
                    h3[move] = 'X';
                    if (peremoga3('X')) {
                        user1 = true;
                        break;
                    }
                }
                else {
                    std::cout << name_player2 << ": ";
                    int move = move3();
                    h3[move] = 'O';
                    if (peremoga3('O')) {
                        user2 = true;
                        break;
                    }
                }
            }
            break;

        default:
            std::cout << "error, try again\n";
            break;
        }

        if (users_chose == 1) board1();
        if (users_chose == 2) board2();
        if (users_chose == 3) board3();

        if (user1) {
            std::cout << name_player1 << " wins" << std::endl;
        }
        else if (user2) {
            std::cout << name_player2 << " wins" << std::endl;
        }
        else {
            std::cout << "draw" << std::endl;
        }

        user1 = false;
        user2 = false;
    }

    return 0;
}
