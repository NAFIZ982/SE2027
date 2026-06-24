#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream MyFile("myFile.txt");   // Create and open a text file
  // Write to the file
    MyFile << "Hello..! How are you?\n";
    MyFile << "I am fine thank you.\n";
    MyFile.close();    // Close the file

    string myText; // Read from the text file
    ifstream MyReadFile("myFile.txt");
    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
    // Output the text from the file
        cout<<myText<<endl;
    }
    MyReadFile.close();     // Close the file
}
