#ifndef TESTING_H
#define TESTING_H

#include <unity.h>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "../../challenge/inc/challenge.hpp"

int solution(const std::vector<int>& dice);

void sample_tests();

void fixed_tests();

void random_tests();

void evaluation_tests();

#endif