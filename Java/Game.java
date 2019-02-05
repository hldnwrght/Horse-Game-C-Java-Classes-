//Honor Pledge: I pledge that I have neither given nor received any help on this assignment
import java.io.*;
import java.util.*;

public class Game
{
	public static void main(String[] args){
	int i=0, x, y, L1=0, L2=0;
	char Ans, m, n;
	
	Scanner reader = new Scanner(System.in);
	while(i < 2){
		Player player1 = new Player();
		Player player2 = new Player();
		System.out.println("Welcome to the CSCI 240 game of HORSE!!!");
		do{
			x = player1.getshot();
			y = player2.getshot();
			
			if (x == 2 && x != y) {
				m = player2.sethorse(L2);
				++L2;
				System.out.println("Player #1: Hit Shot!");
				System.out.println("Player #2: Missed Shot!");
				System.out.println("  Player #2 added a letter '" + m + "'");
				}
			else if (y == 2 && y != x) {
				n = player1.sethorse(L1);
				++L1;
				System.out.println("Player #1: Missed Shot!");
				System.out.println("Player #2: Hit shot!");
				System.out.println("  Player #1 added a letter '" + n + "'");
				}
			else if (x == 2 && y == 2) {
				System.out.println("Player #1: Hit Shot!");
				System.out.println("Player #2: Hit Shot!");
			}
			else{
				System.out.println("Player #1: Missed Shot!");
				System.out.println("Player #2: Missed Shot!");
			}
		}
		while(L1 < 5 && L2 < 5);
		if (L1 < 5) {
			System.out.println("Player 2 Wins :: Player 1 = HORSE");
		}
		else if (L2 < 5) {
			System.out.println("Player 1 Wins :: Player 2 = HORSE");
		}
		L1 = 0;
		L2 = 0;
		System.out.println("Would you like to play again(Y:N)?");
		Ans = reader.next().charAt(0);
		if (Ans == 'N' || Ans == 'n') {
		i = 5;
		}
	}
  }
}