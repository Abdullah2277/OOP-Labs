#include <iostream>
using namespace std;

class Character {
    private:
        int* health;
        int* attackPower;
        int* defense;

    public:
        Character() {
            health = new int(100);       
            attackPower = new int(50);
            defense = new int(40);
        }

        Character(int h, int ap, int d) {
            health = new int(h);
            attackPower = new int(ap);
            defense = new int(d);
        }

        Character(const Character& other) {
            health = new int(*(other.health));
            attackPower = new int(*(other.attackPower));
            defense = new int(*(other.defense));
        }

        int getHealth(){
            return *health; 
        }
        int getAttackPower(){
            return *attackPower; 
        }
        int getDefense(){
            return *defense;
        }

        void setHealth(int Health){
            *health = Health;
        }
        void setAttackPower(int AttackPower){
            *attackPower = AttackPower;
        }
        void setDefense(int Defense){
            *defense = Defense;
        }

        void display(){
            cout << "Health: " << *health << ", Attack Power: " << *attackPower << ", Defense: " << *defense << endl;
        }
};

int main() {

    Character c1;
    cout << "Default Character: ";
    c1.display();

    Character c2(200, 25, 50);
    cout << "Custom Character: ";
    c2.display();

    Character c3 = c2;
    cout << "Copied Character: ";
    c3.display();

    c2.setHealth(250);
    cout << "Modified c2:" << endl;
    cout << "c2: "; c2.display();
    cout << "c3: "; c3.display();

    return 0;
}
