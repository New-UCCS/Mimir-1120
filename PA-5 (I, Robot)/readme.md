# Important Info
#### Basically that [pdf](https://github.com/New-UCCS/Mimir-Help-1120/blob/main/I%2C%20Robot/Programming%20Assignment%205%20problem%20and%20solution.pdf) abridged

This assignment asks for a specifically formatted file, Mimir however was not using correctly formatted files.

This situation was bad, I still don't know exactly what went wrong, but basically the files being used had both more lines than necessary, an incorrectly formatted line, and some corrupted lines.

These corrupted lines added major confusion as you could submit the same file twice and get different results from the tests.

I changed my program to get the information about each test case

![Test Case 1](https://github.com/New-UCCS/Mimir-Help-1120/tree/main/PA-5%20(I%2C%20Robot)/assets/Case-1.png) <br>
![Test Case 2](https://github.com/New-UCCS/Mimir-Help-1120/tree/main/PA-5%20(I%2C%20Robot)/assets/Case-2.png) <br>
![Test Case 3](https://github.com/New-UCCS/Mimir-Help-1120/tree/main/PA-5%20(I%2C%20Robot)/assets/Case-3.png) <br>
![Test Case 4](https://github.com/New-UCCS/Mimir-Help-1120/tree/main/PA-5%20(I%2C%20Robot)/assets/Case-4.png) <br>
![Test Case 5](https://github.com/New-UCCS/Mimir-Help-1120/tree/main/PA-5%20(I%2C%20Robot)/assets/Case-5.png) <br>

The format required is very specific:
- 3 floats separated by commas
- (optional) newline at end of line

As you can see from the actual test data, this structure breaks down on the last line. It appears that a number of other lines were added but they are missing the '\n' character.
Also of note is that the reported number of lines does not match the number of lines printed.
I believe that some lines simply cannot be printed as they contain useless data, and could not be null-terminated

Each test case actually has 2, 2, 4, 4, 4 lines respectively.

#### Failure of communication
On the original due date at around 10:30am, I emailed Douglas Miller about the trouble. 
This took place not long after the actual class that I attended online. 
During the class I was working on my program but never got to actually testing in mimir until long after the meeting ended. When I did get this issue I reached out to Miller via Email and was sure to include my file. I have yet to receive a response.

**Fourtnately** I was able to get the program to work with Mimir after 36 attempts and tests.

You can find the workaround near the top main.c. I was able to force the program to only use the files that I knew would work.

I am thankful that Miller did extend the due date by a week, however he proved to be hypocritical in his message announcing this when he stated that we should *"make an earnest effort to reach out for assistance if you 
need it"* because of his radio silence before and after this point 

<br>
<br>

This answer and documentation has been provided by [@Aclamendo](https://github.com/Aclamendo) </br>
Edited by [@Dev-NolanT](https://github.com/dev-nolant)
