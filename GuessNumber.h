

class GuessNumber{
	public:
		GuessNumber();
	private:
		int input;
		int rNum();
		int sRNum();
		char input_for_continue;
}

GuessNumber::GuessNumber()
{
	//Output
	cout << "Guess the number from 1 to 100." << endl;
	cin >> input;
	
	//Check where the guess is; higher, lower, or exact
	SRNum = rNum();
	do{
	if(SRNum == input)
	{
		cout << "Congrats, you got it!" << endl;
	} else if(SRNum < input)
	{
		cout << "too high... " << endl;
	} else if(SRNum > input)
	{
		cout << "too low... " << endl;
	} else 
	{	
		cout << " -ERROR- " << endl;
	}
	} while(SRNum != input);
	

	//Ask user if they want to go again
	cout << "Guess again? " << endl;
	cin >> input_for_continue;
	if (input_for_continue == 'y' || input_for_continue == 'Y')
	{
		//Not sure if I'm aloud to do this, I will test this to make sure
		GuessNumber();
	}
}

int GuessNumber::RNum()
{
//Algorithm to generate a random number here
}