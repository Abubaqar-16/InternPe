#include<iostream>                    //header files
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand((unsigned int) time(NULL)); // Seed the random number generator
    int number = (rand() % 100)+1;    // Generate a random number between 1 and 100
    int guess =0;                     // Initialize the guess variable
    cout << "Guess an Number(1-100)." <<endl;
    do{

        cin >>guess;
        if(guess<number){
            cout<<"Guess Higher"<<endl;// If the guess is lower than the number, print "Guess Higher"
        }
        else if(guess>number){
            cout<<"Guess Lower"<<endl; // If the guess is higher than the number, print "Guess Lower"
        }
        else{
            cout<<"You Won!!"<<endl;   // If the guess is correct, print "You Won!!"
        }
    }while(guess!=number);             // Loop until the user guesses the correct number
}
