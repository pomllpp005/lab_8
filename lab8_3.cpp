#include<iostream>
#include<string>
using namespace std;
int main()
{
    int age=0,height=0;
    long int bounty=0;
    string character;
    cout << "Enter your age: ";
    cin >> age;
    if(age<25){
    cout << "Enter your height: ";
    cin >> height;
        if(height<100){
            character="Chopper";
        }
        else if(height<180){
            character="Usopp";
        }
        cout << "Enter your bounty: "<<endl;
        cin >> bounty;
        if(bounty>1100000000){
            character="Zoro";
        }
        else{
            character="Sanji";
        }
    }
    else{
        if(age<60){
            cout << "Enter your bounty: "<<endl;
            cin >> bounty;
            if( bounty>500000000){
             character="Jinbe";   
            }
            else{
            character="Franky";  
            }
        }
        else {
            character="Brook";
        }

    }
    cout << "Your character = "<<character;
    return 0;
}
/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
