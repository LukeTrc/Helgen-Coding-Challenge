# **Helgen Coding Challenge**

## **Luke Treacy**   

#### The Problem?

The problem for this challenge was to create a program which could reverse a string terminated in a null character.

#### Solution.

I started off by imagining the problem in my head. The program will be given an array of characters which end in a null character which needs to be reversed. I had done something similar a few years ago. To solve this problem, I know the null character needs to be found so that will be the first step. 
To find the null character I set up a while loop which would use a pointer to look through the string until the null character was found.

Now that the end pointer was pointing at the last character in the string I could start thinking of what way I would like to swap the characters. I decided to use a while loop which would swap the characters with the help of a temporary storage location. Using a while loop, moving the start and end pointers toward the middle of the string, the letters were swapped until the pointers met in the middle. The first character was held in the temporary location, the end character was swapped to the first sport and then the first character, which is being held in the temporary spot was put to the end.

After some testing and debugging the program was working as expected.

#### Issues Encountered.

While programming this challenge I had the while loop for swapping the characters set as:   "while (str <= end){". This caused some overlapping where the middle letters could be swapped twice. I changed it to be: "while (str < end){", which worked perfectly.

#### Test Programs.

The 4 test Strings that I used to test the program are: 

1 'Helgen is Great!'
2 'Luke Treacy'
3 'Hello World!'
4 'Dublin City University'


