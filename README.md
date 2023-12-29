# lottery-numbers
COP 3330 Spring 2023 Assignment 1 Lottery Numbers

Assignment Description:

The program will prompt the user for the following information:
The number of values to print out ranging from 3 to 7 (inclusive). Any values outside that range must be rejected and the user prompted to enter in correct values.
The range of random numbers to consider. This will be the number of possible values to be selected.  This value will range from 1-45  to 1-70 inclusive.  You need only prompt for the last number since all lottery values will start with 1.    Any values outside that range will be rejected and the user prompted to enter the correct values.
The number of tickets that you wish to generate from 1 to 100 inclusive. Any value outside the range will be rejected and the user prompted to enter the correct value.
Once a number is selected in cannot be selected again. You must have some method of avoiding duplicate numbers. 
You can assume that valid integers will be entered so you won’t need to check for invalid characters or converting numbers.
Output
Echo the information that the user input.
Number of numbers ( number between 3 and 7 inclusive)
Range of Values ( 1 to the largest value)
Number of ticket guesses (number of tickets)
Odds of winning. To estimate the odds of winning you use a formula that uses the highest value and the number of numbers.   So, if you wanted 6 numbers with a maximum value of 55 you would calculate the odds at:  N! / (K! * (N-K)!   where N is the highest number and K is the number of balls selected.     55*54*53*52*51*50/ (1*2*3*4*5*6) =  1 in 28,989,675



Sample Run:
 Enter in the number of balls or numbers you wish to pick from.

The number must be between 3 and 7: 7

Enter in the largest number in the lottery. 

The number must be between 45 - 70:  55

Enter the number of tickets 1-100 inclusive: 25

 

You will select 7 numbers

The numbers will range from 1 to 55

The odds are 1 in 202927725

 

YOUR LOTTERY SELECTIONS ARE:  

34 38 47 18 30  2 27

26 46 48 21  7 11 13

42 37 40 51 14 18 27

47 28 18 38  6 37 19

44  2 39 26 35  1 55

37 14 25  6  4 35 12

 1 34 40 37  5 36 38

22 49 29 53 12 41 34

17 29 23 55 41  2 27

25 55 38 39  5 41  4

29 38 43 10 30 47 51

 4  8 32  1 19 17 22

35 33 44 34  5 32 20

32  2  6 14 40 10 42

31 13 15 55 43 24 29

39 16 25 42 23 43 30

28  4 38 49 23 26 14

28 44 20  4 45 25 17

16 34  3 46 17 33  8

28  6 46 30 17 20 52

 4 36 11  8 18 17 30

17 44 18 36 47 50 51

52 12 40 30 32 44  7

39 16 12 17 45 23 28

19  3 38 13  7 28 30

 GOOD LUCK
