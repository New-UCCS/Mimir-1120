# Assignment Description

Lecture: Functions 5: Getting Valid User Input and Functions 6: Changing Parameter Values

Objective: Practice implementing functions for the complete Caesar Cipher program

### Getting Started

Download the Graded Exercise 12 Materials zip file from Canvas and unzip it somewhere on your computer.

Create a new C project named whatever you want in Visual Studio using the Windows Desktop Wizard or in Xcode.

If you're using Visual Studio, add the main.c file from the materials zip file to your project. If you’re using Xcode, Xcode automatically generates a main.c file for you; copy and paste the contents of the main.c file from the materials zip file over the one in your Xcode project.

### Requirements

#### Problem 1 - Refactor the left or right shift user input

Above the `main` function, write the following function prototype:

`char getValidShiftDirection();`

This function gets the character l or the character r from the user.

Below the `main` function, implement the body of the `getValidShiftDirection` function. The code that does this is already implemented in the `main` function, so it makes sense to cut the code from the `main` function and add it to the body of the `getValidShiftDirection` function. You’ll also need to declare a local variable in the function as well to hold the user’s shift response, and you’ll need to return the user’s shift response from the function once they’re provided a valid response. Because the `getValidShiftDirection` function returns a `char`, you'll want to put that returned value into the (already existing) `shiftResponse` variable in the `main` function where you used to have the code you moved into the function. In other words, you should include

`shiftResponse = getValidShiftDirection();`

at that location in the `main` function

Test your code to make sure it still works properly.

#### Problem 2 - Refactor the shift amount user input

Above the `main` function, write the following function prototype:

`int getValidShiftAmount();`

This function gets a shift amount between 1 and 25 inclusive.

At the end of the main.c file, implement the body of the `getValidShiftAmount` function. Make the appropriate changes to call the `getValidShiftAmount` function from the `main` function.

Test your code to make sure it still works properly.

#### Problem 3 - Refactor the message to be encrypted user input

Note: You’ll probably find the Functions 6: Changing Parameter Values lecture useful as you solve this problem.

Above the `main` function, write the following function prototype:

`void getValidMessage(char* message, int messageSize);`

This function gets a valid message to be encrypted. Notice that the parameter is a pointer to a `char`; in the lecture we passed in a pointer to an `int`.

At the end of the main.c file, implement the body of the `getValidMessage` function. As you know from the Arrays and Strings modules, we can treat the message parameter like an array inside the body of the function, so you should be able to (mostly) cut and paste this processing from the main function.

Caution: Remember that using `sizeof` on pointers doesn’t make sense; that’s why we have a `messageSize` parameter for our function. You should use the `messageSize` parameter when you call the `fgets` and `strnlen` functions in your method body.

Since you haven’t had much practice calling functions that change their parameters, it may not be clear to you what code you should include in your main function. Here’s the code:

```
// get message to encrypt
char originalMessage[100];
getValidMessage(&originalMessage,
    sizeof(originalMessage));
int originalMessageLength =
    strnlen(originalMessage, sizeof(originalMessage));
```

I’ve declared and set the `originalMessageLength` variable because that variable is used later in the `main` function.

When I tested my code it WASN’T working properly. I used the debugger to look at the message parameter right before the end of the `getValidMessage` function and discovered that the string had a `\n` character at the end. As your last line of code in the function, replace the `\n` character with a `\0` (null termination) character instead.

Test your code to make sure it still works properly.

#### Problem 4 - Refactor the encryption

Above the `main` function, write the following function prototype:

```
char* encryptMessage(char* message, int messageSize,
    bool leftShift, int shiftAmount);
```

This function encrypts the given message and returns the encrypted message. The return value is a string, but it’s specified as a `char` pointer so we can dynamically allocate memory for the `char` array inside the function body.

At the end of the main.c file, implement the body of the `encryptMessage` function. Don’t forget to return the encrypted message at the end of the function.

Here’s the code you should include to call the encryptMessage function from the `main` function:

```
char* encryptedMessage = encryptMessage(
    originalMessage, originalMessageLength,
    leftShift, shiftAmount);
```

Test your code to make sure it still works properly.

#### Problem 5 - Refactor the decryption

Above the `main` function, write the following function prototype:

```
char* decryptMessage(char* message, int messageSize,
    bool leftShift, int shiftAmount);
```

This function decrypts the given message and returns the decrypted message. The return value is a string, but it’s specified as a `char` pointer so we can dynamically allocate memory for the `char` array inside the function body.

At the end of the main.c file, implement the body of the `decryptMessage` function. Don’t forget to return the encrypted message at the end of the function.

Write the appropriate code to call the `decryptMessage` function from the `main` function.

Test your code to make sure it still works properly.

Whew, you’re done!

The image below shows my output when I enter z, Q, r, 0, 26, 1, bob, BOB; make sure you get the exact same output when you provide the same inputs.

![imageRef](Graded%20Exercise%2012%20Example%20Output.png)

You should of course realize that this is exactly the output you got from the main.c file I gave you in the materials zip file! While that may seem like a bunch of wasted effort on your part, it really wasn't. In this graded exercise, you've refactored the code to be a much better structure, solving small pieces of the problem in functions rather than doing all the work in the `main` function.


### Submitting Your Solution
- Click on the gray box below that says Load Graded Exercise 12: Functional Caesar Cipher in a new window. **(only in Canvas)**
- Click on the link for this graded assignment from the list of Live Coursework and click the green Submit button under Actions on the left on the assignment page. Upload your main.c file by clicking the Choose File button and navigating to it or by dragging that file onto the upload box. Click the green Submit button on the bottom right of the dialog box.
- Once the test case(s) for the assignment have been run (which typically happens pretty quickly), you can check your results for each test case and your overall score at the top right of the Test Cases section. If you’re happy with your results, you’re done.

Note: My call to the getValidMessage function generates warnings on Mimir Classroom; don't worry if your does too, as long as you pass the test cases.

If you need (or want) to improve your score, you can look at the test case results, modify your code as appropriate, and resubmit again. If you click on a specific test case, you can get additional information about the output generated by your submission, the expected output for a correct submission, and the difference between the two outputs (in the Pretty Diff section at the bottom of the dialog box).

*All assignments in the course are set for unlimited submissions, so you can resubmit as many times as you want until the due date/time. The grade you’ll receive for the assignment will be the highest grade you achieved across all your submissions for the assignment.*
<br>

