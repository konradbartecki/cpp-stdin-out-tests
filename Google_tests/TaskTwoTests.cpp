//
// Created by Konrad Bartecki on 22/03/2021.
//

#include <gtest/gtest.h>
#include "TaskTwo.cpp"

using namespace std;

TEST(getLongestSequence, Test1){
    string test_input = "22\n22\n22\n22\n3\n3\n3\n2\n-6\n-6\n-6\n0";
    string expected = "Longest sequence: 4 times 22";

    stringstream fake_input(test_input);
    ostringstream fake_output;
    ostringstream fake_result_output;

    TaskTwoResult result = TaskTwo().getLongestSequence(fake_input, fake_output, fake_result_output);

    string actual = fake_result_output.str();
    EXPECT_EQ(expected, actual);
}

TEST(getLongestSequence, Test2){
    string test_input = "-2\n-2\n-2\n31\n31\n31\n31\n31\n17\n6\n6\n6\n0";
    string expected = "Longest sequence: 5 times 31";

    stringstream fake_input(test_input);
    ostringstream fake_output;
    ostringstream fake_result_output;

    TaskTwoResult result = TaskTwo().getLongestSequence(fake_input, fake_output, fake_result_output);

    string actual = fake_result_output.str();
    EXPECT_EQ(expected, actual);
}

TEST(getLongestSequence, Test3){
    string test_input = "-3\n2\n-3\n-3\n2\n-3\n61\n61\n61\n0";
    string expected = "Longest sequence: 3 times 61";

    stringstream fake_input(test_input);
    ostringstream fake_output;
    ostringstream fake_result_output;

    TaskTwoResult result = TaskTwo().getLongestSequence(fake_input, fake_output, fake_result_output);

    string actual = fake_result_output.str();
    EXPECT_EQ(expected, actual);
}