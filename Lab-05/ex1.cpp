#include <iostream>
#include <string>
using namespace std;

class myFirstBase{
    private:
        int privateInt;
    protected:
        int protectedInt;
    public:
        int publicInt;

        myFirstBase(): privateInt(0), protectedInt(0), publicInt(0) {}

        int getPrivateint(){
            return privateInt;
        }
        int getProtectedint(){
            return protectedInt;
        }
        int getPublicint(){
            return publicInt;
        }

        void setPrivateint(int num){
            privateInt = num;
        }
        void setProtectedint(int num){
            protectedInt = num;
        }
        void setPublicint(int num){
            publicInt = num;
        }
};

class publicChild: public myFirstBase{
    public:
        void accessDataMembers(){
            cout << "private int is accessed via parent getter: " << getPrivateint() << endl;
            cout << "protected int is accessed via direct access: " << protectedInt << endl;
            cout << "public int is accessed via direct access: " << publicInt << endl;

        }
};

class privateChild: private myFirstBase{
    public:
        void accessDataMembers(){
            cout << "private int is accessed via parent getter: " << getPrivateint() << endl;
            cout << "protected int is accessed via direct access: " << protectedInt << endl;
            cout << "public int is accessed via parent getter: " << getPublicint() << endl;

        }
};

class protectedChild: protected myFirstBase{
    public:
        void accessDataMembers(){
            cout << "private int is accessed via parent getter: " << getPrivateint() << endl;
            cout << "protected int is accessed via direct access: " << protectedInt << endl;
            cout << "public int is accessed via direct access: " << publicInt << endl;

        }

};

int main(){

    publicChild pubCh;
    protectedChild proCh;
    privateChild priCh;

    cout << "Public Child:" << endl;
    pubCh.accessDataMembers();

    cout << "\nProtected Child:" << endl;
    proCh.accessDataMembers();
    
    cout << "\nPrivate Child:" << endl;
    priCh.accessDataMembers();

    cout << "\nAccessing from main (public inheritance): " << pubCh.getPublicint() << endl;
    // proCh.getPublicint();  // not accessible
    // priCh.getPublicint();  // not accessible

    return 0;
}