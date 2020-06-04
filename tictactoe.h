/*
This is a Tic Tac Toe game        
Dhruv Kinger
*/



#ifndef TICTACTOE_H
#define TICTACTOE_H
using namespace std;

class tictactoe{
public:
  tictactoe ();
  bool play (int x, int y, char c);
  char check_win ();
  void out ();
  char swap (char inp);
  void play ();

private:
  char arr[3][3];
};
#endif 
