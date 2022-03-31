/*--------------------------------------------
   Program 2: Knight Escape
   The objective of this game is to get the white knight to the empty
    square in the upper right-hand corner of the board.
    
    The knight can only move in the way that it does during a traditional
    chess game. This means that a knight can only move in a valid L-shape
    (two squares in a horizontal direction, then one in a vertical direction OR
    two squares in a vertical direction, then one in a horizontal direction).
               
   Course: CS 141, Spring 2022
   System: Mac OS Xcode 13.1
   Author: Seyfal Sultanov
    
 ---------------------------------------------*/

#include <iostream>        // for input and output
#include <cctype>           // for toupper()
using namespace std;

// Global variables for the pieces are allowed for this program,
// but will generally not be allowed in the future.
// You will likely want to declare global variables at least for the 25 board positions.
// ...

// Characters of the pieces to be used on the board
// Note that these are global constants, so their values cannot be changed.
const string WhiteKnight = "\u2658";        // White knight character
const string BlackKnight = "\u265E";        // Black knight character
const string BlankPosition = " ";            // Blank position character

int fromPosition, toPosition, score = 500, moveNumber = 1;
char menuOption;
string p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25;

//--------------------------------------------------------------------------------
// Display welcome message, introducing the user to the program and
// describing the instructions for the game
void displayWelcomeMessage()
{
    cout << "Program 2: Knight Escape \n"
         << "CS 141, Spring 2022, UIC \n"
         << " \n"
         << "The objective of this puzzle is to get the white knight "
         << "up to the empty square in the top right corner of the board. "
         << "Use standard knight moves from a traditional chess game, "
         << "where a knight moves in an L-shape. \n"
         << "This means that a knight can only move either "
         << "1) two squares in a horizontal direction, then one in a vertical direction, OR "
         << "2) two squares in a vertical direction, then one in a horizontal direction."
         << " \n"
         << "Your score decreases by 5 with each valid move, and by 10 with each invalid move. \n"
         << "Try to complete the puzzle with the smallest number of valid moves!"
         << endl;
}//end displayWelcomeMessage()

// ----------------------------------------------------------------------
// Display the current board, along with the corresponding positions
// This function makes use of global variables p1..p25, which represent
// each of the positions on the board
void displayBoard()
{
    cout <<"\n"
         <<                          "    Board   " <<                               "      Position \n"
         << " " <<  p1 << " " <<  p2 << " " <<  p3 << " " <<  p4 << " " <<  p5 << "     1  2  3  4  5 \n"
         << " " <<  p6 << " " <<  p7 << " " <<  p8 << " " <<  p9 << " " << p10 << "     6  7  8  9 10 \n"
         << " " << p11 << " " << p12 << " " << p13 << " " << p14 << " " << p15 << "    11 12 13 14 15 \n"
         << " " << p16 << " " << p17 << " " << p18 << " " << p19 << " " << p20 << "    16 17 18 19 20 \n"
         << " " << p21 << " " << p22 << " " << p23 << " " << p24 << " " << p25 << "    21 22 23 24 25 \n"
         << endl;
} //end displayBoard()

int CheckValueRange(int topos) {
  if (topos >= 1 && topos <= 25) {
    return true;
  } else {
    return false;
  }
}

int checkKnight(int position) {
  switch (position) {
  case (1):
    if (p1 == BlackKnight || p1 == WhiteKnight) {
      return true;
    } else {
      return false;
    }
    case (2):
      if (p2 == BlackKnight || p2 == WhiteKnight) {
        return true;
      } else {
        return false;
      }
      case (3):
        if (p3 == BlackKnight || p3 == WhiteKnight) {
          return true;
        } else {
          return false;
        }
        case (4):
          if (p4 == BlackKnight || p4 == WhiteKnight) {
            return true;
          } else {
            return false;
          }
          case (5):
            if (p5 == BlackKnight || p5 == WhiteKnight) {
              return true;
            } else {
              return false;
            }
            case (6):
              if (p6 == BlackKnight || p6 == WhiteKnight) {
                return true;
              } else {
                return false;
              }
              case (7):
                if (p7 == BlackKnight || p7 == WhiteKnight) {
                  return true;
                } else {
                  return false;
                }
                case (8):
                  if (p8 == BlackKnight || p8 == WhiteKnight) {
                    return true;
                  } else {
                    return false;
                  }
                  case (9):
                    if (p9 == BlackKnight || p9 == WhiteKnight) {
                      return true;
                    } else {
                      return false;
                    }
                    case (10):
                      if (p10 == BlackKnight || p10 == WhiteKnight) {
                        return true;
                      } else {
                        return false;
                      }
                      case (11):
                        if (p11 == BlackKnight || p11 == WhiteKnight) {
                          return true;
                        } else {
                          return false;
                        }
                        case (12):
                          if (p12 == BlackKnight || p12 == WhiteKnight) {
                            return true;
                          } else {
                            return false;
                          }
                          case (13):
                            if (p13 == BlackKnight || p13 == WhiteKnight) {
                              return true;
                            } else {
                              return false;
                            }
                            case (14):
                              if (p14 == BlackKnight || p14 == WhiteKnight) {
                                return true;
                              } else {
                                return false;
                              }
                              case (15):
                                if (p15 == BlackKnight || p15 == WhiteKnight) {
                                  return true;
                                } else {
                                  return false;
                                }
                                case (16):
                                  if (p16 == BlackKnight || p16 == WhiteKnight) {
                                    return true;
                                  } else {
                                    return false;
                                  }
                                  case (17):
                                    if (p17 == BlackKnight || p17 == WhiteKnight) {
                                      return true;
                                    } else {
                                      return false;
                                    }
                                    case (18):
                                      if (p18 == BlackKnight || p18 == WhiteKnight) {
                                        return true;
                                      } else {
                                        return false;
                                      }
                                      case (19):
                                        if (p19 == BlackKnight || p19 == WhiteKnight) {
                                          return true;
                                        } else {
                                          return false;
                                        }
                                        case (20):
                                          if (p20 == BlackKnight || p20 == WhiteKnight) {
                                            return true;
                                          } else {
                                            return false;
                                          }
                                          case (21):
                                            if (p21 == BlackKnight || p21 == WhiteKnight) {
                                              return true;
                                            } else {
                                              return false;
                                            }
                                            case (22):
                                              if (p22 == BlackKnight || p22 == WhiteKnight) {
                                                return true;
                                              } else {
                                                return false;
                                              }
                                              case (23):
                                                if (p23 == BlackKnight || p23 == WhiteKnight) {
                                                  return true;
                                                } else {
                                                  return false;
                                                }
                                                case (24):
                                                  if (p24 == BlackKnight || p24 == WhiteKnight) {
                                                    return true;
                                                  } else {
                                                    return false;
                                                  }
                                                  case (25):
                                                    if (p25 == BlackKnight || p25 == WhiteKnight) {
                                                      return true;
                                                    } else {
                                                      return false;
                                                    }

  }
}

int CheckTopos(int frompos, int topos) {
  switch (frompos) {
  case (1):
    if (topos == 8 || topos == 12) {
      return true;
    } else {
      return false;
    }
    case (2):
      if (topos == 9 || topos == 11 || topos == 13) {
        return true;
      } else {
        return false;
      }
      case (3):
        if (topos == 6 || topos == 12 || topos == 14 || topos == 10) {
          return true;
        } else {
          return false;
        }
        case (4):
          if (topos == 7 || topos == 15 || topos == 13) {
            return true;
          } else {
            return false;
          }
          case (5):
            if (topos == 8 || topos == 14) {
              return true;
            } else {
              return false;
            }
            case (6):
              if (topos == 3 || topos == 13 || topos == 17) {
                return true;
              } else {
                return false;
              }
              case (7):
                if (topos == 4 || topos == 14 || topos == 18 || topos == 16) {
                  return true;
                } else {
                  return false;
                }
                case (8):
                  if (topos == 5 || topos == 15 || topos == 1 || topos == 11 || topos == 17 || topos == 19) {
                    return true;
                  } else {
                    return false;
                  }
                  case (9):
                    if (topos == 2 || topos == 12 || topos == 18 || topos == 20) {
                      return true;
                    } else {
                      return false;
                    }
                    case (10):
                      if (topos == 3 || topos == 13 || topos == 19) {
                        return true;
                      } else {
                        return false;
                      }
                      case (11):
                        if (topos == 2 || topos == 22 || topos == 8 || topos == 18) {
                          return true;
                        } else {
                          return false;
                        }
                        case (12):
                          if (topos == 9 || topos == 19 || topos == 21 || topos == 23 || topos == 3 || topos == 1) {
                            return true;
                          } else {
                            return false;
                          }
                          case (13):
                            if (topos == 2 || topos == 4 || topos == 6 || topos == 10 || topos == 16 || topos == 20 || topos == 22 || topos == 24) {
                              return true;
                            } else {
                              return false;
                            }
                            case (14):
                              if (topos == 3 || topos == 5 || topos == 7 || topos == 17 || topos == 23 || topos == 25) {
                                return true;
                              } else {
                                return false;
                              }
                              case (15):
                                if (topos == 8 || topos == 24 || topos == 4 || topos == 18) {
                                  return true;
                                } else {
                                  return false;
                                }
                                case (16):
                                  if (topos == 7 || topos == 13 || topos == 23) {
                                    return true;
                                  } else {
                                    return false;
                                  }
                                  case (17):
                                    if (topos == 8 || topos == 6 || topos == 14 || topos == 24) {
                                      return true;
                                    } else {
                                      return false;
                                    }
                                    case (18):
                                      if (topos == 11 || topos == 15 || topos == 21 || topos == 25 || topos == 7 || topos == 9) {
                                        return true;
                                      } else {
                                        return false;
                                      }
                                      case (19):
                                        if (topos == 8 || topos == 10 || topos == 12 || topos == 22) {
                                          return true;
                                        } else {
                                          return false;
                                        }
                                        case (20):
                                          if (topos == 13 || topos == 23 || topos == 9) {
                                            return true;
                                          } else {
                                            return false;
                                          }
                                          case (21):
                                            if (topos == 18 || topos == 12) {
                                              return true;
                                            } else {
                                              return false;
                                            }
                                            case (22):
                                              if (topos == 11 || topos == 13 || topos == 19) {
                                                return true;
                                              } else {
                                                return false;
                                              }
                                              case (23):
                                                if (topos == 16 || topos == 20 || topos == 12 || topos == 14) {
                                                  return true;
                                                } else {
                                                  return false;
                                                }
                                                case (24):
                                                  if (topos == 17 || topos == 13 || topos == 15) {
                                                    return true;
                                                  } else {
                                                    return false;
                                                  }
                                                  case (25):
                                                    if (topos == 18 || topos == 14) {
                                                      return true;
                                                    } else {
                                                      return false;
                                                    }
  }
}

void resetToDefault() {
  p1 = p2 = p3 = p4 = p6 = p7 = p8 = p9 = p10 = p11 = p12 = p13 = p14 = p15 = p16 = p17 = p18 = p19 = p20 = p22 = p23 = p24 = p25 = BlackKnight;
  p5 = BlankPosition;
  p21 = WhiteKnight;
  moveNumber = 1;
  score = 500;
}

string intChanger(int position) {
  switch (position) {
  case (1):
    return p1;
  case (2):
    return p2;
  case (3):
    return p3;
  case (4):
    return p4;
  case (5):
    return p5;
  case (6):
    return p6;
  case (7):
    return p7;
  case (8):
    return p8;
  case (9):
    return p9;
  case (10):
    return p10;
  case (11):
    return p11;
  case (12):
    return p12;
  case (13):
    return p13;
  case (14):
    return p14;
  case (15):
    return p15;
  case (16):
    return p16;
  case (17):
    return p17;
  case (18):
    return p18;
  case (19):
    return p19;
  case (20):
    return p20;
  case (21):
    return p21;
  case (22):
    return p22;
  case (23):
    return p23;
  case (24):
    return p24;
  case (25):
    return p25;
  }
}
void ChangePosition(int from, int to) {
  string temp;
  switch (from) {
  case (1):
    temp = p1;
    p1 = intChanger(to);
    break;
  case (2):
    temp = p2;
    p2 = intChanger(to);
    break;
  case (3):
    temp = p3;
    p3 = intChanger(to);
    break;
  case (4):
    temp = p4;
    p4 = intChanger(to);
    break;
  case (5):
    temp = p5;
    p5 = intChanger(to);
    break;
  case (6):
    temp = p6;
    p6 = intChanger(to);
    break;
  case (7):
    temp = p7;
    p7 = intChanger(to);
    break;
  case (8):
    temp = p8;
    p8 = intChanger(to);
    break;
  case (9):
    temp = p9;
    p9 = intChanger(to);
    break;
  case (10):
    temp = p10;
    p10 = intChanger(to);
    break;
  case (11):
    temp = p11;
    p11 = intChanger(to);
    break;
  case (12):
    temp = p12;
    p12 = intChanger(to);
    break;
  case (13):
    temp = p13;
    p13 = intChanger(to);
    break;
  case (14):
    temp = p14;
    p14 = intChanger(to);
    break;
  case (15):
    temp = p15;
    p15 = intChanger(to);
    break;
  case (16):
    temp = p16;
    p16 = intChanger(to);
    break;
  case (17):
    temp = p17;
    p17 = intChanger(to);
    break;
  case (18):
    temp = p18;
    p18 = intChanger(to);
    break;
  case (19):
    temp = p19;
    p19 = intChanger(to);
    break;
  case (20):
    temp = p20;
    p20 = intChanger(to);
    break;
  case (21):
    temp = p21;
    p21 = intChanger(to);
    break;
  case (22):
    temp = p22;
    p22 = intChanger(to);
    break;
  case (23):
    temp = p23;
    p23 = intChanger(to);
    break;
  case (24):
    temp = p24;
    p24 = intChanger(to);
    break;
  case (25):
    temp = p25;
    p25 = intChanger(to);
    break;
  }
  switch (to) {
  case (1):
    p1 = temp;
    break;
  case (2):
    p2 = temp;
    break;
  case (3):
    p3 = temp;
    break;
  case (4):
    p4 = temp;
    break;
  case (5):
    p5 = temp;
    break;
  case (6):
    p6 = temp;
    break;
  case (7):
    p7 = temp;
    break;
  case (8):
    p8 = temp;
    break;
  case (9):
    p9 = temp;
    break;
  case (10):
    p10 = temp;
    break;
  case (11):
    p11 = temp;
    break;
  case (12):
    p12 = temp;
    break;
  case (13):
    p13 = temp;
    break;
  case (14):
    p14 = temp;
    break;
  case (15):
    p15 = temp;
    break;
  case (16):
    p16 = temp;
    break;
  case (17):
    p17 = temp;
    break;
  case (18):
    p18 = temp;
    break;
  case (19):
    p19 = temp;
    break;
  case (20):
    p20 = temp;
    break;
  case (21):
    p21 = temp;
    break;
  case (22):
    p22 = temp;
    break;
  case (23):
    p23 = temp;
    break;
  case (24):
    p24 = temp;
    break;
  case (25):
    p25 = temp;
    break;
  }
  displayBoard();
}
// ----------------------------------------------------------------------
// Main() function of the program, containing the loop that controls
// game play
int main() {

  displayWelcomeMessage();
  resetToDefault();

  // Set board values to the default starting position
  // ...

  displayBoard();

  // Loop that controls game play
  while (score > 0) {
    cout << "Current score:" << score << endl;
    cout << moveNumber << ". "
             << "Enter one of the following: \n"
             << "  - M to move a knight from one position to another, \n"
             << "  - R to reset the board back to the beginning, or \n"
             << "  - X to exit the game. \n"
             << "Your choice -> ";
        cin >> menuOption;
        menuOption = toupper(menuOption); // convert user input to uppercase

    // If the user entered 'X' to exit,
    // break out of this loop that controls game play
    // ...

    if (menuOption == 'X') {
      cout << "Exiting..." << endl;
      break;
    }
    // If the user entered 'R' to reset,
    // reset the board back to the beginning
    // ...
    if (menuOption == 'R') {
      cout << "   *** Restarting";
      resetToDefault();
      displayBoard();
      continue;
    }

    // If the user entered 'M' to move a knight,
    // ask for the position of the knight to be moved
    // ...
    if (menuOption == 'M') {
      cout << "Enter the positions from and to, separated by a space (e.g. 14 5 to move the knight in position 14 to position 5): " << endl;
      cin >> fromPosition >> toPosition;
      cout << "You have chosen to move a knight from position " << fromPosition << " to position " << toPosition << "." << endl;
      // Check that FROM position is valid, i.e. within 1-25
      if (CheckValueRange(fromPosition) == false) {
        score -= 10;
        cout << "The source position should be a valid position on the board (1-25). Try again." << endl;
      }
      // Check that to position is valid, i.e. within 1-25
      else if (CheckValueRange(toPosition) == false) {
        score -= 10;
        cout << "The destination position should be a valid position on the board (1-25). Try again." << endl;
      }
      // Check that the source position has a knight
      else if (checkKnight(fromPosition) == false) {
        score -= 10;
        cout << "The source position should have a knight. Try again." << endl;
      }
      // Check that the destination position is empty
      else if (checkKnight(toPosition) == true) {
        score -= 10;
        cout << "The destination position should be empty. Try again." << endl;
      }
      // Check that the move is valid - knights can only move in an L-shape
      else if (CheckTopos(fromPosition, toPosition) == false) {
        score -= 10;
        cout << "Invalid move. Knights can only move in an L-shape. Try again." << endl;
      }
      // Make the move and update the board
      else {
        score -= 5;
        moveNumber += 1;
        ChangePosition(fromPosition, toPosition);
        if (p5 == WhiteKnight) {
          cout << "Congratulations, you did it!" << endl;
          break;
        }
      }
    }
  }
  if (score <= 0) {
    cout << "Current score:" << score << endl;
    cout << endl << "You have run out of moves. Try to do better next time!" << endl;
  }
  // end loop for game play

  // Check for a win
  // ...

  cout << "Thank you for playing!" << endl;

  return 0;
}
