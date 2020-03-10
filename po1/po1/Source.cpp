#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct info {
	int seeds[12];
	int owner[12];
	//vector<int> seeds;
	//vector<int> owner;
};

void redrawGameWindow(struct info board) {
	cout << "1   2   3   4   5   6\n" << endl;
	for (int i = 0; i < 6; i++)
		cout << board.seeds[i] << "   ";
	cout << endl;
	for (int i = 6; i < 12; i++)
		cout << board.seeds[i] << "   ";
	cout << "\n\n7   8   9   10  11  12" << endl;

} 
void statementMachine(struct info board) {
	enum state { INIT, P1, P2, FINI };
	enum state st = INIT;
	bool end = false;
	int cell;
	int score1 = 0, score2 = 0;
	while (1) {
		switch (st) {
			case INIT:
				redrawGameWindow(board);
				st = P1;
				break;
			case P1:
				//player1 code
				cout << "Choose the seeds you want to sow" << endl;
				cin >> cell;
				cell -= 1;
				for (int i = 1; i <= board.seeds[cell]; i++) {	//i starts in 1 because seeds start spreading from the next one
					board.seeds[(cell + i)%12]++;
					if (board.seeds[(cell + i) % 12] == 2 || board.seeds[(cell + i) % 12] == 3) {
						score1 += board.seeds[(cell + i) % 12];
						board.seeds[(cell + i) % 12] = 0;
					}
				}
				board.seeds[cell] = 0;
					
				break;
			case P2:
				// player 2 code
				st = FINI;
				break;
			case FINI:
				//...
				st = INIT;
				break;
		}
	}
}


int main() {
	cout << "Welcome to the Oware Game" << endl;
	cout << "Choose what you wanna do next" << endl;
	cout << "(1) Play \n(2) Rules\n(3) Exit" << endl;
	int answer1;
	cin >> answer1;

	struct info board;

	for (int i = 0; i < 12; i++)
		board.seeds[i] = 4;
	for (int i = 0; i < 12; i++)
		if (i <= 5)
			board.owner[i] = 1;
		else
			board.owner[i] = 2;
	/*
	for (int i = 0; i < 6 ; i++)
		board.owner.push_back(2);
	for (int n : board.seeds)
		cout << n <<  " ";
	for (int j : board.owner)
		cout << j << " ";
*/
	if (answer1 == 1)
		statementMachine(board);
	else if (answer1 == 2)
		//check rules
		return 0;
	else
		//exit
		return 0;
		

	
	return 0;
}