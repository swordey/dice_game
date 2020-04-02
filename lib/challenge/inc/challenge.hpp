#ifndef CHALLENGE_H
#define CHALLENGE_H


#include <Arduino.h>
#include <vector>

/*
* Please only edit the challenge.cpp file.
*/
char* getChallengeCode();

int score(const std::vector<int>& dice);

#endif