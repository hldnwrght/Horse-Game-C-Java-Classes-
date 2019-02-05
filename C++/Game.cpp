//Honor Pledge: I pledge that I have neither given nor received any help on this assignment
#include <iostream>
#include "Player.h"
#include <ctime>



int main() {
	int i=0, x, y;
	int L1, L2;
	char Ans, m, n;

	while (i < 2) {
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		L1 = 0;
		L2 = 0;
		std::cout << "Welcome to the CSCI 240 game of HORSE!!!\n";

		player * player1 = new player();
		player * player2 = new player();

		do {
			x = player1->Randshot();
			y = player2->Randshot();

			if (x == 2 && x != y) {
				m = player2->sethorse(L2);
				++L2;
				std::cout << "Player #1: Hit Shot!\n";
				std::cout << "Player #2: Missed Shot!\n";
				std::cout << "  Player #2 added a letter '" << m << "'\n";
			}
			else if (y == 2 && y != x) {
				n = player1->sethorse(L1);
				++L1;
				std::cout << "Player #1: Missed Shot!\n";
				std::cout << "Player #2: Hit Shot!\n";
				std::cout << "  Player #1 added a letter '" << n << "'\n";
			}
			else if (x == 2 && y == 2) {
				std::cout << "Player #1: Hit Shot!\n";
				std::cout << "Player #2: Hit Shot!\n";
			}
			else {
				std::cout << "Player #1: Missed Shot!\n";
				std::cout << "Player #2: Missed Shot!\n";
			}
		} while (L1 < 5 && L2 < 5);
		if (L1 < 5) {
			std::cout << "Player 1 Wins :: Player 2 = ";
			player2->gethorse();
		}
		else {
			std::cout << "Player 2 Wins :: Player 1 = ";
			player1->gethorse();
		}

		L1 = 0;
		L2 = 0;
		delete player1;
		delete player2;

		std::cout << "Would you like to play again(Y:N)?\n";
		std::cin >> Ans;
		std::cout << Ans;
	
		if (Ans == 'N' || Ans == 'n') {
			i = 5;
		}
	}
	return 0;
}
