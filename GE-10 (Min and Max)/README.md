# Assignment Description

Lecture: Arrays 7: Processing an Array

Objective: Practice processing arrays

### Getting Started

Create a new C project named whatever you want in Visual Studio using the Windows Desktop Wizard or in Xcode.

If you're using Visual Studio, add a main.c file to your project; you can use the main.c template I provided on Canvas if you’d like. If you’re using Xcode, Xcode automatically generates a main.c file for you.

### Requirements

#### Problem 1 - Read in scores from user

Create an `int` array of size 5 and get that many valid (0-100) scores from the user; don't prompt for the user input, and don't print the typical "invalid range" message when they enter an invalid score, because that will confuse the automated grader..

#### Problem 2 - Find the min and max scores the user entered

Walk the array of scores to find the min and max scores in the array.

Print out the min score, a single space, and the max score on one line.

Hint: You might find it helpful to assume that element 0 of the array is both the min score and the max score before you start walking the array

#### Problem 3 - Dynamically allocate the array

You’ll be using the code for this problem to replace some of the code you used to solve the previous problems.

Before the for loop that has the user enter the scores, read in how many scores the user wants to enter; don't prompt for the user input, because that will confuse the automated grader. Make sure the number the user enters is greater than 0.

Unfortunately, the Visual Studio compiler doesn’t let you declare the array with a non-constant size (from the user input in this case), although other C compilers let you do that. To dynamically create an array of the appropriate size, we’re going to need to use pointers. Although we won’t be covering pointers until later in this course, you can allocate an array of the appropriate size using the following code:

`int* scores = malloc(n * sizeof(int));`

The code above assumes you want your array variable to be named `scores` and that `n` is the variable holding the size of the array that the user provided.

In case you’re curious, the line of code above simply allocates memory for an array of size `n`, where each element of the array is an `int`, and then “points” the `scores` variable at that memory.

You’ll need to make one more change if you did the following in your for loops that walk the array:

`for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++)`

Although this a good approach to use for arrays in general, it won’t work when we treat the `scores` variable as a pointer. Instead, you should use the following for those for loops:

`for (int i = 0; i < n; i++)`

The image below shows my output when I enter 0, 3, -1, 0, 50, 101, 101, 100; make sure you get the exact same output when you provide the same inputs.

![imageRef](Graded%20Exercise%2010%20Example%20Output.png)

0 is an invalid number of scores to enter and 3 is a valid number of scores to enter. -1 is an invalid score and 0 is a valid score. 50 is a valid score. 101 and 101 are invalid scores and 100 is a valid score. The final line shows the min and max scores entered.

### Submitting Your Solution
- Click on the gray box below that says Load Graded Exercise 10: Min and Max in a new window. **(only in Canvas)**
- Click on the link for this graded assignment from the list of Live Coursework and click the green Submit button under Actions on the left on the assignment page. Upload your main.c file by clicking the Choose File button and navigating to it or by dragging that file onto the upload box. Click the green Submit button on the bottom right of the dialog box.
- Once the test case(s) for the assignment have been run (which typically happens pretty quickly), you can check your results for each test case and your overall score at the top right of the Test Cases section. If you’re happy with your results, you’re done.

If you need (or want) to improve your score, you can look at the test case results, modify your code as appropriate, and resubmit again. If you click on a specific test case, you can get additional information about the output generated by your submission, the expected output for a correct submission, and the difference between the two outputs (in the Pretty Diff section at the bottom of the dialog box).

*All assignments in the course are set for unlimited submissions, so you can resubmit as many times as you want until the due date/time. The grade you’ll receive for the assignment will be the highest grade you achieved across all your submissions for the assignment.*
<br>
