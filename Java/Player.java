//Honor Pledge: I pledge that I have neither given nor received any help on this assignment
import java.io.*;
import java.util.*;


public class Player
{
	private char[] horse; 
	private int shot;
	private Random rand = new Random();
	public static char[] WORD = {'H', 'O', 'R', 'S', 'E'};
	
	public Player()
	{
		this.horse = new char[5];
	}
	public int getshot(){
		this.shot= rand.nextInt(2)+1;
		return this.shot;
	}
	void gethorse(){
		int i=0;
		while(i < 5){
			System.out.print(this.horse[i]);
			i++;
		}
	}
	char sethorse(int n){
		this.horse[n] = WORD[n];
		return this.horse[n];
	}
}