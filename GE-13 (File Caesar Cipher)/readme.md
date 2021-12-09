# Assignment Description

Lecture: File IO 3: Reading a File and File IO 4: Writing a File

Objective: Practice using file IO to encrypt and decrypt messages using the Caesar Cipher

### Getting Started

Download the Graded Exercise 13 Materials zip file from Canvas and unzip it somewhere on your computer.

Create a new C project named whatever you want in Visual Studio using the Windows Desktop Wizard or in Xcode.

If you're using Visual Studio, add the main.c file from the materials zip file to your project. If you’re using Xcode, Xcode automatically generates a main.c file for you; copy and paste the contents of the main.c file from the materials zip file over the one in your Xcode project.

### Requirements

#### Problem 1 - Read messages from a file

Make a text file named original.txt and add some messages that you want to encrypt to that file; remember, messages need to be upper-case alphabetic characters only.

Replace the code that gets a message to be encrypted with code that opens your file and reads in one line at a time from the file until reaching the end of the file. Print out each message as you read it from the file to make sure your file input is working properly.

Caution: You have to name the files exactly as shown above because the automated grader uses those file names to test your code. You can make sure you do this correctly by using the file name constants I declared at the top of the main.c file I gave to you in the materials zip file.

Note: I found it easiest to count the lines in the file first, then I rewound the file to read in the messages, the approach I demonstrated in the Reading a File lecture.

Make sure you close the input file when you’re done with it.

#### Problem 2 - Refactor the message encryption and print to a file

Caution: Stripping the `\n` off the original messages can get tricky. I have 3 messages on 3 separate lines in my file, but that means the first 2 messages have a `\n` at the end and the third message doesn’t. Unfortunately, if I add a `\n` at the end of my third message (making 4 lines in the file, with the last line blank) the third message is printed twice in my output from the previous problem.

I solved this problem by checking if there’s a `\n` in the original message using the `strchr` function. If there is a `\n` character in the original message, I set the `originalMessageLength` variable to be 1 less than what `strnlen` returns on the original message from the file to strip off the `\n` at the end; if the isn’t a `\n` character in the original message I didn’t subtract anything from what `strnlen` returns.

Move the encryption functionality into a separate function like you did in the Functional Caesar Cipher exercise.

Add code that encrypts each message as you read it from the original message file and writes the encrypted message to a new text file called encrypted.txt. Make sure you close the encrypted file when you’re done with it.

You’ll probably need to comment out the decryption code at the end of the `main` function to get your code to compile at this point; do that now.

Remove the code from the previous problem that prints each message as you read it in and run your code. Open your encrypted file with a text editor to make sure the encrypted messages you output are correct. Debug as necessary.

#### Problem 3 - Refactor the message decryption and print to a file

Move the decryption functionality into a separate function like you did in the Functional Caesar Cipher exercise.

Add code that reads in the encrypted messages from the encrypted file, decrypts each message as you read it from the encrypted file and writes the decrypted message to a new text file called decrypted.txt. Make sure you close the encrypted and decrypted files when you’re done with them.

Note: Because I always print a `\n` at the end of each encrypted message in the previous problem, I know I can always subtract 1 from the string length here to strip off the `\n`.

Run your code, then open your decrypted file with a text editor to make sure the decrypted messages you output are correct. Debug as necessary.

Finally, uncomment the two lines of code that print the contents of the encrypted and decrypted files (just above `return(EXIT_SUCCESS);` in the main.c file I gave you). You need those lines to be uncommented for the automated grader to work properly.

### Submitting Your Solution
- Click on the gray box below that says Load Graded Exercise 13: File Caesar Cipher in a new window. **(only in Canvas)**
- Click on the link for this graded assignment from the list of Live Coursework and click the green Submit button under Actions on the left on the assignment page. Upload your main.c file by clicking the Choose File button and navigating to it or by dragging that file onto the upload box. Click the green Submit button on the bottom right of the dialog box.
- Once the test case(s) for the assignment have been run (which typically happens pretty quickly), you can check your results for each test case and your overall score at the top right of the Test Cases section. If you’re happy with your results, you’re done.

Note: You can ignore the warnings you get in the EXECUTION STACK TRACE pane as long as your code generates the expected results.

If you need (or want) to improve your score, you can look at the test case results, modify your code as appropriate, and resubmit again. If you click on a specific test case, you can get additional information about the output generated by your submission, the expected output for a correct submission, and the difference between the two outputs (in the Pretty Diff section at the bottom of the dialog box).

*All assignments in the course are set for unlimited submissions, so you can resubmit as many times as you want until the due date/time. The grade you’ll receive for the assignment will be the highest grade you achieved across all your submissions for the assignment.*
<br>

