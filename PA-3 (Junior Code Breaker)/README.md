# Assignment Description

In this assignment, you'll be developing an application that lets the user enter a phrase of 99 characters or less. After they've entered their phrase, your program will count how many times each of the alphabetic characters appears. Case doesn't matter for the counts, so the phrase aAa should yield a count of 3 for the letter A. Finally, the program should print out the original phrase and the count for each character that appears at least once in the phrase.

### Motivation

The letters of the alphabet appear in English prose with specific frequency; for example, the letter A appears far more often than the letter Q. One technique we can use to crack simple substitution encryption techniques (like the Caesar Cipher) is to count the frequency of letter occurrences in the encrypted message, then use information about their frequency in general use to try reasonable character substitutions based on those frequencies to try to crack the encrypted message. This approach works better on longer messages, and it's definitely a brute force cracking technique, but it's better than random guessing!

### Requirements

Your application must do the following:

- Read in a phrase of less than 99 characters from the user; don't prompt for the user input because that will confuse the automated grader.
- Count how many times each alphabetic character appears in the phrase, ignoring case (so A and a both add to the count of As)
- Print out the count for each character that appears at least once in the phrase. You should have one space between each character count output, with all the character counts on a single line 

For example, for the string aAaBbZ, your output should be the following on a single line (be sure to include a newline at the end):

`A3 B2 Z1 `

**Note: The last character count in your output (Z1 for the example above) must be followed by a single space.** Trust me, it’s easier that way, so the automated grader assumes you do that!

### Helpful Hint 1

ctype.h provides useful functions for checking whether or not a character is alphabetic and converting a character to upper or lower case

### Helpful Hint 2

You should use an array of 26 elements to store the counts for each of the characters, with element 0 holding the count of As, element 1 holding the count of Bs, and so on. Be sure to initialize all the elements to 0 before starting to count characters in the user phrase.

As you saw in Lectures Strings 7 and Strings 8, we can treat characters as integers when we choose to do so. Subtracting 'A' from the current character you're processing in the user phrase yields 0 if the current character is 'A', for example. This is exactly the index of the element in your counts array that should hold the running total of As in the user phrase.

### Helpful Hint 3

You should use an array of 26 elements to store the counts for each of the characters, with element 0 holding the count of As, element 1 holding the count of Bs, and so on. Be sure to initialize all the elements to 0 before starting to count characters in the user phrase.

As you saw in Lectures Strings 7 and Strings 8, we can treat characters as integers when we choose to do so. Subtracting 'A' from the current character you're processing in the user phrase yields 0 if the current character is 'A', for example. This is exactly the index of the element in your counts array that should hold the running total of As in the user phrase.

### Required Output Format

Your single line of output should be each letter followed by the count for that letter followed by a space, with only letters that appear 1 or more time included. The image below shows my output when I enter The Clash Rocks!; make sure you get the exact same output when you provide the same input.

![imageRef](Programming%20Assignment%203%20Example%20Output.png)

### Submitting Your Solution

- Click on the gray box below that says Load Programming Assignment 3: Junior Codebreaker in a new window. **(only in Canvas)**
- Click on the link for this graded assignment from the list of Live Coursework and click the green Submit button under Actions on the left on the assignment page. Upload your main.c file by clicking the Choose File button and navigating to it or by dragging that file onto the upload box. Click the green Submit button on the bottom right of the dialog box.
- Once the test case(s) for the assignment have been run (which typically happens pretty quickly), you can check your results for each test case and your overall score at the top right of the Test Cases section. If you’re happy with your results, you’re done.

Note: My call to the getValidMessage function generates warnings on Mimir Classroom; don't worry if your does too, as long as you pass the test cases.

If you need (or want) to improve your score, you can look at the test case results, modify your code as appropriate, and resubmit again. If you click on a specific test case, you can get additional information about the output generated by your submission, the expected output for a correct submission, and the difference between the two outputs (in the Pretty Diff section at the bottom of the dialog box).

*All assignments in the course are set for unlimited submissions, so you can resubmit as many times as you want until the due date/time. The grade you’ll receive for the assignment will be the highest grade you achieved across all your submissions for the assignment.*
<br>

