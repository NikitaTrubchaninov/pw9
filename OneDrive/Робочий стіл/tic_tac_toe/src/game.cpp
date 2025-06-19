#include "game.hpp"
#include "board.hpp"
#include <iostream>

std::string name_player1, name_player2;

bool peremoga1(char nn) {
    return (h1[1] == nn && h1[2] == nn && h1[3] == nn) ||
           (h1[4] == nn && h1[5] == nn && h1[6] == nn) ||
           (h1[7] == nn && h1[8] == nn && h1[9] == nn) ||
           (h1[1] == nn && h1[4] == nn && h1[7] == nn) ||
           (h1[2] == nn && h1[5] == nn && h1[8] == nn) ||
           (h1[3] == nn && h1[6] == nn && h1[9] == nn) ||
           (h1[1] == nn && h1[5] == nn && h1[9] == nn) ||
           (h1[7] == nn && h1[5] == nn && h1[3] == nn);
}

bool peremoga2(char nn) {
    return (h2[1] == nn && h2[2] == nn && h2[3] == nn && h2[4] == nn) ||
           (h2[5] == nn && h2[6] == nn && h2[7] == nn && h2[8] == nn) ||
           (h2[9] == nn && h2[10] == nn && h2[11] == nn && h2[12] == nn) ||
           (h2[13] == nn && h2[14] == nn && h2[15] == nn && h2[16] == nn) ||
           (h2[1] == nn && h2[5] == nn && h2[9] == nn && h2[13] == nn) ||
           (h2[2] == nn && h2[6] == nn && h2[10] == nn && h2[14] == nn) ||
           (h2[3] == nn && h2[7] == nn && h2[11] == nn && h2[15] == nn) ||
           (h2[4] == nn && h2[8] == nn && h2[12] == nn && h2[16] == nn) ||
           (h2[1] == nn && h2[6] == nn && h2[11] == nn && h2[16] == nn) ||
           (h2[4] == nn && h2[7] == nn && h2[10] == nn && h2[13] == nn);
}

bool peremoga3(char nn) {
    return (h3[1] == nn && h3[2] == nn && h3[3] == nn && h3[4] == nn && h3[5] == nn) ||
           (h3[6] == nn && h3[7] == nn && h3[8] == nn && h3[9] == nn && h3[10] == nn) ||
           (h3[11] == nn && h3[12] == nn && h3[13] == nn && h3[14] == nn && h3[15] == nn) ||
           (h3[16] == nn && h3[17] == nn && h3[18] == nn && h3[19] == nn && h3[20] == nn) ||
           (h3[21] == nn && h3[22] == nn && h3[23] == nn && h3[24] == nn && h3[25] == nn) ||
           (h3[1] == nn && h3[6] == nn && h3[11] == nn && h3[16] == nn && h3[21] == nn) ||
           (h3[2] == nn && h3[7] == nn && h3[12] == nn && h3[17] == nn && h3[22] == nn) ||
           (h3[3] == nn && h3[8] == nn && h3[13] == nn && h3[18] == nn && h3[23] == nn) ||
           (h3[4] == nn && h3[9] == nn && h3[14] == nn && h3[19] == nn && h3[24] == nn) ||
           (h3[5] == nn && h3[10] == nn && h3[15] == nn && h3[20] == nn && h3[25] == nn) ||
           (h3[1] == nn && h3[7] == nn && h3[13] == nn && h3[19] == nn && h3[25] == nn) ||
           (h3[5] == nn && h3[9] == nn && h3[13] == nn && h3[17] == nn && h3[21] == nn);
}