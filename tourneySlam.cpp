#include "tourneySlam.h"

void runMenu()
{
  int menuSelect = 0;
  std::string firstName;
  std::string lastName;
  std::string gameTag;
  int seed = 0;
  std::string email;
  std::string discordTag;
  int phoneNumber = 0;


  std::cout << "Tourney Slam v.1" << std::endl;
  std::cout << "1. Add player" << std::endl;
  std::cout << "2. Read player data from file" << std::endl;
  std::cout << "3. Begin bracket" << std::endl;
  std::cout << "4. Print results" << std::endl;
  std::cout << "5. Exit and save bracket" << std::endl;
  std::cin >> menuSelect;

  switch (menuSelect) {
    case 1: std::cout << "Insert player's full first name" << std::endl;
      std::cin >> firstName;

      std::cout << "Insert player's full last name" << std::endl;
        std::cin >> lastName;

      std::cout << "Insert player's gametag" << std::endl;
        std::cin >> gameTag;

      std::cout << "What is the player's seeding for this bracket?" << std::endl;
      std::cout << "If left empty, the player will simply be seeded by when they registered" << std::endl;
        std::cin >> seed;
      while(email == NULL && phoneNumber = 0 && discordTag == NULL)
      {
        std::cout << "Enter the player's email if they have one.(optional)" << std::endl;
          std::cin >> email;

        std::cout << "Enter the player's Discord tag if they have one(if an email and/or a phone number is provided, this is optional)" << std::endl;
          std::cin >> discordTag;

        std::cout << "Enter the player's phone number if they have one(if an email and/or a Discord tag is provided, this is optional)" << std::endl;
          std::cin >> phoneNumber;
        if(email == NULL && phoneNumber = 0 && discordTag == NULL)
        {
          std::cout << "Some form of contact information must be provided, please enter either an email, a Discord tag, or a phone number" << std::endl;
        }
      }

      //enter data into a new player object and insert into the list

      break;
    case 2: /* Read player data in from a preexisting file, */
      break;
    case 3: /* run bracket process for bracket object */
      break;
    case 4: /* print standings for final bracket*/
      break;
    case 5: /* saves the results of the bracket and any relevant data in a file */
      break;
    default: cout << "Invalid option, please input a valid menu process" << endl;
      break;
  }
}
int addPlayer();
void saveBracket(fstream* outfile);
void savePlayerData(fstream* outfile);
void printBracket();
int runBracket(Player* playerTree);
