#include <stdlib.h>
#include <iostream>
#include <random>

using namespace std;

#define MAX_NUM 100

int main(int argc, char const *argv[])
{
	int user_num = 0;
	int min = 0;
	int max = MAX_NUM;
	srand(time(NULL));

	if(argc>1)
	{
		user_num = atoi(argv[1]);
		if( user_num < min || user_num > max){
			cout << "Il vous faut entrer un nombre entier entre 0 et " << max << endl;
		}
	}
	else
	{
		cout << "Utilisation : ./find_num <number>";
		return 0;
	}

	while(true){
		//AI Guess Number
		int guess = min + rand()%((max-min)+1);
		
		int response = 0;
		//AI shows the number, then asks if correct
		do
		{
			cout << "Je pense à " << guess << " est-ce correct ?" << endl;
			cin >> response;	
			if(response < 0 || response > 2)
				cout << "Je ne comprends pas" << endl;
		}while(response < 0 || response > 2);
		
		//interpret the response :
		/*
		0 = OK
		1 = lower
		2 = higher
		*/
		
		if(response == 0){
			cout << "Confirmation de la bonne réponse" << endl;
			break;//On sort de la boucle
		}
		else if(response == 1){
			max = guess -1;
		}
		else if(response == 2){
			min = guess + 1;
		}

		if(min>max){
			cout<<"Tricheur"<<endl;
			return(0);
		}
	}

	return 0;
}