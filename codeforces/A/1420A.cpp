/*
Codeforces Round #672 (Div. 2)
Problem: Wheatley decided to try to make a test chamber. He made a nice test chamber, 
but there was only one detail absent — cubes.
For completing the chamber Wheatley needs n cubes. i-th cube has a volume ai.
Wheatley has to place cubes in such a way that they would be sorted in a non-decreasing order 
by their volume. Formally, for each i>1, ai−1≤ai must hold.

To achieve his goal, Wheatley can exchange two neighbouring cubes. It means that for any i>1
you can exchange cubes on positions i−1 and i.
But there is a problem: Wheatley is very impatient. If Wheatley needs more than (n⋅(n−1))/2−1
exchange operations, he won't do this boring work.
Wheatly wants to know: can cubes be sorted under this conditions?

Input

Each test contains multiple test cases.

The first line contains one positive integer t
(1≤t≤1000), denoting the number of test cases. Description of the test cases follows.

The first line of each test case contains one positive integer n
(2≤n≤5⋅104) — number of cubes.

The second line contains n
positive integers ai (1≤ai≤109) — volumes of cubes.

It is guaranteed that the sum of nover all test cases does not exceed 105.

Output

For each test case, print a word in a single line: "YES" (without quotation marks) if the cubes can 
be sorted and "NO" (without quotation marks) otherwise.
*/
/*
Solution Explanation:
We just need to find whether the array is strictly decreasing. If yes then to sort by swapping, (n*(n-1))/2 operations
will be needed, which is greater than (n*(n-1))/2 -1.
*/
    #include <iostream>
    #include <vector>
    #include <cstring>
    #include <algorithm>
    #include<math.h>
     
    using namespace std;
     
     
    void solve()
    {
      int n,flag=0;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      for(int j=n-1;j>0;j--)
      {
        if(arr[j]>=arr[j-1])
        {
          flag=1;
          break;
        }
      }
      if(flag==1)
      {
        cout<<"YES\n";
      }
      else
      {
        cout<<"NO\n";
      }
      
      }
      
    int main(){
      int t;
      cin>>t;
      while(t--)
      {
         solve();
      }
      return 0;
    }