#include <iostream>
#include <string>
using namespace std;

string generateresponse (const string & input){
    if(input == "hello") {
       return "Hi there!" ;
    } else if(input == "HOW ARE U ?") {
        return "iam your servant";
    }
    else if (input == "What's your name?") {
       return "I don't have a name, but you can call me ChatBot.";
    } else {
        return "I don't understand that. Please ask another question.";
    }
}

int main () {
    string userInput;

    cout<<"ChatBot: Hello! How can I help you today?" << endl;
    while (true) {
        cout<< "you : ";
        getline(cin , userInput);
        if (userInput == exit) {
            break;
        }

    string response = generateresponse(userInput);

    cout<< "chatbot: " << response << endl;

    }

    cout<<"ChatBot: Goodbye! Have a great day!" << endl;

}