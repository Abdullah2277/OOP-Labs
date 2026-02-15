#include <iostream>
#include <string>
using namespace std;

class Camera {
	protected:
	    int megapixels;
	public:	
	    Camera(int mp) : megapixels(mp) {}
	
	    void takePhoto() {
	        cout << "Taking a " << megapixels << "MP photo." << endl;
	    }
};

class MusicPlayer {
	protected:
	    int storageGB;	
	public:
	    MusicPlayer(int storage) : storageGB(storage) {}	
	    void playMusic() {
	        cout << "Playing music from " << storageGB << "GB library." << endl;
	    }
};

class SmartPhone : public Camera, public MusicPlayer {
	private:
	    string modelName;	
	public:	
	    SmartPhone(string name, int mp, int storage) 
	        : Camera(mp), MusicPlayer(storage), modelName(name) {
	        cout << "Initializing " << modelName << "..." << endl;
	    }	
	    void displaySpecs() {
	        cout << "--- " << modelName << " Specs ---" << endl;
	        cout << "Camera: " << megapixels << "MP" << endl;
	        cout << "Storage: " << storageGB << "GB" << endl;
	    }
};

int main(void) {
    
    SmartPhone myPhone("iPhone 15", 48, 256);

    myPhone.displaySpecs();
    myPhone.takePhoto();
    myPhone.playMusic();

    return 0;
}
