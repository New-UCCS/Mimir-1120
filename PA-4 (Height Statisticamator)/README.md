# Assignment Description

In this assignment, you'll be implementing a variety of functions to decompose a large programming problem into smaller sub-problems. Here's the large problem: Read in how many heights the user wants to enter (1 to 100), then read in that many heights (in integer inches, 1 to 96). Calculate the average height and find the minimum and maximum heights in the heights the user entered. Print the average height (to 2 decimal places), minimum height, and maximum height.

### Functions

The function prototypes for the functions you're required to implement for this solution are provided below. Don't combine the functions or write more functions than I've provided; I want you to use exactly these functions.

`int getValidInteger(int lowerBound, int upperBound);`

The `getValidInteger` function gets a valid integer input from the user using the (inclusive) lower bound and the (inclusive) upper bound. Don't prompt for the user input or print invalid messages to the user because that will confuse the automated grader.

`float averageIntegerArray(int values[], int count);`

The `averageIntegerArray` function averages the first count integers in the values array

`int findExtremeInIntegerArray(int minOrMax, int values[], int count);`

The `findExtremeInIntegerArray` function finds either the minimum or maximum value in the first count integers in the values array. The `minOrMax` parameter tells whether the function should be looking for the minimum or the maximum

### Requirements

Your application must do the following:

- Read in how many heights the user wants to enter (1 to 100)
- Read in that many heights (in integer inches, 1 to 96)
- Calculate the average height and find the minimum and maximum heights in the heights the user entered
- Print the average height (to 2 decimal places), minimum height, and maximum height


### Helpful Hint 1

You should define constants for `MIN` and `MAX` to pass in as arguments to the `findExtremeInIntegerArray` function. This makes your code easier to read both when you call the function and in the body of the function.

### Helpful Hint 2

You have to call all the functions you implemented from the `main` function.

### Required Output Format

Your single line of output needs to be the average height (to 2 decimal places), a single space, the minimum height, a single space, and the maximum height, all on one line

The image below shows my output when I enter 0, 101, 3, 0, 97, 96, 95, and 94; make sure you get the exact same output when you provide the same input.

![imageRef](Programming%20Assignment%204%20Example%20Output.png)

0 and 101 are invalid number of heights to enter and 3 is a valid number of heights to enter. 0 and 97 are invalid heights and 96, 95, and 94 are valid heights. The final line shows average height (to 2 decimal places), a single space, the minimum height, a single space, and the maximum height.

### Submitting Your Solution

- Click on the gray box below that says Load Programming Assignment 4: Height Statisticamator in a new window. **(only in Canvas)**
- Click on the link for this graded assignment from the list of Live Coursework and click the green Submit button under Actions on the left on the assignment page. Upload your main.c file by clicking the Choose File button and navigating to it or by dragging that file onto the upload box. Click the green Submit button on the bottom right of the dialog box.
- Once the test case(s) for the assignment have been run (which typically happens pretty quickly), you can check your results for each test case and your overall score at the top right of the Test Cases section. If you’re happy with your results, you’re done.

If you need (or want) to improve your score, you can look at the test case results, modify your code as appropriate, and resubmit again. If you click on a specific test case, you can get additional information about the output generated by your submission, the expected output for a correct submission, and the difference between the two outputs (in the Pretty Diff section at the bottom of the dialog box).

*All assignments in the course are set for unlimited submissions, so you can resubmit as many times as you want until the due date/time. The grade you’ll receive for the assignment will be the highest grade you achieved across all your submissions for the assignment.*
<br>
