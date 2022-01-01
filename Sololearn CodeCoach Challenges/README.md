## <p align=center>All these challenges are adapted from [Sololearn](https://sololearn.com), and can be found on the Sololearn mobile app.</p>
<br/>
<br/>

# 1. Password Validation [<img style="margin: 10px" src="https://profilinator.rishav.dev/skills-assets/csharp-original.svg" alt="C#" height="30" />](https://github.com/iamstan13y/handy-solutions/blob/ce4821234dcf64b5450b031af5567bb55b9b339e/Sololearn%20CodeCoach%20Challenges/C%23/PasswordValidation.cs) [<img style="margin: 10px" src="https://profilinator.rishav.dev/skills-assets/python-original.svg" alt="Python" height="30" />](https://github.com/iamstan13y/handy-solutions/blob/e019a620d7d725d3f6595e53841a515250eef615/Sololearn%20CodeCoach%20Challenges/Python/PasswordValidation.py)

You're interviewing to join a security team. They want to see you build a password evaluator for your technical interview to validate the input.

### :bookmark_tabs: Task: 
Write a program that takes in a string as input and evaluates it as a valid password. The password is valid if it has at **a minimum 2 numbers, 2 of the following special characters ('!', '@', '#', '$', '%', '&', '*'), and a length of at least 7 characters.**
If the password passes the check, output **'Strong'**, else output **'Weak'**.

**Input Format:** <br/>
_A string representing the password to evaluate._

**Output Format:** <br/>
_A string that says 'Strong' if the input meets the requirements, or 'Weak', if not._

**Sample Input:** <br/>
_Hello@$World19_

**Sample Output:** <br/>
_Strong_

<br/>

> ###  💡 Explanation
> The password has 2 numbers, 2 of the defined special characters, and its length is 14, making it valid.

<br/>

# 2. Popsicles [<img style="margin: 10px" src="https://profilinator.rishav.dev/skills-assets/csharp-original.svg" alt="C#" height="30" />](https://github.com/iamstan13y/handy-solutions/blob/fa27275aff33a36caf9bca58d1ee76bd066727d1/Sololearn%20CodeCoach%20Challenges/C%23/Popsicles.cs)

You have a box of popsicles and you want to give them all away to a group of brothers and sisters. If you have enough left in the box to give them each an even amount you should go for it! If not, they will fight over them, and you should eat them yourself later.

### :bookmark_tabs: Task
Given the number of siblings that you are giving popsicles to, determine if you can give them each an even amount or if you shouldn't mention the popsicles at all.

**Input Format:** <br/>
_Two integer values, the first one represents the number of siblings, and the second one represents the number of popsicles that you have left in the box._

**Output Format:** <br/>
_A string that says **'give away'** if you are giving them away, or **'eat them yourself'** if you will be eating them yourself._

**Sample Input:** <br/>
_3 9_

**Sample Output:** <br/>
_give away_

<br/>

> ###  💡 Explanation
> You can give the popsicles to the brothers and sisters because they would each get the same amount, 3.

<br/>

# 3. Pig Latin [<img style="margin: 10px" src="https://profilinator.rishav.dev/skills-assets/python-original.svg" alt="Python" height="30" />](https://github.com/iamstan13y/handy-solutions/blob/5867bd8bb78bdd5efcc51249489990aa6c79c6ca/Sololearn%20CodeCoach%20Challenges/Python/PigLatin.py)

You have two friends who are speaking Pig Latin to each other! Pig Latin is the same words in the same order except that you take the first letter of each word and put it on the end, then you add 'ay' to the end of that. ("road" = "oadray") 

### :bookmark_tabs: Task:
Your task is to take a sentence in English and turn it into the same sentence in Pig Latin! 

**Input Format:** <br/> 
_A string of the sentence in English that you need to translate into Pig Latin. (no punctuation or capitalization)_

**Output Format:** <br/>
_A string of the same sentence in Pig Latin._

**Sample Input:** <br/>
_"nevermind youve got them"_

**Sample Output:** <br/>
_"evermindnay ouveyay otgay hemtay"_

<br/>

> ###  💡 Explanation
> The output should be the original sentence with each word changed so that they first letter is at the end and then -ay is added after that.

<br/>

# 4. New Driver's License [<img style="margin: 10px" src="https://profilinator.rishav.dev/skills-assets/python-original.svg" alt="Python" height="30" />](https://github.com/iamstan13y/handy-solutions/blob/c23fff777c13fd4c0fa7b96ff652e3697e2cf090/Sololearn%20CodeCoach%20Challenges/Python/NewDriversLicense.py)

You have to get a new driver's license and you show up at the office at the same time as 4 other people. The office says that they will see everyone in alphabetical order and it takes 20 minutes for them to process each new license. All of the agents are available now, and they can each see one customer at a time. How long will it take for you to walk out of the office with your new license?

### :bookmark_tabs: Task: 
Given everyone's name that showed up at the same time, determine how long it will take to get your new license.

**Input Format:** <br/>
_Your input will be a string of your name, then an integer of the number of available agents, and lastly a string of the other four names separated by spaces._

**Output Format:** <br/>
_You will output an integer of the number of minutes that it will take to get your license._

**Sample Input:** <br/>
_'Eric'_ <br/>
_2_ <br/>
_'Adam Caroline Rebecca Frank'_ <br/>

**Sample Output:** <br/> 
_40_

<br/>

> ### 💡 Explanation 
> It will take 40 minutes to get your license because you are in the second group of two to be seen by one of the two available agents.

<br/>

# 5. Deja Vu [<img style="margin: 10px" src="https://profilinator.rishav.dev/skills-assets/python-original.svg" alt="Python" height="30" />](https://github.com/iamstan13y/handy-solutions/blob/bac161865fc1c46438bef3c5bf7ccd33fde2977c/Sololearn%20CodeCoach%20Challenges/Python/DejaVu.py)

### :bookmark_tabs: Task: 
If you are given a string of random letters, your task is to evaluate whether any letter is repeated in the string or if you only hit unique keys while you typing.

**Input Format:** <br/>
_A string of random letter characters (no numbers or other buttons were pressed)._

**Output Format:** <br/> 
_A string that says 'Deja Vu' if any letter is repeated in the input string, or a string that says 'Unique' if there are no repeats._

**Sample Input:** <br/> 
_aaaaaaaghhhhjkll_

**Sample Output:** <br/> 
_Deja Vu_

<br/>

> ### 💡 Explanation: 
> Your program should output 'Deja Vu' because there are many repetitions in 'aaaaaaaghhhhjkll'.

<br/>

# 6. The Spy Life [<img style="margin: 10px" src="https://profilinator.rishav.dev/skills-assets/python-original.svg" alt="Python" height="30" />](https://github.com/iamstan13y/handy-solutions/blob/e790882c03098de9f4662ab9f114add7d8587958/Sololearn%20CodeCoach%20Challenges/Python/TheSpyLife.py)

You are a secret agent, and you receive an encrypted message that needs to be decoded. The code that is being used flips the message backwards and inserts non-alphabetic characters in the message to make it hard to decipher.

### :bookmark_tabs: Task: 
Create a program that will take the encoded message, flip it around, remove any characters that are not a letter or a space, and output the hidden message.

**Input Format:** <br/>  
_A string of characters that represent the encoded message._

**Output Format:** <br/> 
_A string of character that represent the intended secret message._

**Sample Input:** <br/> 
_d89%l++5r19o7W *o=l645le9H_

**Sample Output:** <br/> 
_Hello World_

<br/>

> ### 💡 Explanation 
> If you remove everything that isn't a letter or space from the original message and flip it around, you get 'Hello World'.

<br/>

# 7. That's Odd... [<img style="margin: 10px" src="https://profilinator.rishav.dev/skills-assets/csharp-original.svg" alt="C#" height="30" />](https://github.com/iamstan13y/handy-solutions/blob/b7b71560ada1c6396d71ae1c63866df9bcbc5b78/Sololearn%20CodeCoach%20Challenges/C%23/ThatsOdd.cs) [<img style="margin: 10px" src="https://profilinator.rishav.dev/skills-assets/python-original.svg" alt="Python" height="30" />](https://github.com/iamstan13y/handy-solutions/blob/b7b71560ada1c6396d71ae1c63866df9bcbc5b78/Sololearn%20CodeCoach%20Challenges/Python/ThatsOdd.py)

You want to take a list of numbers and find the sum of all of the even numbers in the list. Ignore any odd numbers.

### :bookmark_tabs: Task: <br/>
_Find the sum of all even integers in a list of numbers._

**Input Format:** <br/>
_The first input denotes the length of the list (N). The next N lines contain the list elements as integers._

**Output Format:** <br/> 
_An integer that represents the sum of only the even numbers in the list._

**Sample Input:** <br/> 
_9 <br/>
1 <br/>
2 <br/>
3 <br/>
4 <br/>
5 <br/>
6 <br/>
7 <br/>
8 <br/>
9_ <br/>

**Sample Output:** <br/>
_20_

<br/>

> ### 💡 Explanation 
> If you add together 2, 4, 6, and 8 from the list, you get a sum of 20.

<br/>

# 8. No Numerals [<img style="margin: 10px" src="https://profilinator.rishav.dev/skills-assets/c-original.svg" alt="C" height="30" />](https://github.com/iamstan13y/handy-solutions/blob/b5634a2e4954ac967c58d46d6b12335570a98a5c/Sololearn%20CodeCoach%20Challenges/C/NoNumerals.c)

You write a phrase and include a lot of number characters (0-9), but you decide that for numbers 10 and under you would rather write the word out instead. Can you go in and edit your phrase to write out the name of each number instead of using the numeral? 

### :bookmark_tabs: Task: <br/> 
_Take a phrase and replace any instances of an integer from 0-10 and replace it with the English word that corresponds to that integer._

**Input Format:**  <br/>
_A string of the phrase in its original form (lowercase)._

**Output Format:** <br/> 
_A string of the updated phrase that has changed the numerals to words._

**Sample Input:** <br/> 
_i need 2 pumpkins and 3 apples_

**Sample Output:** <br/> 
_i need two pumpkins and three apples_

<br/>

> ### 💡 Explanation 
> You would update the phrase to change '2' to 'two' and '3' to 'three'.

<br/>

# 9. Secret Message

You are trying to send a secret message, and you've decided to encode it by replacing every letter in your message with its corresponding letter in a backwards version of the alphabet. 
What do your messages look like?

### :bookmark_tabs: Task: <br/> 
_Create a program that replaces each letter in a message with its corresponding letter in a backwards version of the English alphabet._

**Input Format:** <br/> 
_A string of your message in its normal form._

**Output Format:** <br/> 
_A string of your message once you have encoded it (all lower case)._

**Sample Input:** <br/> 
_Hello World_

**Sample Output:** <br/> 
_svool dliow_

<br/>

> ### 💡 Explanation 
> If you replace each letter in 'Hello World' with the corresponding letter in a backwards version of the alphabet, you get 'svool dliow'.

<br/>
