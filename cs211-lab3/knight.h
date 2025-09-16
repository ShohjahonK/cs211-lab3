//
//  knight.h
//  cs211-lab3
//
//  Created by Karimberganov Shoh on 09/09/25.
//

#ifndef knight_h
#define knight_h
using namespace::std;
class Knight{
private:
    string name;
    int health;
    bool is_alive;
public:
    Knight(){
        name="Unknown";
        health=100;
        is_alive=true;
    }
    Knight(string name) {
        this->name=name;
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
    void    (int health){
        this->health=health;
    }
    bool get_is_alive(){
        return is_alive;
    }
    void set_is_alive(bool is_alive){
        this->is_alive=is_alive;
    }
    
    int shield_strike(){
        cout << name << " uses Shield Strike! \n";
        return 5;
    }
    
    int basic_attack(){
        cout << name << " attacks with a Basic Attack! \n";
        return 10;
    }
    
    int sword_attack(){
        cout << name << " swings their Sword! \n";
        return 15;
    }
    
    int heavy_attack(){
        cout << name << " unleashes a Heavy Attack! \n";
        return 20;
    }
    
    int heal(){
        srand(time(0));
        int points = rand()%16+5;
        return points;
    };
};

#endif /* knight_h */
