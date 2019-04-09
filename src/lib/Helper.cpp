#include "Helper.h"
/**
 * Count the amount of set bits in a given number
 * @param x the number to count bits in
 * @return amount of bits counted (Should be <=8)
 */
char Helper::countBits(char x) {
    char count = 0;
    for(char bytemask = 1; bytemask; bytemask <<= 1) {
        if(bytemask & x) count++;
    }
    return count;
}

/**
 * Calculate the Manhatten distance between two points
 * @param x1 x-Cord of first point
 * @param y1 y-Cord of first point
 * @param x2 x-Cord of second point
 * @param y2 y-Cord of second point
 * @return The distance between these points in moves
 */
int Helper::manhattanDistance(int x1, int y1, int x2, int y2) {
    return static_cast<int>(abs(x1 - x2) + abs(y1 - y2));
}

std::string Helper::printString(char x, char numberOfBits) {
    char buffer[numberOfBits];
    for(char i = 0; i < numberOfBits; i++) {
        buffer[i] = ((1 << i) & x)? '1': '0';
    }
    return std::string(buffer, static_cast<unsigned int>(numberOfBits));
}
