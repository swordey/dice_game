#include "../inc/challenge.hpp"

/* 
* The tests will only be available if you provide the correct challengeCode.
* You have to solve the helloworld challenge to get the challenge code for
* this challenge.
*/
char* getChallengeCode()
{
  return "";
}

/*
* Greed is a dice game played with five six-sided dice. Your mission is to write a function, that calculates the total 
* points from 5 dice throws. You will always be given a vector with five six-sided dice values.
*  Three 1's => 1000 points
*  Three 6's =>  600 points
*  Three 5's =>  500 points
*  Three 4's =>  400 points
*  Three 3's =>  300 points
*  Three 2's =>  200 points
*  One   1   =>  100 points
*  One   5   =>   50 point
*
* A single die can only be counted once in each roll. For example, a "5" can only count as part of a triplet 
* (contributing to the 500 points) or as a single 50 points, but not both in the same roll.
*
* Example scoring:
*  Throw       Score
*  ---------   ------------------
*  5 1 3 4 1   50 + 2 * 100 = 250
*  1 1 1 3 1   1000 + 100 = 1100
*  2 4 4 5 4   400 + 50 = 450
*
* INFO: You have to install the following module to make this challenge work: ArduinoSTL by Mike Matera
*       1. Go to PIO Home/Libraries/Search libraries
*       2. Search for 'ArduinoSTL'
*       3. Click on library
*       4. Click Install.
*       5. You are good to go!
*/
int score(const std::vector<int>& dice) {
  // Implement your code here
  return 700;
}