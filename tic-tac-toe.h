#ifndef TIC-TACT-TOE_H
#define TIC-TAC-TOE_H

#include <iostream.h>
#include <string.h>

using namespace std;

//player class to represent player in the game
class Player{
  //player attributes
  private:
	char symbol;
	string name;
   //constructor
   public:
	Player(char sym = 'X', string n = "Player X");

	//getter methods
	char getSymbol() const;
	string getName() const;
};

//board class to represent the game board
class Board{
  //board attributes
  private:
	char grid[3][3]
	int filledCells;

  //constructor
  public:
	Board();
	
	//board functions
	void drawBoard() const;
   	bool isValidMove(int row, int col) const;
    	void makeMove(int row, int col, char symbol);
    	bool checkWin(char symbol) const;
    	bool isFull() const;
    	int getFilledCellsCount() const;
};

//tic tac toe classe to manage game logic
class TicTacToe{
  //class attributes
  private:
	Board board;
	Player players[2];
	int currentPlayerIndex;

  //contructor
  public:
	TicTacToe();
	
	//functions
	Player& getCurrentPlayer();
    	void switchTurn();
    	void play();	
};

#endif TIC-TAC-TOE_H
