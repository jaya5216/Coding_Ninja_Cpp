/*
Sum of Even Numbers till N
Send Feedback
Given a number N, print sum of all even numbers from 1 to N.Input Format :Integer N


Output Format :Required Sum 


Sample Input 1 : 6


Sample Output 1 :
12 */

#include<iostream>

2
using namespace std;

3


4


5
int main(){

6


7
       /*  Read input as specified in the question.

8
	* Print output as specified in the question.

9
	*/

10
    int a,i,sum;

11
    sum=0;

12
  cin>>a;

13
    

14
 for(i=0;i<=a;i++)

15
    {

16
     if(i%2==0)

17
     {

18
          sum=sum+i;

19
        

20
    }   

21
     } cout<<sum;

22
       

23
    

24
}

25
