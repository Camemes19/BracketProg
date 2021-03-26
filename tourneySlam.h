#ifndef TOURNEYSLAM
#define TOURNEYSLAM

#include <fstream>
#include "bracket.h"

void runMenu();
int addPlayer();
void saveBracket(fstream* outfile);
void savePlayerData(fstream* outfile);
void printBracket();
int runBracket(Player* playerTree);

#endif
