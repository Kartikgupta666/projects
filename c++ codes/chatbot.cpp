#include <iostream>
#include <string>
using namespace std;

int main() {
    
    cout<<"Hello Boss!"<<endl;
    string command;
    
while(true) {
    getline(cin , command );
    for(char &c : command) {
            c = tolower(c);
        }
    if(command == "hi" || command == "hello" ) {
        cout<<"How can I help you ?? "<<endl;
    }

    else if(command == "how are you ??") {
        cout<<"Fine!"<<endl;
    }

     else if(command == "ok quit") {
        cout<<"goodbye"<<endl;
        break;
    }
}

    return 0;
}