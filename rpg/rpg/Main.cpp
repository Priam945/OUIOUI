#include <iostream>
#include <vector>
#include <string>


using namespace std;

// Clears the screen
void clear() {
    cout << string(50, '\n');
}



void printHorizontalWalls(int length, bool fullRow)
{
    for (int i = 0; i < length; i++)
        (!fullRow) ? cout << "+--  --" : cout << "+------";
    cout << "+" << endl;
}
void printVerticalWalls(int length)
{
    string roomSpace = "      ";

    // Upper part
    for (int i = 0; i < length; i++)
        cout << "|" << roomSpace;
    cout << "|" << endl;

    // Mid part
    for (int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            cout << "|" << roomSpace;
            continue;
        }
        cout << " " << roomSpace;
    }
    cout << "|" << endl;

    // Bottom part
    for (int i = 0; i < length; i++)
        cout << "|" << roomSpace;
    cout << "|" << endl;
}

class Game
{
private:
    bool quit;
    const int LENGTH = 5; // x
    const int WIDTH = 3; // y
public:


    // Strings
    string code; // Game save code
    string name; // Player name
    string etype; // Enemy Type (spider, giant)
    string pclass; // Player class
    string action; // Player ability / action
    // Dungeons
    string status = "arena"; // Status if in Dungeon or just Arena
    int ckills; // Current amount of kills in Dungeon
    int rkills; // Required amount of kills to complete a Dungeon
    // Armor / Weapons
    int bhp = 0; // Bonus hp
    double bphp = 0; // Bonus precantage hp
    double goldb = 0; // Bonus Gold
    int slimychestplate = 0; // Slimy Chestplate (TRUE or FALSE)
    int slimyhelmet = 0; // Slimy Helmet (TRUE or FALSE)
    int oozinglegplates = 0; // Oozing Legplates
    int oozingboots = 0; // Oozing Boots
    string head = "Open"; // Whats on the head
    string chest = "Open"; // Whats on the chest
    string legs = "Open"; // Whats on the legs
    string feet = "Open"; // Whats on the feet
    // Player Variables
    int piclass = 0;
    int level = 1; // Level
    int xp = 0; // Current XP
    int rxp; // Reward XP
    int xpb = 50; // Increases each level, adds to max hp to increase it
    int xpl = 25; // XP Required till next level
    int stre = 5; // Strength
    int inte = 5; // Intelligence
    int dext = 5; // Dexterity
    int skill = 0; // Skillpoint points (used to increase Strength, Intelligence, Dexterity)
    int dmg; // Damage
    int hp = stre * 20; // Current hp
    int mhp = stre * 20; // Max hp
    int shp = stre * 20; // hp used to set enemy hp
    int mana = inte * 10; // Mana
    int mmana = inte * 10; // Max Mana
    // Inventory / Shop
    int hpotion = 1; // Healing Potions
    int price; // Price of item(s)
    // Resources
    int gold = 25; // Gold
    int rgold; // Reward Gold
    // Saving / Loading Strings
    int x = 0;
    int y = 0;
    string sslimychestplate = std::to_string(slimychestplate);
    string sslimyhelmet = std::to_string(slimyhelmet);
    string soozinglegplates = std::to_string(oozinglegplates);
    string soozingboots = std::to_string(oozingboots);
    string spiclass = std::to_string(piclass);
    string slevel = std::to_string(level);
    string sxp = std::to_string(xp);
    string sxpb = std::to_string(xpb);
    string sxpl = std::to_string(xpl);
    string sstre = std::to_string(stre);
    string sinte = std::to_string(inte);
    string sdext = std::to_string(dext);
    string shpotion = std::to_string(hpotion);
    string sgold = std::to_string(gold);
    string sskill = std::to_string(skill);
    // Questhall
    int quest = 0; // The quest
    int questr = 0; // The quest requirements (6 boars slain)
    int questc = 0; // The current position on the requirements (3/6 boars slain)
    int questreward = 0; // The quest's reward
    string questmob; // Enemy that must be slain to complete the quest
    string questdisplay; // Displays the quest
    int qxpr; // Quest xp reward
    int qgoldr; // Quest gold reward
    // Monster Variables
    int elevel; // Enemy level
    int ehp; // Enemy hp
    int mehp; // Max Enemy hp
    int edmg; // Enemy dmg
    string eability; // Enemy Ability
    // Other Variables
    int random; // Random Integer #1
    int random2; // Random Integer #2
    // Weapons
    // Inputs
    string input; // Standard Input
    string player;


    Game(int WIDTH, int LENGTH)
    {
        quit = false;
    }
    ~Game()
    {
    }

    void Draw()
    {
        system("cls");
        printHorizontalWalls(LENGTH, true);

        // Double loop for printing every room in the 2D array dungeon
        for (int y = 1; y <= WIDTH; y++)
        {
            printVerticalWalls(LENGTH);
            if (y == WIDTH)
                printHorizontalWalls(LENGTH, true);
            else
                printHorizontalWalls(LENGTH, false);
        }
    }
    void Input()
    {
    }

    void Run()
    {  
            menu();
    }
    void menu() {
        // Setup
        system("cls");
        cout << "+----------------------------------------------------------------------------------------------------------------------+" << endl;
        cout << "|                                   _                      _             _                                             |" << endl;
        cout << "|                           ___ ___|_|___ ___ ___    ___ _| |_ _ ___ ___| |_ _ _ ___ ___                               |" << endl;
        cout << "|                          |  _|  _| |   | . | -_|  | .'| . | | | -_|   |  _| | |  _| -_|                              |" << endl;
        cout << "|                          |___|_| |_|_|_|_  |___|  |__,|___|\\_/|___|_|_|_| |___|_| |___|                              |" << endl;
        cout << "|                                        |___|                                                                         |" << endl;
        cout << "+----------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|Hello there please choose an option                                                                                   |" << endl;
        cout << "|1- New Game                                                                                                           |" << endl;
        cout << "|2 Exit                                                                                                                |" << endl;
        cout << "+----------------------------------------------------------------------------------------------------------------------+" << endl;
        cin >> input;
        if (input == "1") {
            goto setup;
        }
        else if (input == "2") {
            // goto exit;
            exit(0);
        }
   

    setup:
        system("cls");
        gameStart();
        player = name;
        cout << endl;
    csetup:
        system("cls");
        cout << "+----------------------------------------------------------------------------------------------------------------------+" << endl;
        cout << "|Choose your path                                                                                                      |" << endl;
        cout << "|=====================                                                                                                 |" << endl;
        cout << "|[1] Start your avendure as a hero.                                                                                    |" << endl;
        cout << "|[2] Japanese warrior!!!!!!                                                                                   |" << endl;
        cout << "|[3] Reincarnated as a sea cucumber???                                                                                 |" << endl;
        cout << "+----------------------------------------------------------------------------------------------------------------------+" << endl;

        cin >> input;

        if (input == "1") {
            pclass = "The Hero or the choice for noobs.";
            piclass = 1;
        }
        else if (input == "2") {
            pclass = "The biggest trash tier guy / the nico nico nii guy UwU.";
            piclass = 2;
        }
        else if (input == "3") {
            pclass = " A Sea Cucumber (supreme heavenly demon lord of the 9th divine realm with his 9 sprouse \n aka Xiao Yang for close friends).";
            piclass = 3;
        }
        goto menue;
        // Main Menue
    menue:
        system("cls");
        cout << R"(
            ___  ___ _____ _   _ _   _ 
            |  \/  ||  ___| \ | | | | |
            | .  . || |__ |  \| | | | |
            | |\/| ||  __|| . ` | | | |
            | |  | || |___| |\  | |_| |
            \_|  |_/\____/\_| \_/\___/
    )" << endl;
        cout << "+----------------------------------------------------------------------------------------------------------------------+" << endl;
        cout << "|You are " << pclass << "                                                                                              |" << player << endl;
        cout << "+----------------------------------------------------------------------------------------------------------------------+" << endl;
        cout << "|What do you whant to do?                                                                                              |" << endl;
        cout << "|                                                                                                                      |" << endl;
        cout << "|[1] Aventure                                                                                                          |" << endl;
        cout << "|[2] Inventory                                                                                                         |" << endl;
        cout << "|[3] Rest (Returns you to full health)                                                                                 |" << endl;
        cout << "|[4] C'est la carte, c'est la carte, c'est la carte de dora l'exploratrice                                             |" << endl;
        cout << "|[99] Exit                                                                                                             |" << endl;
        cout << "+----------------------------------------------------------------------------------------------------------------------+" << endl;

        cin >> input;
        if (input == "1") {
            goto sarena;
            Draw();
        }
        else if (input == "99") {
            //goto leave;
        }
        else if (input == "2") {
            //goto inventory;
        }
        else if (input == "99")
        {
            exit(0);
        }

    sarena:

        mmana = inte * 10;
        shp = stre * 20;
        mhp = stre * 20;
        random = rand() % 5 + 1;
        switch (random) {
        case 1:
            etype = "mob1";
            random2 = rand() % 2 + 1;
            eability = "coin coin";
            if (random2 == 1) {
                ehp = shp + rand() % (level * 5);
            }
            else {
                ehp = shp - rand() % (level * 5);
            }
            mehp = ehp;
            break;

        case 2:
            etype = "mob2";
            random2 = rand() % 2 + 1;
            eability = "kwak kwak";
            if (random2 == 1) {
                ehp = shp + rand() % (level * 3);
            }
            else {
                ehp = shp - rand() % (level * 3);
            }
            mehp = ehp;
            break;

        case 3:
            etype = "mob3";
            random2 = rand() % 2 + 1;
            eability = "rippppp";
            elevel = rand() % (level + 3) + 1;
            if (random2 == 1) {
                ehp = shp + rand() % (level * 2);
            }
            else {
                ehp = shp - rand() % (level * 2);
            }
            mehp = ehp;
            break;

        case 4:
            etype = "mob4";
            random2 = rand() % 2 + 1;
            eability = "graouuuuu";
            elevel = rand() % (level + 3) + 1;
            if (random2 == 1) {
                ehp = shp + rand() % (level * 4);
            }
            else {
                ehp = shp - rand() % (level * 4);
            }
            mehp = ehp;
            break;

        case 5:
            etype = "mob5";
            random2 = rand() % 2 + 1;
            eability = "Womp womp";
            if (random2 == 1) {
                ehp = shp + rand() % (level * 6);
            }
            else {
                ehp = shp - rand() % (level * 3);
            }
            mehp = ehp;
            break;

        }

        elevel = rand() % (level + 3) + 1;
        if ((elevel < (level - 3)) || (elevel > (level + 3))) {
            elevel = level;
        }

        goto aarena;

        // Arena Main
    aarena:

        clear();
        Draw();
        cout << "Information: " << endl;
        cout << "" << endl;
        cout << "Ennemi: " << endl;
        cout << "[" << etype << " lvl " << elevel << "] >>> " << ehp << " hp/" << mehp << " hp" << endl;
        cout << "" << endl;
        cout << "Character: " << endl;
        cout << "[" << name << " " << level << " ] >>> " << hp << " hp/" << mhp << " hp" << endl;
        cout << "" << endl;
        cout << "-Mana- >>> " << mana << " mp/" << mmana << " mp" << endl;
        cout << "" << endl;
        cout << "================================" << endl;
        cout << "Action" << endl;
        cout << "================================" << endl;
        cout << "[1] Attack" << endl;
        cout << "[2] Spell" << endl;
        cout << "[3] Inventory" << endl;
        cout << "[99] Flee" << endl;
        cin >> input;

        if (input == "1") {
            dmg = (stre + inte) + rand() % (dext * 10);
            ehp = ehp - dmg;
            // If enemy ehp < 0 then
            if (ehp <= 0) {
                system("cls");
                cout << "[*] You killed the " << etype << endl;
                cout << "Type [1] to continue" << endl;
                cin >> input;
                //goto rarena;
                goto menue;
            }
            random2 = rand() % 2 + 1;
            edmg = dmg;
            // Setting up enemy damage
            if (random2 == 1) {
                edmg = edmg + rand() % (dext * 2);
            }
            else {
                edmg = edmg - rand() % (dext * 2);
            }
            hp = hp - edmg;
            // If player hp < 0 then
            if (hp <= 0) {
                system("cls");
                cout << "[*] You Died" << endl;
                cout << "Type [1] to continue" << endl;
                cin >> input;
                if (status != "arena") {
                    status = "arena";
                }
                goto menue;
            }
            goto aarena;
        }
        else if (input == "99") {
            goto menue;
        }
        else if (input == "2") {
            goto darena;
        }
        else if (input == "3") {
            goto iarena;
        }
        else {
            goto aarena;
        }

        // Using items from Inventory
    iarena:
        system("cls");

        cout << "Inventory" << endl;
        cout << "[1] Health Potion, " << hpotion << " (Heals you to max health)" << endl;
        cout << "" << endl;
        cout << "Character: " << endl;
        cout << "[" << name << " " << level << " ] >>> " << hp << "hp/" << mhp << "hp" << endl;
        cout << "[99] Exit" << endl;
        cin >> input;
        if (input == "1") {
            if (hpotion > 0) {
                hpotion = hpotion - 1;
                hp = mhp;
            }
        }
        else if (input == "99") {
            goto aarena;
        }
        goto iarena;

        // Picking spells and doing damage
    darena:

        system("cls");


        // Champion spells
        if (action == "cleaving strike") {
            dmg = (stre + inte + dext) + rand() % (dext * 2);
        }
        else if (action == "melting thrust") {
            dmg = (stre + inte + dext) + rand() % (stre * 2);
        }
        else if (action == "critical bash") {
            dmg = (stre + inte + dext) + rand() % (inte * 2);
        }
        else if (action == "purify") {
            hp = hp + inte * (level)+(rand() % inte);
            if (hp > mhp) {
                hp = mhp;
            }
            goto aarena;
        }
        else if (action == "none") {
            goto aarena;
        }
        else if (action == "shadow strike") {
            dmg = (stre + inte + dext) + rand() % (dext * 2);
        }
        else if (action == "cripple") {
            dmg = (stre + inte + dext) + rand() % (stre * 2);
        }
        else if (action == "mutilate") {
            dmg = (stre + inte + dext) + rand() % (inte * 2);
        }
        else if (action == "life tap") {
            dmg = (stre + inte) + rand() % (inte);
            hp = hp + dmg;
            if (hp > mhp) {
                hp = mhp;
            }
            ehp = ehp - dmg;
            // If enemy ehp < 0 then
            if (ehp <= 0) {
                clear();
                cout << "[*] You killed the " << etype << endl;
                cout << "Type [1] to continue" << endl;
                cin >> input;
                goto rarena;
                //goto menue;
            }
            goto aarena;
        }
        else if (action == "back stab") {
            dmg = (stre + inte + dext) + rand() % (dext * 2);
        }
        else if (action == "headcrack") {
            dmg = (stre + inte + dext) + rand() % (stre * 2);
        }
        else if (action == "poison") {
            dmg = (stre + inte + dext) + rand() % (inte * 2);
        }
        else if (action == "assassinate") {
            dmg = (stre + inte + dext) + rand() % ((inte + stre) * 3);
            ehp = ehp - dmg;
            // If enemy ehp < 0 then
            if (ehp <= 0) {
                clear();
                cout << "[*] You killed the " << etype << endl;
                cout << "Type [1] to continue" << endl;
                cin >> input;
                goto rarena;
                //goto menue;
            }
            goto aarena;
        }
        else if (action == "smite") {
            dmg = (stre + inte + dext) + rand() % (dext);
        }
        else if (action == "enflame") {
            dmg = (stre + inte + dext) + rand() % (stre);
        }
        else if (action == "atonement") {
            dmg = (stre + inte + dext) + rand() % (inte);
        }
        else if (action == "flash heal") {
            hp = hp + ((stre * level) + (rand() % (inte * 2)));
            if (hp > mhp) {
                hp = mhp;
            }
            goto aarena;
        }

        // Doing the damage (Enemy)
        ehp = ehp - dmg;
        // If enemy ehp < 0 then
        if (ehp <= 0) {
            clear();
            cout << "[*] You killed the " << etype << endl;
            cout << "Type [1] to continue" << endl;
            cin >> input;
            goto rarena;
            //goto menue;
        }
        random2 = rand() % 2 + 1;
        dmg = (stre + inte) + rand() % (dext * 2);
        edmg = dmg;
        // Setting up enemy damage
        if (random2 == 1) {
            edmg = edmg + rand() % (dext * 2);
        }
        else {
            edmg = edmg - rand() % (dext * 2);
        }
        hp = hp - edmg;
        // If player hp < 0 then
        if (hp <= 0) {
            clear();
            cout << "[*] You Died" << endl;
            cout << "Type [1] to continue" << endl;
            cin >> input;
            if (status != "arena") {
                status = "arena";
            }
            goto menue;
        }
        goto aarena;

    rarena:
        clear();
        rxp = rand() % (level * 2) + 5;
        rgold = rand() % (level * 5);
        rgold = rgold * goldb;

        cout << R"(
*******************************************************************************
          |                   |                  |                     |       
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |                   
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |       
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |                   
|___________________|_._"  ,. .` ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` , "` `; .". ,  "-._"-._; ;              |       
 _________|___________| ;`-.o`"=._; ." ` '`."\` . "-._ /_______________|_______
|                   | |o;    `"-.o`"=._``  '` " ,__.--o;   |                   
|___________________|_| ;     (#) `-.o `"=.`_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/______/_
*******************************************************************************
    )" << endl; // That chest looks amazing

        if (status == "cheh") {
            goto cheh;
        }
        else {
            goto rrarena;
        }

    rrarena:
        cout << "You recieved " << rxp << " xp" << endl;
        cout << "You recieved " << rgold << " gold" << endl;
        xp = xp + rxp;
        gold = gold + rgold;
        if (xp >= xpl) {
            level = level + 1;
            xpl = xpl + xpb;
            xpb = xpb + 50;
            skill = skill + 5;
            cout << "You have leveled up to level " << level << endl;
        }
        cout << "Type [1] to continue to the menue" << endl;

        if (etype == questmob) {
            questc = questc + 1;
        }

        cin >> input;
        goto menue;
cheh:
        clear();
        cout << R"(
====================================
             . . .                         
              \|/                          
            `--+--'                        
              /|\                          
             ' | '                         
               |                           
               |                           
           ,--'#`--.                       
           |#######|                       
        _.-'#######`-._                    
     ,-'###############`-.                 
   ,'#####################`,               
  /#########################\              
 |###########################|             
|#############################|            
|#############################|            
|#############################|            
|#############################|            
 |###########################|             
  \#########################/              
   `.#####################,'               
     `._###############_,'                 
        `--..#####..--'       
========================================            
    )" << endl;

    };

    void gameStart()
    {
        // Asks the player his name
        string playerName;
        cout << "Hello and welcome to the dungeon. What is your hero name ? : ";
        cin >> playerName;

        // Asks if this is the good name. Results depending on the choice
        askPlayerNameConfirm(playerName);

    }

    void askPlayerNameConfirm(string name)
    {
        bool flagName = false;

        // Confirm the name
        string choice;
        cout << "Confirm your name '" << name << "' ? (Y/n) : ";
        cin >> choice;

        // If the first occurence of choice is 'Y', directly start the game
        flagName = (choice[0] == 'Y') ? true : false;
        // Verify the answer in the other case
        while (!flagName)
            flagName = askPlayerNameRepeat();
        // Doesn't come out until the player didn't confirm
        cout << "The Adventure begins !" << endl;
    }

    bool askPlayerNameRepeat()
    {
        bool flagName = false;

        // Asks the player his name again
        string name;
        cout << "What is your name, then ? : ";
        cin >> name;

        // Asks again to confirm
        string choice;
        cout << "Confirm your name '" << name << "' ? (Y/n) : ";
        cin >> choice;

        // Check which choice the player made
        switch (choice[0])
        {
        case 'Y':
            player = name;
            flagName = true;
            // Doesn't come out until the player didn't confirm
            cout << "The Adventure begins !" << endl;
            break;
        case 'n':
            break;
        default:
            cout << "You tapped neither 'Y' or 'n', please try again" << endl;
            break;
        }

        return flagName;
    }

};
int main()
{
    Game game(3, 3);
    game.Run();
    return 0;
}

