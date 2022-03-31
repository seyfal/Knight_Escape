# Knight_Escape
Knight Escape game 

Create a board filled with chess knights, in which there is a single white knight in the bottom left space, the top right space is blank, and the rest of the spaces each contain a black knight. Allow the user to move the knights, where the objective of the game is to get the white knight to the empty square in the smallest amount of valid moves.

The knight can only move in the way that it does during a traditional chess game. This means that a knight can only move in a valid L-shape, following one of these two paths:
two squares in a horizontal direction, and one in a vertical direction OR 
two squares in a vertical direction, and one in a horizontal direction.

Sample output of this program is shown at the bottom of this page. Be sure to read the Notes section of this page very carefully.

# Notes:

You should break up your program into pieces using functions.  

The board must be displayed and manipulated by using 25 separate variables representing the 25 locations on the board. You may not use arrays or vectors or C++ string variables to represent or manipulate the board as a whole. 

You may (but don't have to) make your program variables global variables. 

Program inputs use an input buffer so your program should work correctly whether inputs are given one at a time or all pasted in when prompted for the first input.  You don't have to do anything special for this as long as you are using cin into integer variables to store your user input.

When prompted for a move the user might enter 'x' or 'X' to exit the program, 'r' or 'R' to reset the board, or 'm' or 'M' to make a move. Your program should be able to handle both uppercase and lowercase inputs.

Displaying Chess Knight Pieces: The program uses Unicode characters to print an image of a white or black knight in each position on the board. This has been given to you in the starter code by means of the following lines:
const string WhiteKnight = "\u2658";		// White knight character
const string BlackKnight = "\u265E";		// Black knight character

To print these characters, see the sample code below:
	cout << WhiteKnight;
which results in the following output:
		♘
	
Important: Depending on your programming environment, these characters may not print correctly. They may show up as other characters or as a question mark. You might be able to configure your IDE to be able to handle these characters. However, it does work in Zybooks, and will be expected to match the test cases. To get around this, you could change the characters in your IDE (perhaps the white knight could be 'X' and the black knight could be 'O', but you can pick any characters you would like). Remember to change the characters back when you run your program in Zybooks! Alternatively, you could work on this program in Zybooks itself.

Scoring Mechanism: The goal of the game is to try to help the knight escape in the smallest amount of moves possible. To motivate this, the game keeps track of a score, which decreases as the user makes more moves. Invalid moves result in a score penalty as well. See the samples of output shown on this page to determine how the score should be used and displayed throughout the game.

	The score starts at 500.
	The current score should be displayed with each move.
	If the user makes any type of invalid move, the score decreases 10 points.
	If the user makes a valid move, the score decreases 5 points.
	Once the score becomes zero or negative, the game automatically ends. See Note 7.10 below for the message that should be displayed when this occurs.
	Output Messages:  See the samples of output shown on this page to make sure your output exactly matches the spacing and blank lines needed to pass the test cases.
	No matter the input or program behavior, at the very end your program should display:  Thank you for playing!
	When the user enters 'x' or 'X' to exit the program, your program should display: Exiting...
	When the user enters 'r' or 'R' to restart the program, your program should display:    *** Restarting
	When the source position is not a valid position on the board, your program should display: The source position should be a valid position on the board (1-25). Try again. 
	When the destination position is not a valid position on the board, your program should display: The destination position should be a valid position on the board (1-25). Try again. 
	When the source position does not contain a knight, your program should display: The source position should have a knight. Try again. 	
	When the destination position is not empty, your program should display: The destination position should be empty. Try again.
	When the knight is not being moved in a valid L-shape, your program should display: Invalid move. Knights can only move in an L-shape. Try again.
	When the user wins the game, your program should display an extra blank line and then the message: Congratulations, you did it! 
	When the user reaches a score less than or equal to zero, your program should display the score, an extra blank line and then the message: You have run out of moves. Try to do better next time!
	Don't forget to review the program grading criteria given in the syllabus.  Once you've passed all the tests in Zybooks don't forget to submit your program into Gradescope so you can earn execution points.
