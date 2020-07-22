#include <iostream>

#include "random.h"

//you pick random number between 0-100. asks user is the number smaller or bigger than given answer. loop until found

//user is asked for input
//user enters input
//check to see if input is correct - if not restart the cycle
//if user gets correct answer the cycle ends... duh

//i think its also bad practice to put new functions before main? i mean main should be just a main most of the time so idk, please talk this through with me

int main()
{
    int numberInput;
    bool gameIsRunning = true;

    int winningNumber = generateAnswer(); // generate winning condition before anything else

    do
    {
        if (numberInput >= 0 && numberInput <= 100 ) //i know i made a mistake here, i also know you explained why its bad, but i forgot since then
        {
            std::cout << "The winner number is: " + winningNumber << std::endl;
            std::cout << "Please pick a number between 0-100:" << std::endl;
            std::cin >> numberInput;
            std::cout << "Your answer was: " + numberInput << std::endl;

            if (numberInput == winningNumber)
            {
                std::cout << "Congratulations! You won! The correct answer was:" + winningNumber << std::endl;
                gameIsRunning = false;
            }

            else if (numberInput < winningNumber)
            {
                std::cout << "Your answer's value was below the solution." << std::endl;
            }

            else if (numberInput > winningNumber)
            {
                std::cout << "Your answer's value was above the solution." << std::endl;
            }

            else
            {
                std::cout << "Wrong answer! Try again!" << std::endl;
            }
        }

        else
        {
            std::cout << "Your entered answer isn't between 0-100 or you've entered something else other than a number. Please try again." <<std::endl;
        }

    } while (gameIsRunning == true);


    return 0;
}

//another problem with my personality is that i dont break down a big problem, i never do. i just go at it head first like some dum dum
//and i also just jump between smaller problems while coding and not just focus on 1 specific part until its finished and ready to be deployed