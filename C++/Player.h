//Honor Pledge: I pledge that I have neither given nor received any help on this assignment
#ifndef PLAYER_H
#define PLAYER_H
 
class player
{
private:
	char horse[5];
	bool init;
public:
	//Constructors
	player();
	void gethorse();
	char sethorse(int n);
	int Randshot();
	~player();
};
#endif
