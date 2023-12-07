#include <iostream>

template <typename... T> void ignoreUnused(T &&...) {}

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free
functions. This will be the first project where the code you write will be
compiled and you will be responsible for making sure it compiles before
submitting it for review.


 1) Write down the names of the 6 major primitive types available in C++  here:

                                int
                                float
                                double
                                bool
                                char
                                void

2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration() function on line 59. a) give each variable declaration an
initial value
                                                                - just ignore
wchar_t. you do not need to declare 3 variables of type 'wchar_t'
                                                                - 'void' is a
return type. you do not need to declare 3 variables of type 'void'. b) at the
end of the function, call ignoreUnused once and pass all of your variables to
it. see line 71 for an example

3) Declare 10 free functions
                                each declaration should have a random number of
parameters in the function parameter list. When naming your parameters, choose
names that are relevant to the task implied by the function's name. remember:
Name functions what they do takeDogForWalk(int distanceInYards); Name variables
what they are. int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing
semicolon 5) pass each of your function parameters to the ignoreUnused function
like you did in b) 6) if your function returns something other than void, add
'return { };' at the end of it. 7) provide default values for an arbitrary
number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the
formatting of your 10 functions.  At this point, you might have something that
looks like this: float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar );
return { }; } This does not conform with the coding standard for this course
(check the Readme.MD) and needs to be corrected

9) in the main function at the end:
                                for each of those functions declared,
                                                                a) write out how
the function would look if called with correct arguments b) if the function
returned anything, store it in a local variable via the 'auto' keyword. c) pass
the local variables to ignoreUnused() as you did in 2b) see main() for an
example of this.

10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

// 2)
void variableDeclarations() 
{
  // example:
  int number =
      2; // declaration of a variable named "number", that uses the primitive
         // type 'int', and the variable's initial value is '2'
  int newNumber = 4;
  int largeNumber = 200;
  int smallNumber = 1;
  float floatNumber = 2.2f;
  float largeFloatNumber = 200.2f;
  float smallFloatNumber = 1.1f;
  char goodBye = 'g';
  char hello = 'h';
  char welcome = 'w';
  double doubleNumber = 2.222;
  double largeDoubleNumber = 200.2;
  double smallDoubleNumber = 1.1;
  bool truth = true;
  bool lie = false;
  bool maybe = true;

  ignoreUnused(
      newNumber, largeNumber, smallNumber, floatNumber, largeFloatNumber,
      smallFloatNumber, goodBye, hello, welcome, doubleNumber,
      largeDoubleNumber, smallDoubleNumber, truth, lie,
      maybe); // passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(
    int rentalDuration,
    int carType = 0) // function declaration with random number of arguments, //
                     // arbitrary number of arguments havlue
{
  ignoreUnused(rentalDuration, carType); // passing each function parameter to
                                         // // the ignoreUnused() function
  return {}; // if your function returns something other than void, add 'return
             // {};' at the end of it.
}

/*
1)
*/
float addNumbers(float number1 = 5.0f, float number2 = 10.0f) 
{
  ignoreUnused(number1, number2);
  return {};
};
/*
2)
*/
double subtractNumbers(double number1 = 20.0, double number2 = 15.0) 
{
  ignoreUnused(number1, number2);
  return {};
};
/*
3)
*/
char moveCharacterHor(char left = 'a', char right = 'd') 
{
  ignoreUnused(left, right);
  return {};
}
/*
 4)
 */
char moveCharacterVertically(char up = 'w', char down = 's') 
{
  ignoreUnused(up, down);
  return {};
}
/*
 5)
 */
void playSound(bool sound1 = true, bool sound2 = false, bool sound3 = true) 
{
  ignoreUnused(sound1, sound2, sound3);
}
/*
 6)
 */
void streamVideo(bool video1 = true, bool video2 = false, bool video3 = true) 
{
  ignoreUnused(video1, video2, video3);
}
/*
 7)
 */
bool randomValue(float valueOne = 1.0f, float valueTwo = 2.0f,
                 float valueThree = 3.0f) 
{
  ignoreUnused(valueOne, valueTwo, valueThree);
  return {};
}
/*
 8)
 */
char stringName(char name1, char name2) 
{
  ignoreUnused(name1, name2);
  return {};
}
/*
 9)
 */
double largeValue(double largeValue, double smallValue) 
{
  ignoreUnused(largeValue, smallValue);
  return {};
}
/*
 10)
 */
bool isTrue(bool trueValue, bool falseValue) 
{
  ignoreUnused(trueValue, falseValue);
  return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
                                Make a pull request after you make your first
 commit pin the pull request link and this repl.it link to our DM thread in a
 single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main() 
{
  // example of calling that function, storing the value, and passing it to
  // ignoreUnused at the end of main()
  auto carRented = rentACar(6, 2); // 6 is the first argument (number of days),
                                   // 2 is the second argument (car);

  // 1)
  auto addedNumbers = addNumbers(1.0f, 2.0f);

  // 2)
  auto subtractedNumbers = subtractNumbers(10.0, 5.0);

  // 3)
  auto movedCharacterHor = moveCharacterHor('l', 'r');

  // 4)
  auto movedCharacterVertically = moveCharacterVertically('u', 'd');

  // 5)
  playSound(true, false, true);

  // 6)
  streamVideo(true, false, true);

  // 7)
  auto randomizedValues = randomValue(1.0f, 2.0f, 3.0f);

  // 8)
  auto stringNamed = stringName('a', 'b');

  // 9)
  auto largeValues = largeValue(2.2, 1.1);

  // 10)
  auto isTruish = isTrue(true, false);

  ignoreUnused(carRented, addedNumbers, subtractedNumbers, movedCharacterHor,
               movedCharacterVertically, playSound, streamVideo,
               randomizedValues, stringNamed, largeValues, isTruish);
  std::cout << "good to go!" << std::endl;
  return 0;
}
