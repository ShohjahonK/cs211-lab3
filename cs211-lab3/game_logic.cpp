//
//  game_logic.cpp
//  cs211-lab3
//
//  Created by Karimberganov Shoh on 09/09/25.
//


#include <stdio.h>
#include <iostream>
#include "knight.h"
#include "monster.h"

using namespace std;


void start_game(){
    string name;
    cout << "enter your name: ";
    cin >> name;
    Knight player = Knight(name);
    Monster monster;
    int attack;
    while (monster.get_is_alive()) {
        attack = 1 + rand()%4;
        int update;
        switch (attack) {
            case 1:
                update = monster.get_health()-player.basic_attack();
                monster.set_health(update);
                cout << monster.get_name()<<" health: " << monster.get_health() << endl;
                break;
            case 2:
                update = monster.get_health()-player.shield_strike();
                monster.set_health(update);
                cout << monster.get_name() << " health: " << monster.get_health() << endl;
                break;
            case 3:
                update = monster.get_health()-player.sword_attack();
                monster.set_health(update);
                cout << monster.get_name() << " health: " << monster.get_health() << endl;
                break;
            case 4:
                update = monster.get_health()-player.heavy_attack();
                monster.set_health(update);
                cout << monster.get_name() << " health: " << monster.get_health() << endl;
                break;
            default:
                break;
        }
        if(monster.get_health()<=0){
            monster.set_is_alive(false);
        }
    }
}
