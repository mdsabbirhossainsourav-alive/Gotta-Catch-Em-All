Gotta Catch Em All
You're playing your favorite video game: Pekómon! The objective of the game is, of course, to "Catch Them All".

There are N different Pekómon in the game. The i-th of them has a catching difficulty of Ai.

To catch these Pekómon, you must use Pekóballs. There are two types of Pekóballs available to you:Normal Pekóballs, which cost X coins each.
You need to throw exactly Ai Normal Pekóballs to catch a Pekómon whose catching difficulty is Ai.
Master Pekóballs, which cost Y coins each.
You need to throw only 1 Master Pekóball to catch any Pekómon, no matter what its catching difficulty is.
Find the minimum number of coins you need to spend on buying Pekóballs, so that you can catch all N Pekómon.
## Input Format
The first line of input will contain a single integer T, denoting the number of test cases Each test case consists of two lines of input.
The first line of each test case contains three space-separated integers N,X, and Y — the number of Pekómon, the cost of a Normal Pekóball, and the cost of a Master Pekóball.
The second line contains N space-separated integers A1,A2,…,AN— the catching difficulties of the Pekómon.
## Output Format
For each test case, output on a new line the minimum number of coins you need to spend on buying Pekóballs, in order to catch all N Pekómon.
##Constraints
1 ≤ T ≤ 100

1 ≤ N ≤ 100

1 ≤ X ≤ Y ≤ 100

1 ≤ Ai ≤ 100

​
Sample 1:
## Input
3

4 5 30

4 5 2 3

4 5 30

4 7 2 3

5 3 100

11 23 35 47 59
## Output
70

75

402
## Explanation:
Test case 1: The catching difficulties of the four Pekómon are [4,5,2,3].
It's best to just use Normal Pekóballs for all four of them.
The cost comes out to 5⋅(4+5+2+3)=70, and using less coins is not possible.

Test case 2: The catching difficulties of the four Pekómon are [4,5,2,3].
This time, it's optimal to throw a Master Pekóball at the second Pekómon, and Normal Pekóballs at the rest.
The cost is 5⋅4+30+5⋅2+5⋅3=75.

Test case 3: It's optimal to use a Master Pekóball for the third, fourth, and fifth Pekómon, and Normal Pekóballs for the first two.
The cost is 3⋅11+3⋅23+100+100+100=402.
