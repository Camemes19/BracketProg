#ifndef BRACKET
#define BRACKET

#include "player.h"

class BracketClass
{
  private:
    BracketNode* winner;
  public:
    BracketNode* getHead();
    void setHead(BracketNode** newMatch);
    int insert(Player** newPlayer);
    int delete(std::string playerTag);
    int updateMatchResults(BracketNode** newMatch, int MatchNum);
    //getMatchResults??

};

#endif
