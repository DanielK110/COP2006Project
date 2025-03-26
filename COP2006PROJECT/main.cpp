// SPDX-License-Identifier: MIT
#include <iostream>
#include <string>
using namespace std;
class gameObjects {
public:
    string name;
    string description;
    bool reached = false;
};
int menu(bool gun, bool whip, bool light, bool sword) {
    string input;
    string error = "Command not recognized\n";
    string *ptr = &error;
    cout << "Choose your next area to explore.\n";
    cin >> input;
    string choice2[4] = {"You go to the sci-fi themed section. At the entrance is a toy ray-gun. You take it.\n",
                         "You go to the western themed section. At the entrance is a toy whip. You take it.\n",
                         "You go to the horror themed section. At the entrance is a flashlight. You take it.\n",
                         "You go to the medieval themed section. At the entrance is a wooden sword. You take it.\n"};
    if (input == "sci-fi" && !gun) {
        cout << choice2[0];
        return 1;
    } else if (input == "western" && !whip) {
        cout << choice2[1];
        return 2;
    } else if (input == "horror" && !light) {
        cout << choice2[2];
        return 3;
    } else if (input == "medieval" && !sword) {
        cout << choice2[3];
        return 4;
    } else if (gun || whip || light || sword) {
        cout << "Already been there.\n";
        return 707;
    }
    else {
        cout << *ptr;
        return 707;

    }
}
    int lvl1() {
        string input;
        string error = "Command not recognized\n";
        string *ptr = &error;
        cout << "You are outside of an abandoned amusement park.\nThe entrance is locked.\n";
        cin >> input;
        string choice1[3] = {"You jump the fence. There are four areas in the park. Choose the first to explore\n",
                             "You break the lock with bolt cutters. There is a loud thud. There are four areas in the park. Choose the first to explore\n",
                             "You decide to go home. Game over.\n",
        };

        if (input == "jump") {
            cout << choice1[0];
            return 10;
        } else if (input == "break") {
            cout << choice1[1];
            return 10;
        } else if (input == "home") {
            cout << choice1[2];
            return 404;
        } else {
            cout << *ptr;
            return 505;
        }

    }
    int lvl2(gameObjects ray) {
        string input;
        string error = "Command not recognized\n";
        string *ptr = &error;
        cout << ray.description;
        cout << "You see a UFO themed attraction ahead of you. It beckons you.\n";
        cout << "Inside the dilapidated UFO you find uncanny animatronic aliens. Suddenly, they start moving! What do you do?\n";
        cin >> input;
        string choice3[3] = {
                "You shoot the aliens with your ray-gun. The bullets conveniently hit their off buttons.\n",
                "You decide to run out of the UFO. Unfortunately, the attraction is not able to be left mid-ride. The aliens catch up to you. Game Over.\n",
                "You decide to use fists in this altercation. The aliens are hideously deformed after your beating, but they are shut off.\n"
        };
        if (input == "shoot") {
            cout << choice3[0];
            cout << "You decide you have seen enough of sci-fi. You return to the main square. Choose a new location.\n";
            return 10;
        } else if (input == "run") {
            cout << choice3[1];
            return 404;
        } else if (input == "beat") {
            cout << choice3[2];
            cout << "You decide you have seen enough of sci-fi. You return to the main square. Choose a new location.\n";
            return 10;
        } else {
            cout << *ptr;
            return 606;
        }


    }
    int lvl3(gameObjects lash) {
        string input;
        string error = "Command not recognized\n";
        string *ptr = &error;
        cout << lash.description;
        cout << "You see a wooden roller coaster ahead. It beckons you.\n";
        cout << "Miraculously, the controls still work. You strap yourself in and get ready.\n";
        cout << "Suddenly, the brakes go out during the ride! What do you do to get out of this situation?\n";
        cin >> input;
        string choice4[2] = {"You use your whip to swing yourself to safety. Nice aim!\n",
                             "You can't free yourself in time to jump to safety. Game Over.\n"
        };
        if (input == "whip") {
            cout << choice4[0];
            cout << "You decide you have seen enough of western. You return to the main square. Choose a new location.\n";
            return 10;
        } else if (input == "jump") {
            cout << choice4[1];
            return 404;
        } else {
            cout << *ptr;
            return 808;
        }
    }
    int lvl4(gameObjects bright) {
        string input;
        string error = "Command not recognized\n";
        string *ptr = &error;
        cout << bright.description;
        cout << "You see a haunted hedge maze attraction. It beckons you.\n";
        cout << "You find yourself lost in its clutches. How do you get out?\n";
        cin >> input;
        string choice5[2] = {
                "You use your flashlight. You quickly find the right path out of the maze.\n",
                "You never manage to find your way out of the maze. Game over\n"
        };
        if (input == "light") {
            cout << choice5[0];
            cout << "You decide you have seen enough of horror. You return to the main square. Choose a new location.\n";
            return 10;
        } else {
            cout << choice5[1];
            return 404;
        }
    }
    int lvl5(gameObjects cutter) {
        string input;
        string error = "Command not recognized\n";
        string *ptr = &error;
        cout << cutter.description;
        cout << "You see an attraction based around a jousting match. It beckons you.\n";
        cout << "Your opponent is a knight in very old armor. What do you use to win the match?\n";
        cin >> input;
        string choice6[3] = {
                "You use your sword to knock your opponent off its robot horse. You win.\n",
                "You try to use your fists, but they don't reach your adversary. Game over.\n",
                "You decide to abandon your steed to get to safety. Albeit a few scars and scrapes, it works.\n"
        };
        if (input == "sword") {
            cout << choice6[0];
            cout << "You decide you have seen enough of medieval. You return to the main square. Choose a new location.\n";
            return 10;
        } else if (input == "fists") {
            cout << choice6[1];
            return 404;
        } else if (input == "leave") {
            cout << choice6[2];
            cout << "You decide you have seen enough of medieval. You return to the main square. Choose a new location.\n";
            return 10;
        } else {
            cout << *ptr;
            return 1010;
        }
    }

    int main() {
        int location = 0;
        bool gameState = true;
        gameObjects rayGun;
        rayGun.name = "Ray-Gun";
        rayGun.description = "A toy Ray-Gun, shoots out foam darts.\n";
        rayGun.reached = false;
        gameObjects whip;
        whip.name = "Whip";
        whip.description = "A toy whip, almost as useful as the real thing.\n";
        whip.reached = false;
        gameObjects flashLight;
        flashLight.name = "Flashlight";
        flashLight.description = "A flashlight, useful for lighting up dark places.\n";
        flashLight.reached = false;
        gameObjects sword;
        sword.name = "Wooden Sword";
        sword.description = "A wooden sword, it looks quite threatening.\n";
        sword.reached = false;
        while (gameState) {
            if (location == 10 || location == 707) {
                location = menu(rayGun.reached, whip.reached, flashLight.reached, sword.reached);
                if (location == 707) {
                    continue;
                }
            }
            if (location == 0 || location == 505) {
                location = lvl1();
                if (location == 404) {
                    gameState = false;
                }
                if (location == 505) {
                    continue;
                }
            }
            if (location == 1 || location == 606) {
                location = lvl2(rayGun);
                rayGun.reached = true;
                if (location == 404) {
                    gameState = false;
                }
                if (location == 606) {
                    continue;
                }
            }

            if (location == 2 || location == 808) {
                location = lvl3(whip);
                whip.reached = true;
                if (location == 404) {
                    gameState = false;
                }
                if (location == 808) {
                    continue;
                }
            }

            if (location == 3 || location == 909) {
                location = lvl4(flashLight);
                flashLight.reached = true;
                if (location == 404) {
                    gameState = false;
                }
                if (location == 909) {
                    continue;
                }
            }

            if (location == 4 || location == 1010) {
                location = lvl5(sword);
                sword.reached = true;
                if (location == 404) {
                    gameState = false;
                }
                if (location == 1010) {
                    continue;
                }

            }

            if (sword.reached && whip.reached && flashLight.reached && rayGun.reached) {
                cout << "You have seen the entire park now. You decide to go home after your adventure. Game Over.\n";
                gameState = false;
            }
        }
        return 0;
}
