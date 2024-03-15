#include <iostream>
#include <cstdlib>//for rand() and srand()
#include <ctime>//for time()

using namespace std;

#define ROCK 1 
#define PAPER 2
#define SCISSORS 3

int main() {
  srand((unsigned int) time(NULL)); //seed random number generator

  int Player_Throw=0;
  int Computer_Throw=0;
  bool Drawwin=false;

  do{                               //loop until a draw
    cout<<"Select"<<endl;
    cout<<"1. Rock"<<endl;
    cout<<"2. Paper"<<endl;
    cout<<"3. Scissors"<<endl;
    cout<<"Selection: "<<endl;      //prompt user for selection
    cin>>Player_Throw;              //get player's throw
    cout<<endl;
    Computer_Throw = (rand() % 3) + 1;
    if(Computer_Throw==ROCK){
      cout<<"Computer throws ROCK"<<endl;  //display computer's throw
    }
    else if (Computer_Throw==PAPER){
      cout<<"Computer throws PAPER"<<endl;
    }
    else if (Computer_Throw==SCISSORS){
      cout<<"Computer throws SCISSORS"<<endl;
    }
    Drawwin=false;
    if(Player_Throw==Computer_Throw){
      Drawwin=true;
      cout<<"Draw!! Play again"<<endl;  //display draw message
    }
    else if (Player_Throw==ROCK&&Computer_Throw==SCISSORS){
      cout<<"Rock Beats Scissors ,Player wins!!"<<endl;    //display player win message
    }
    else if (Player_Throw==ROCK&&Computer_Throw==PAPER){
      cout<<"Paper Beats Rock ,Computer wins!!"<<endl;     //display computer win message
    }
    else if (Player_Throw==PAPER&&Computer_Throw==ROCK){
      cout<<"Paper Beats Rock ,Player wins!!"<<endl;
    }
    else if (Player_Throw==PAPER&&Computer_Throw==SCISSORS){
      cout<<"Scissors Beats Paper ,Computer wins!!"<<endl;
    }
    else if (Player_Throw==SCISSORS&&Computer_Throw==ROCK){
      cout<<"Rock Beats Scissors ,Computer wins!!"<<endl;
    }
    else if (Player_Throw==SCISSORS&&Computer_Throw==PAPER){
      cout<<"Scissors Beats Paper ,Player wins!!"<<endl;
    }
  }while ( Drawwin );    //loop until a draw
  
}