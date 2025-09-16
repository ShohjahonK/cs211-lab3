//
//  monster.h
//  cs211-lab3
//
//  Created by Karimberganov Shoh on 09/09/25.
//

#ifndef monster_h
#define monster_h
using namespace::std;

class Monster{
private:
    string name;
    int health;
    bool is_alive;
public:
    Monster(){
        name="Bibazavr";
        health=100;
        is_alive=true;
    }
    Monster(string name, int health, bool is_alive) {
        this->name=name;
        this->health=health;
        this->is_alive=is_alive;
    }
    string get_name(){
        return name;
    }
    void set_name(string name){
        this->name=name;
    }
    int get_health(){
        return health;
    }
    void set_health(int health){
        this->health=health;
    }
    bool get_is_alive(){
        return is_alive;
    }
    void set_is_alive(bool is_alive){
        this->is_alive=is_alive;
    }
};


#endif /* monster_h */
