#include <iostream>
using namespace std;

class Weapons {
    public:
        void WeaponsDescription() {
            cout << "Weapons are tools which can be used for Offensive and Defensive purposes." << endl;
        }
};

class HotWeapons : public Weapons {
    public:
        void HotWeaponsDescription() {
            cout << "Hot weapons use gunpowder or explosive stuff." << endl;
        }
};

class Bombs : public HotWeapons {
    public:
        void BombsDescription() {
            cout << "Bombs blow up and cause destruction." << endl;
        }
};

class NuclearBombs : public Bombs {
    public:
        void NuclearBombsDescription() {
            cout << "Nuclear bombs blow up using nuclear fission or fusion." << endl;
        }
};

int main() {
    Weapons weapon;
    HotWeapons hotWeapon;
    Bombs bomb;
    NuclearBombs nuclearBomb;

    cout << "!!! Weapons !!!" << endl;
    weapon.WeaponsDescription();

    cout << "\n!!! Hot Weapons !!!" << endl;
    hotWeapon.HotWeaponsDescription();

    cout << "\n!!! Bombs !!!" << endl;
    bomb.BombsDescription();

    cout << "\n!!! Nuclear Bombs !!!" << endl;
    nuclearBomb.NuclearBombsDescription();

    return 0;
}
