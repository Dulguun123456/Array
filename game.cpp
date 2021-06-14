#include<iostream>
using namespace std;
int main()
{
	string name;
	cout<<"Welcome to <Guess the number of game> "<<endl;;
	cout<<"What is your name: ";
	cin>>name;
	cout<<name<<" you have to guess the number between 1--100"<<endl;
	int num,guessnum;
	int secretnum=15;
	int guessCount=0;
	int guessLimit=5;
	cout<<name<<" you have "<<guessLimit<<" chances"<<endl;
	bool OutOfGuesses=false;                  //hudal
	cout<<"Your random number: ";
	cin>>guessnum;                                //taah too
	while(secretnum!=guessnum && !OutOfGuesses)
	{
		if(guessCount<guessLimit && guessnum+30>secretnum)     //taah hyazgaartaa hvreegvi ba nuuts toonoos 30-r ih  b.wal
	
		{
			cout<<name<<" your guess number is too high."<<endl;
			cout<<"Enter guess number: ";
			cin>>guessnum;
			guessCount++;
		}
		else if(guessCount<guessLimit && guessnum+10>secretnum)   //taah hyazgaartaa hvreegvi ba nuuts toonoos 10-r ih  b.wal
		{
			cout<<name<<" your guess number is approaching."<<endl;;
			cout<<"Enter guess number: ";
			cin>>guessnum;
			guessCount++;
			
		}
		else if(guessCount<guessLimit && secretnum-30>guessnum) //taah hyazgaartaa hvreegvi ba nuuts toonoos 30-r baga  b.wal
		{
			cout<<name<<" your guess number is too little."<<endl;;
			cout<<"Enter guess number: ";
			cin>>guessnum;
			guessCount++;	
		}
		else if(guessCount<guessLimit && secretnum-10>guessnum) //taah hyazgaartaa hvreegvi ba nuuts toonoos 10-r baga  b.wal
		{
			
			cout<<name<<" your guess number is approaching."<<endl;;
			cout<<"Enter guess number: ";
			cin>>guessnum;
			guessCount++;	
			
		}
		else                                            //can guess
		{
			OutOfGuesses=true;
		}
	}
	if(OutOfGuesses)                               //can't guess
		{
			cout<<"You Lose! ";                  
		}
	else
		{
			cout<<name<<" are win!";
			
		}

	return 0;
}
