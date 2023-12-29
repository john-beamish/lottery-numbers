#include <iostream> //input/output & namespaces
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

const int MAX_NUM_OF_BALLS = 7; //declare constants
const int MIN_NUM_OF_BALLS = 3;
const int MIN_LOTTERY_NUM = 45;
const int MAX_LOTTERY_NUM = 70;
const int MAX_NUM_OF_TICKETS = 100;
const int MIN_NUM_OF_TICKETS = 1;

int Factorial(int numBalls); //declare functions
float Odds(const int numBalls, const int largestLotteryNum);
void GetNumberOfBalls(int &numBalls);
void GetLargestLotteryNumber(int &largestLotteryNum);
void GetNumberOfTickets(int &numTickets);
void Print(const int &numBalls, const int &largestLotteryNum, const int &numTickets);

int main(){
                      //initialize these variables to 0 so they are outside the range of the
                      //while loops that ensure the inputs are within the acceptable ranges
    int numBalls = 0;  
	int largestLotteryNum = 0;
	int numTickets = 0;
	
    GetNumberOfBalls(numBalls); //call the functions
    GetLargestLotteryNumber(largestLotteryNum);
    GetNumberOfTickets(numTickets);
    Print(numBalls, largestLotteryNum, numTickets);
    
    return 0; 
}   

int Factorial (int thingToFactor){ //Creating function Factorial with the parameter 
                                   //thingToFactor since Factorial is called in "Odds"
    
    int factorialProduct = 1; //initialize variable factorialProduct with 1 
    
    for (int i = 1; i <= thingToFactor; ++i){ //for loop to multiply every integer that is less
                                              //than or equal to the number we are finding the factorial of
    factorialProduct = factorialProduct * i;
    }
    
    return factorialProduct;
}

//I removed one cout statement from "Odds"

// *******************************************************************
// *******************************************************************
// *    Name: Odds                                                   *
// *    Description: Given the number of balls (nb) and the          *
// *      highest value (tr) Calculate the odds of a winning         *
// *      winning combination of numbers where the order             *
// *       of the numbers is not important and a number can          *
// *       be selected once.                                         *
// *        Note the Factorial member function is not provided       *
// *        .. you will have to write that yourself.                 *
// *   Author: Dr. David A. Gaitros                                  *
// *   Date:   March 4th, 20222                                      * 
// *******************************************************************
// *******************************************************************
float Odds(const int nb, const int tr)
{
   float sum=1.0;   
   int numballs=nb;
   for (int i=tr-nb+1; i<=tr; i++)
    {
       sum = (sum*i);

    }

return sum/Factorial(nb);

}    

void GetNumberOfBalls(int &numBalls){ //ask user for number of balls and inputs it
    
    string ballsQuestion = "Enter in the number of balls or numbers you wish to pick from.\n"
                           "The number must be between 3 and 7:\n";
                         
    while (numBalls < MIN_NUM_OF_BALLS || numBalls > MAX_NUM_OF_BALLS){
    cout << ballsQuestion;
    cin >> numBalls;
    }
}

void GetLargestLotteryNumber(int &largestLotteryNum){ //ask user for largest lottery number and inputs it 
    
    string largestLotteryNumQuestion = "Enter in the largest number in the lottery.\n"
                                       "The number must be between 45 - 70:\n";
                         
    while (largestLotteryNum < MIN_LOTTERY_NUM || largestLotteryNum > MAX_LOTTERY_NUM){
    cout << largestLotteryNumQuestion;
    cin >> largestLotteryNum;
    }
}

void GetNumberOfTickets(int &numTickets){ //asks user for number of tickets and inputs it
    
    string numTicketsPrompt = "Enter the number of tickets 1-100 inclusive:\n";
    
    while (numTickets < MIN_NUM_OF_TICKETS || numTickets > MAX_NUM_OF_TICKETS){
    cout << numTicketsPrompt;
    cin >> numTickets;
    }
}

void Print(const int &numBalls, const int &largestLotteryNum, const int &numTickets){ //prints message, numbers, & odds
    
    int lotteryNumbers[MAX_NUM_OF_BALLS]; //Creating Array called lotteryNumbers of size max number of balls
    
    cout << "You will select " << numBalls << " numbers" << endl; 
    cout << "The numbers will range from 1 to " << largestLotteryNum << endl;
    cout << setprecision(20) << "The odds are 1 in " << Odds(numBalls, largestLotteryNum) << endl;
    cout << "YOUR LOTTERY SELECTIONS ARE:" << endl;
    
    for (int i = 0; i < numTickets; ++i){ //nested for loop to print numTickets rows of numBalls, with an if
                                          //statement to test for duplicate numbers within each row
   		for (int j = 0; j < numBalls; ++j){
   			lotteryNumbers[j] = rand() % largestLotteryNum + 1;
   			for (int k = j + 1; k < numBalls; ++k){
   				if (lotteryNumbers[j] == lotteryNumbers[k]){
   					lotteryNumbers[j] = rand() % largestLotteryNum + 1;
   				}
   			}
   			cout << lotteryNumbers[j] << " ";
   		}
   		cout << endl;
   }
   cout << "GOOD LUCK" << endl;
}   
