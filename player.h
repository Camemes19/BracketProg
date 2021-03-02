#ifndef PLAYER_CLASS
#define PLAYER_CLASS

#include <string>

class PLAYER_CLASS
{
private:
  int seed;
  std::string tag;
  std::string name;
  int wins;
  int losses;
public:
  int getSeed(void);
  std::string getTag(void);
  std::string getName(void);
  int getWins(void);
  int getLosses(void);
  void setSeed(int newSeed);
  void setTag(std::string newTag);
  void setName(std::string newName);
  void setWins(int newWins);
  void setLosses(int newLosses);


};


#endif
