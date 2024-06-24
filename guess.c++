#include<iostream>
#include<ctime>
#include<cstdlib>
 using namespace std;
//Create a program that generates a random number and asks the
 //user to guess it. Provide feedback on whether the guess is too
//  high or too low until the user guesses the correct number.
 int main(){
  //genrate 1 to 100 number by randomly my pc.
   srand(static_cast<unsigned int>(time(nullptr)));
   int secretnumber=(rand()%100)+1;
       cout<<"Welcome to gussing number Game!:"<<endl;
       cout<<"choice your difficulty level:"<<endl;
       cout<<"1:easy level (10 chance)"<<endl;
       cout<<"2:mideum level(7chance) "<<endl;
       cout<<"3:difficult level (5chance) "<<endl;
       
       int choice;
       cin>>choice;
       int maxchance;
       switch(choice){
         case 1:
          maxchance=10;
         break;
         case 2:
         maxchance=7;
         break;
         case 3:
         maxchance=5;
         break;

         default:
         cout<<"'wrongmsg!Existing game:'"<<endl;
         return 0;

       }
          

          int guess;
          for(int chance=1; chance<=maxchance;chance++){
               cout << "Enter your guess (between 1 and 100): ";
                cin>>guess;
                if(guess==secretnumber){
                  cout<<"Congratulation! you are guessed the correct number."<<endl;

                }
                else if(guess<secretnumber){
                cout<<"try  higher number."<<endl;
                }
                else{
                  cout<<"try lower number."<<endl;
                }
          }

                 
    cout << "The secret number was: " << secretnumber << endl;






  return 0;

 }