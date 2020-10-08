# HW1---CS313
Disclaimer: A lotm of internet assistance was used. Nothing was Copy and pasted. However, to be fully honest. a lot of coding ideas were taken from the internet.

Jacob Brown
Group#1 

Part 1: Question 6:
Vignere Cipher. 

Steps for Understanding how this works and how to operate with a vignere Cipher
1) We need to set a key
2) We need to Decide on a message to decipher
3) - For Encryption: Ei = (Pi + Ki) (mod 26)
4) - For Decryption: Pi = (Ei - Ki) (mod 26)
5) An easier way to conceptualize would be to visualize Vigenère algebraically by converting [A-Z] into numbers [0–25].

Resources and links used to help create program
https://www.sanfoundry.com

https://www.tutorialspoint.com

https://www.geeksforgeeks.org

https://www.youtube.com/watch?v=RI8IXHupKTo

https://www.youtube.com/watch?v=RCkGauRMs2A

https://www.youtube.com/watch?v=LaWp_Kq0cKs

Part 2: Question 9:
Array of Random Elements size k
We have a user give us an array size and have it run with random numbers
We use srand() for PseudoRand. This makes it so when the program is run we will always get different numbers
It seems that when using the de Bruijn sequence. The larger the sample, the numbers multiply rapidly.

"Returning to our PIN cracking, the B(10,4) is 10,000 digits long, and contains every single substring for each combination of digits. As we have to type in this string, the concept of Wrap-Around is meaningless, so rather then wrap-around, we simply add the first three numbers again to the end of the strong. So, the maximum number of keypress events is 10,003. Far fewer than the 40,000 that would be required if typing them in completely!"
For no useful reason at all, here are all 10,003 digits of this string" -> Some huge number that would take up way too much space

Resources used
https://rosettacode.org/
https://www.geeksforgeeks.org/
https://www.codespeedy.com/
http://datagenetics.com/blog/october22013/index.html
