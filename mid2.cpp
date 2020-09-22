#include <iostream>
#include <random>
#include <time.h>
using namespace std;

int guess(int);

int main ()
{
	int num,round;
	srand(time(NULL));
	
		
	cout<<"### Welcome to guessing number game ###"<<endl;
	cout<<"Secret number has been chosen"<<endl;

	num= rand() %10+1;
	round = guess(num);

	cout<<"Congratulation!"<<endl;
	cout<<"The secret number is " << num <<endl;
	cout<<"You made " << round << " guesses "<<endl;

return 0;
}

int guess(int num){
	
	int input,round=0;
	do {
		cout<<"Guess the number (1 to 10): ";
		cin>>input;
		
		if (input<num) 
		cout<<"The secret number is lower"<<endl;
		else if (input>num) cout<<"The secret number is higher"<<endl;
		round++;


	}while (input != num);
	

	return round;
}	