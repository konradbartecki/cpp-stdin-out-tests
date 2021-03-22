//
// Created by Konrad Bartecki on 22/03/2021.
//

#include "TaskTwoResult.h"
#include <iostream>
using namespace std;

class TaskTwo { ;
public:
    TaskTwo() {

    }

    TaskTwoResult getLongestSequence(istream &std_input,
                                     ostream &std_output,
                                     ostream &result_output) {
        int largestToken = 0;
        int largestTokenOccurences = 0;
        int currentToken = 0;
        int currentOccurences = 0;

        std_output << "Please enter an integer value or enter 0 to stop" << endl;

        while (true) {
            int token = 0;
            std_output << "Enter value:";
            std_input >> token;
            if (token == 0) {
                result_output << "Longest sequence: " << largestTokenOccurences << " times " << largestToken;
                return {
                    largestToken,
                    largestTokenOccurences
                };
            }

            const bool isNewToken = token != currentToken;
            if (isNewToken) {
                currentToken = token;
                currentOccurences = 1;
            } else {
                currentOccurences++;
            }

            if (currentOccurences > largestTokenOccurences) {
                largestTokenOccurences = currentOccurences;
                largestToken = currentToken;
            }
        };
    }
};