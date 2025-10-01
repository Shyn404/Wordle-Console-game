#include <iostream>
using namespace std;

const char awnser[5] = {'f','i','g','h','t'};  //you can add the word you want here
char input[5];
int tries = 5;
bool gameover = false;
int holder2;

void Setup()
{
	cout << "Wordle\n";
	cout << "Number of Tries:" << tries;
	cout << endl << endl;
	cout << "enter Word:";
}
 void Game() {

	cin >> input;
	for (int j = 0; j <= 5; j++) {
		if (j == 5) {
			holder2 = 0;
			tries -= 1;
			for (int i = 0; i < 5; i++) {
				input[i];
				awnser[i];
				if (input[i] == awnser[i]) {

					cout << input[i] << " =" << " \033[32mRIGHT.\033[0m" << endl;
					holder2++;
								
					if (holder2 == 5) {
						gameover = true;
												
					}
				}
				else {

					cout << input[i] << " =" << " \033[31mWRONG.\033[0m" << endl;
					holder2--;
					if (holder2 < 0)
						holder2 = 0;
					
				}
				if (tries == 0) {
					gameover = true;
					break;
					cout << "Wordle Was: " << awnser;

				}
			}
		}
	}
} 
 int main()
{
	 while (!gameover) {
		 Setup();
		 Game();
	 }
	return 0;
}

