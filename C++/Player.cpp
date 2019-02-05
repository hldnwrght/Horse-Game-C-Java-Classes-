//Honor Pledge: I pledge that I have neither given nor received any help on this assignment
#include <iostream>
#include "Player.h"
#include <string.h>
#include <ctime>
#include <cstdlib>
char GAME[] = {"HORSE"};
player::player() {
	if(!this->init){
	this->init=true;
	srand(time(0));
	}
	strcpy(this->horse, " ");
	
}

int player::Randshot() {
	int N;
	N = rand() % 2 + 1;
	return N;
}

char player::sethorse(int n) {
	if (n == 0) {
		strcpy(this->horse, &GAME[n]);
	}
	else {
		strcat(this->horse, &GAME[n]);
	}
	return this->horse[n];
}
void player::gethorse() {
	int p=0;
	while (p < 5) {
		std::cout << this->horse[p];
		p++;
	}
	std::cout << "\n";
}
player::~player(){

}
