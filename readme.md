## Basic Cpp program with Google Tests

Now with mocking/injection of fake std input stream, output stream

### Requirements

Write a program reading integers until zero is entered and printing the length of the longest sequence of consecutive numbers of the same value (and this value).

For example, for

      22 22 22 22 3 3 3 2 -6 -6 -6 0

the result should be

      Longest sequence: 4 times 22

for

      -2 -2 -2 31 31 31 31 31 17 6 6 6 0

the result should be

      Longest sequence: 5 times 31

and for

      -3 2 -3 -3 2 -3 61 61 61 0

it should be

      Longest sequence: 3 times 61

Do not use arrays, strings or any other kind of collections.