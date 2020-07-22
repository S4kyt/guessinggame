#include <cstdlib>
#include <ctime>

#include "random.h"

int generateAnswer() //no idea how this works, just copy pasted it. also i think you can tell me a good way to deal with random numbers as it seems like quite the problem for everyone on the internet who are new or is it just me?
{
    int maxNumber = 100;
    int winningAnswer;

    srand(time(0));
    winningAnswer = (rand() % maxNumber) + 1; //doesn't generate shit.

    return winningAnswer;
}