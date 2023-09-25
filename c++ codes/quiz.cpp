#include <iostream>
using namespace std;

int main(){

// DELACRATION
    string q1 = "What colour are the stars on the Hollywood Walk of Fame?";
    string q2 = "The Quadrilatero Della Moda is an upscale fashion district in which city?";
    string q3 = "How many planets in our solar system have exactly one moon?";


    cout<<"THIS IS YOUR QUIZ"<<endl; //THIS IS HEADING
   
   cout<< "name" << " " << "nme" << " " << "nmae" <<endl;
    string ANS ;
    cin>>ANS;

    if(ANS == "name"){
        cout<<"you are right.";
    }
    else {
        cout<<"you are wrong !!";
    }


return 0;
}