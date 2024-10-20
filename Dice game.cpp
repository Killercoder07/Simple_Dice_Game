#include<iostream>
#include<ctime>
#include<conio.h>
using namespace std;
int main() {
	srand(time(0));
	char Button;
	int Player_1=0, Player_2=0, Player_1_TOTAL = 0, Player_2_TOTAL = 0;
	cout << "\033[93m----------------------------------------------REACH 20 POINTS TO WIN----------------------------------------------------\033[0m\n";
	while (true) {
		cout << "\n\033[95m-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<[Press any Key to roll the dice!! ]>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-<>-\033[0m\n";

		///DICE:
		Player_1 = (rand() % 6) + 1;
		Player_2 = (rand() % 6) + 1;
		Button = _getch();
		cout << "\033[96mPlayer 1's turn: " << Player_1 << endl;
		Button = _getch();
		cout << "Player 2's turn: " << Player_2 << endl<<endl;
		Button = _getch();

		///NOT POSSIBLE MOVE CHECKS:
		if (Player_1_TOTAL + Player_1 > 20 && Player_2_TOTAL + Player_2 < 20) {
			cout << "Player 1's total: " << Player_1_TOTAL <<"  (MOVE NOT POSSIBLE)" << endl;
			cout << "Player 2's total: " << Player_2_TOTAL + Player_2 << endl << endl;
			Player_2_TOTAL = Player_2_TOTAL + Player_2;
			continue;
		}
		else if (Player_2_TOTAL + Player_2 > 20 && Player_1+ Player_1_TOTAL < 20) {
			cout << "Player 1's total: " << Player_1_TOTAL + Player_1 << endl;
			cout << "Player 2's total: " <<Player_2_TOTAL<<"  (MOVE NOT POSSIBLE)" << endl;
			Player_1_TOTAL = Player_1_TOTAL + Player_1;
			continue;
		}
		else if (Player_2_TOTAL + Player_2 > 20 && Player_1 + Player_2_TOTAL > 20) {
			cout << "Player 1's total: " << Player_1_TOTAL <<"  (MOVE NOT POSSIBLE)" << endl;
			cout << "Player 2's total: " << Player_2_TOTAL <<"  (MOVE NOT POSSIBLE)" << endl;
			continue;
		}
	           ///WINNER CHECK:
		       if (Player_1_TOTAL + Player_1 == 20 && Player_2_TOTAL + Player_2 != 20) {
				cout<<"Player 1's Total: 20\n" ;
				cout << "\n                 \033[93m<<<*****-<>-<>-<>-******************************************************-<>-<>-<>-*****>>>\n";
				cout << "                 <<<*****-<>-<>-<>-**************| CONGRATULATIONS! |********************-<>-<>-<>-*****>>>\n";
				cout << "                 <<<*****-<>-<>-<>-**********| PLAYER ONE IS THE WINNER! |***************-<>-<>-<>-*****>>>\n";
				cout << "                 <<<*****-<>-<>-<>-******************************************************-<>-<>-<>-*****>>>\033[0m\n";
				return(0);
		       }
		       else if (Player_2_TOTAL + Player_2 == 20 && Player_1_TOTAL + Player_1 != 20) {
				cout <<"Player 2's total: 20\n";
				cout << "\n                 \033[93m<<<*****-<>-<>-<>-******************************************************-<>-<>-<>-*****>>>\n";
				cout << "                 <<<*****-<>-<>-<>-**************| CONGRATULATIONS! |********************-<>-<>-<>-*****>>>\n";
				cout << "                 <<<*****-<>-<>-<>-**********| PLAYER TWO IS THE WINNER! |***************-<>-<>-<>-*****>>>\n";
				cout << "                 <<<*****-<>-<>-<>-******************************************************-<>-<>-<>-*****>>>\033[0m\n";
				return(0);
		       }
		       else if (Player_1_TOTAL + Player_1 == 20 && Player_2_TOTAL + Player_2 == 20) {
			cout << "Player 1's total: 20 \n Player 2's Total: 20" << "\033[93m----------------------------DRAW----------------------------------\033[0m\n\n";
			return(0);
		       }

        ///CODE CONTINUES:
		if(Player_2_TOTAL + Player_2 < 20 && Player_1 + Player_1_TOTAL < 20) {
				
				cout << "Player 1's total: " << Player_1_TOTAL + Player_1 << endl;
				cout << "Player 2's total: " << Player_2_TOTAL + Player_2 << endl << endl;
				Player_1_TOTAL = Player_1_TOTAL + Player_1;
				Player_2_TOTAL = Player_2_TOTAL + Player_2;
				continue;
		}
	}
}
