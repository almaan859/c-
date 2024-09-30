#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

const int GRID_SIZE = 3;	
class tic_tac_toe{


	public:

		srand(time(0));



		char arr[GRID_SIZE][GRID_SIZE];





		void print_grid()

		{

			for (int i = 0; i < GRID_SIZE; ++i)
			{

				

				for (int j = 0; j < GRID_SIZE; ++j)
				{

					cout << " "<< arr[i][j]<< " ";
					if (j < GRID_SIZE-1)
					{
						cout <<"|";
					}else{

						cout << endl;
					}
				}

				cout << "----------"<< endl;
			}


		}


		










		char int_to_char(int a)
		{

			char t  = 'b';

			if(0<= a <=9) 
			{
				return '0' + a;
			}
			else{

				return t;
			}

		}

		









		void fill_grid()
		{

			int counter  = 0; 
			for (int i = 0; i < GRID_SIZE; ++i)
			{
				for (int j = 0; j < GRID_SIZE; ++j)
				{
					arr[i][j] = int_to_char(counter);
					++counter;
				}
			}
		}



		char get_usr(){

			char user;
			int *pointer{null_ptr};
			pointer = new int;
			cout << "Enter the postion u want to put an x at: ";
			cin >> *pointer;
			user = int_to_char(*pointer);
			delete pointer;

			}


		char get_comp(){


			char computer;
			computer = int_to_char(rand() % 9);
			return computer;
		}


		char check_win(arr){

			int counter = 0;

			
			
				
			if (arr[i][0] == arr[i+1][0]== 'x')
			{
				cout << "user wins"  << endl;
				return 'U';
			}


			




			}
		









};


int main(){

	
	
	tic_tac_toe play;

	
	play.fill_grid();
	play.print_grid();

	char user = play.get_usr();
	char computer = play.get_comp();
	

	while(true){


		play.print_grid();


		char user = play.get_usr();
		char computer = play.get_comp();

		for (int i = 0; i < GRID_SIZE; ++i)
		{
			for (int j = 0; j < GRID_SIZE; ++j)
			{
				if (arr[i][j]!= 'x' | '0' && arr[i][j] == user)
				{
					arr[i][j] = 'x';

				}
				if (arr[i][j]!= 'x' | '0' && arr[i][j] == computer)
				{
					arr[i][j] = '0';
				}else{

					cout << "Position already taken!!"<< endl;
				}
			}
		}




	}








}