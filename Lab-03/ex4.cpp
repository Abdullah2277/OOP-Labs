#include <iostream>
#include <string>
using namespace std;

class BookType{
    private:
        string title, authors[4], publisher, ISBN;
        int numAuthors, numCopiesinStock;
        double price;
    
    public:
        BookType(){
            title = "";
            for (int i=0; i<4; i++){
                authors[i] = "";
            }
            publisher = "";
            ISBN = "";
            numAuthors = 0;
            numCopiesinStock = 0;
            price = 0.0;
        }

        BookType(string Title, string Authors[4], string Publisher, string isbn, int NumAuthors, int NumCopiesinStock, double Price) {
            title = Title;
            if (NumAuthors <= 4) {
                numAuthors = NumAuthors;
            } else {
                numAuthors = 4;
            }
            for (int j = 0; j < numAuthors; j++) {
                authors[j] = Authors[j];
            }
            publisher = Publisher;
            ISBN = isbn;
            if (NumCopiesinStock >= 0) {
                numCopiesinStock = NumCopiesinStock;
            } else {
                numCopiesinStock = 0;
            }
            if (Price >= 0) {
                price = Price;
            } else {
                price = 0.0;
            }
        }

        void displayTitle() const {
            cout << "The Title of the Book is: " << title << endl;
        }
        void setTitle(string ti){
            title = ti;
        }
        bool checkTitle(string givenTitle){
            return (title == givenTitle);
        }
        
        void displayAuthors() const {
            for (int x=0; x<numAuthors; x++){
                cout << "Author " << x+1 << ": " << authors[x] << ", ";
            }
            cout << endl;
        }
        void setAuthors(string Auths[], int numAuths){
            if (numAuths <= 4) {
                numAuthors = numAuths;
            } else {
                numAuthors = 4;
            }
            for (int y = 0; y < numAuthors; y++) {
                authors[y] = Auths[y];
            }   
        }

        void setPublisher(string pub){
            publisher = pub;
        }
        string getPublisher() const {
            return publisher;
        }

        void setISBN(string IsBn){
            ISBN = IsBn;
        }
        string getISBN() const {
            return ISBN;
        }

        int getNumCopiesInStock() const {
            return numCopiesinStock;
        }
        void setNumCopiesInStock(int numcopy){
            if (numcopy >= 0) {
                numCopiesinStock = numcopy;
            } else {
                numCopiesinStock = 0;
            }
        }
        void updateNumCopiesInStock(int newcopies){
            numCopiesinStock += newcopies;
        }

        double getPrice() const {
            return price;
        }
        void setPrice(double Prices){
            if (Prices >= 0) {
                price = Prices;
            } else {
                price = 0.0;
            }
        }

};

int main() {
    BookType library[100];

    string authors1[4] = {"John Smith", "Helen Mark", "", ""};
    string authors2[4] = {"Ali Ahmed", "", "", ""};

    library[0] = BookType("C++ Programming", authors1, "TechBooksPublish.co", "12345", 2, 10, 59.99);
    library[1] = BookType("Data Structures", authors2, "EduBooksPublishers", "67890", 10, 5, 79.99);

    cout << "---------- Library Books ----------" << endl;
    cout << "Book 1:\n";
    library[0].displayTitle();
    library[0].displayAuthors();
    cout << "Publisher: " << library[0].getPublisher() << endl;
    cout << "ISBN: " << library[0].getISBN() << endl;
    cout << "Price: " << library[0].getPrice() << "$" << endl;
    cout << "Copies in Stock: " << library[0].getNumCopiesInStock() << endl;

    cout << "Book 2:\n";
    library[1].displayTitle();
    library[1].displayAuthors();
    cout << "Publisher: " << library[1].getPublisher() << endl;
    cout << "ISBN: " << library[1].getISBN() << endl;
    cout << "Price: " << library[1].getPrice() << "$" << endl;
    cout << "Copies in Stock: " << library[1].getNumCopiesInStock() << endl;

    string searchTitle = "C++ Programming";
    cout << "\nSearching for book with title: " << searchTitle << endl;
    for (int i = 0; i < 2; i++) {
        if (library[i].checkTitle(searchTitle)) {
            cout << "Book found!" << endl;
            library[i].displayTitle();
        }
        else{
            cout << "Book with this title: " << searchTitle << "is not available in the library." << endl;
        }
    }

    string searchISBN = "67890";
    cout << "\nSearching for book with ISBN: " << searchISBN << endl;
    for (int i = 0; i < 2; i++) {
        if (library[i].getISBN() == searchISBN) {
            cout << "Book found!" << endl;
            library[i].displayTitle();
        }
        else{
            cout << "Book with this ISBN: " << searchISBN << "is not available in the library." << endl;
        }
    }

    cout << "Current stock of the Book Data Structures: " << library[1].getNumCopiesInStock() << endl;
    cout << "Updating stock..." << endl;
    library[1].updateNumCopiesInStock(25);
    cout << "New stock: " << library[1].getNumCopiesInStock() << endl;

    return 0;
}
