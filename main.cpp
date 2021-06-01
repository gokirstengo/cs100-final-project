#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <string>

#include "character_factory.hpp"
#include "melee_factory.hpp"
#include "ranged_factory.hpp"
#include "magic_factory.hpp"
 
using namespace std;
 
bool isAlive(Character * player);
bool battle(Character * player, Character * enemy);
int battleOptions(Character * charac, string userChoice);
 
int main() {
    string userInput;
    cout << "The mad scientist Walter Sackur from Anzing, Germany has created a fantasy character machine that can transform anyone into one of the following characters: \n Orc, Barbarian, Elf Archer, Hunter, Lich, and Druid." << endl << endl;
    
  
    cout << "Orc: Heavy attacks" << endl;
    cout <<"Barbarian: Swift melee attacks" << endl;
    cout << "Elf archer: Ranged fast attacks" << endl;
    cout << "Hunter: Ranged heavy attack" << endl;
    cout << "Lich: Swift magic attacks" << endl;
   cout << "Druid: Heavy magic attacks" << endl;
    
    cout << "Choose your role carefully (name of class lowercase): ";
    getline(cin, userInput);
    
    while(!((userInput == "orc" && userInput != "barbarian" && userInput != "elf archer" && userInput != "hunter" && userInput != "lich"  && userInput != "druid") ||
        (userInput != "orc" && userInput == "barbarian" && userInput != "elf archer" && userInput != "hunter" && userInput != "lich"  && userInput != "druid") ||
        (userInput != "orc" && userInput != "barbarian" && userInput == "elf archer" && userInput != "hunter" && userInput != "lich"  && userInput != "druid") ||
        (userInput != "orc" && userInput != "barbarian" && userInput != "elf archer" && userInput == "hunter" && userInput != "lich"  && userInput != "druid") ||
        (userInput != "orc" && userInput != "barbarian" && userInput != "elf archer" && userInput != "hunter" && userInput == "lich"  && userInput != "druid") ||
        (userInput != "orc" && userInput != "barbarian" && userInput != "elf archer" && userInput != "hunter" && userInput != "lich"  && userInput == "druid")))
    {
        cout << "Error! Please enter a valid character type" << endl;
        cout << "Choose your role carefully (name of class lowercase): ";
        getline(cin, userInput);
    }
 
    CharacterFactory *cf = nullptr;
    if (userInput == "orc" || userInput == "barbarian")
    {
        cf = new MeleeFactory();
    }
    else if (userInput == "elf archer" || userInput == "hunter")
    {
        cf = new RangedFactory();
    }
    else if (userInput == "lich" || userInput == "druid")
    {
        cf = new MagicFactory();
    }
    
    Character * player  = cf->create(userInput);
    cout << "Your character type is: " << player->get_characterType() << endl;
    cout << "Your attack type is: " << player->get_attackClass() << endl;

    
    int picker = rand() % 1;
    cout << picker << endl;
    CharacterFactory *cf1 = new RangedFactory();
    Character * enemy1;
    
    if (picker == 0) {
        enemy1 = cf1->create("elf archer");
    }
    else {
        enemy1 = cf1->create("hunter");
    }

    picker = rand() % 1;
    CharacterFactory *cf2 = new RangedFactory();
    Character * enemy2;
    
    if (picker == 0) {
        enemy2 = cf2->create("elf archer");
    }
    else {
        enemy2 = cf2->create("hunter");
    }

    picker = rand() % 1;
    CharacterFactory *cf3 = new RangedFactory();
    Character * enemy3;
    
    if (picker == 0) {
        enemy3 = cf3->create("elf archer");
    }
    else {
        enemy3 = cf3->create("hunter");
    }
    
    cout <<"There is a bounty in your area for killing the Big Three who were last seen in the rainforest, and the reward allows you to build a new home for your family." << endl;
    cout << "You make your way into the rainforest on your trusty steed. The air feels humid and heavy." << endl;
    cout << "The air gradually fills with a cold mist so you get off your steed and walk the rest of the way." << endl;
     
    cout << "After another hour of walking, you hear from a distance a loud thump, followed by the murmuration of a flock of warblers." << endl;
     
    cout << "You see a shadow of a creature in the bushes in front of you" << endl;
     
    cout << "As the first of the Big Three appears from the bushes with a weapon in his hand, you hear a lightning strike behind you." << endl;
     
    cout << "You turn around out of shock, and as you look back you see a " << enemy1->get_characterType() <<
    " standing with a pair of glowing red eyes in the darkness." << endl;

    if (battle(player, enemy1)) {
        cout << "You have defeated the first of the Big Three and you continue on your way to find the other two that remain for your bounty." << endl;
         
        cout << "As you travel through the forest, you notice a trail of large footprints and scratch marks on several nearby trees." << endl;
        
        cout << "You follow the footprints in hopes of finding the second member of the Big Three." << endl;
        
        cout << "The footprints lead you to the mouth of a cave, which you decide to enter." << endl;
        cout << "The dim flicker of your torch allows you to see piles of bones on the floor of the cave." << endl;
        cout << "As you venture deeper into the cave, all you can hear are the sounds of your footsteps." << endl;
        cout << "Suddenly, you hear an unfamiliar sound." << endl;
        cout << "You turn around to find the source of the sound and come face to face with the second of the Big Three, a " << enemy2->get_characterType() << "." << endl;

        if (battle(player, enemy2)) {
            cout << "You have defeated the second of the Big Three and you continue on your way to find the last of the Big Three for your bounty." << endl;
             
            cout << "After slaying the second member, you continue onward, deeper into the dark vast cave." << endl;
             
            cout << "Suddenly, you hear rocks rustling. Before you know it, the last of the Big Three, a " << enemy3->get_characterType() << " ambushes you" << endl;

            
            if (battle(player, enemy3)) {

                cout <<"You have defeated the last of the Big Three and you are exhausted from battling." << endl;
                 
                cout << "After winning the battles versus the Big Three, you’re able to return back to your normal life and remember everything as just a long dream." << endl;
                 
                cout << "You’re given the choice of remaining in the fantasy world or to return back to normal life." << endl;
                 
                cout << "If you choose to remain, the following day, you return to the town and claim your prize within the fantasy world and start a brand new life where you live happily ever after." << endl;
                 
                cout << "If you choose to leave, everyone calls you a hero for defeating the Big Three and overcoming the mechanisms of Dr. Walter Sackur." << endl;
            }
            else {
                cout << "You have fainted. Game Over!" << endl;
            }
        }
        else {
            cout << "You have fainted. Game Over!" << endl;
        }
    }
    else {
        cout << "You have fainted. Game Over!" << endl;
    }
 
    
    delete player;
    delete enemy1;
    delete enemy2;
    delete enemy3;
    delete cf;
    delete cf1;
    delete cf2;
    delete cf3;

    
    return 0;
}

bool isAlive(Character * player) {
    bool playerAlive = true;
    
    if (player->get_health() == 0) {
        playerAlive = false;
        return playerAlive;
    }
    return playerAlive;
}
    
bool battle(Character * player, Character * enemy) {
    int player_aValue = 0;
    int enemy_aValue = 0;
    string ans = "";
        
    cout << "Do you wish to heal or attack?" << endl;
    cout << "Enter your answer: ";
    cin >> ans;
    
    while(isAlive(player) && isAlive(enemy)) {
        if (ans == "heal") {
            cout << "How long do you want to heal? Please input one or two turns: ";
        }
        
        player_aValue = battleOptions(player, ans);
        enemy_aValue = battleOptions(enemy, "attack");
        
        if (ans == "attack") {
            enemy->take_damage(player_aValue);

            cout << "You used " << player->attackUsed() << " dealing " << to_string(player_aValue) << " leaving the enemy with " << to_string(enemy->get_health()) << " hp after battle." << endl;
            
            player->take_damage(enemy_aValue);
            
            cout << "Enemy used " << enemy->attackUsed() << " dealing " << to_string(enemy_aValue) << " leaving you with " << to_string(player->get_health()) << " hp after battle." << endl;
        }
        else if (ans == "one") {

            cout << "You have just healed for 5 hp and you are back to " << player->get_health() << " hp." << endl;

           player->take_damage(enemy_aValue);
            cout << "Enemy used " << enemy->attackUsed() << " dealing " << to_string(enemy_aValue) << " leaving you with " << to_string(player->get_health()) << " hp after battle." << endl;
        }
        else if (ans == "two") {
            cout << "You have just healed for 15 hp and you are back to " << player->get_health() << " hp." << endl;

                player->take_damage(enemy_aValue);
            cout << "Enemy used " << enemy->attackUsed() << " dealing " << to_string(enemy_aValue) << " leaving you with " << to_string(player->get_health()) << " hp after battle." << endl;
                enemy_aValue = battleOptions(enemy, "attack");
                player->take_damage(enemy_aValue);
            cout << "Enemy used " << enemy->attackUsed() << " dealing " << to_string(enemy_aValue) << " leaving you with " << to_string(player->get_health()) << " hp after battle." << endl;
        }
        else {
            cout << "Invalid input" << endl;
            cout << "Do you wish to heal or attack?" << endl;
            cout << "Enter your answer: " << endl;
            cin >> ans;
            while (ans != "heal" && ans != "attack") {
                    cin >> ans;
            }  
        }

        cout << "Do you wish to heal or attack?" << endl;
        cout << "Enter your answer: ";
        cin >> ans;

    }

        if (isAlive(player)) {
            return true;
        }
        return false;
}

int battleOptions(Character * charac, string userChoice) {
    int randNum = 0;
    if (userChoice == "attack") {
        randNum = rand() % 51;
        cout << randNum << endl;
        return charac->attack(randNum);
    }
    else if (userChoice == "one") {
        return charac->regen_health(userChoice);
    }
    else if (userChoice == "two") {
        return charac->regen_health(userChoice);
    }
    return 0;
    
}



