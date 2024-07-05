//  #include <bits/stdc++.h>
// using namespace std;

// int rec(int n) {
//     if (n == 1) {
//         cout << n << " ";
//         return 1;
//     }
//     int result = rec(n - 1); // Recursively call and store the result
//     cout << n << " ";
//     return result; // Return the result of the recursive call
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << n << endl;
//     int result = rec(n);

//     // You can use 'result' if needed, e.g., to print the return value
//     cout << "Return value of rec(n): " << result << endl;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int fac(int n)
// {
//   if(n==1)
//   {
//     return 1;
//   }
//   int  result = n* fac(n-1);
//   return result;
// }
// int main()
// {
//   int n, result;
//   cin>>n;
//    result = fac(n);
//   cout<<result;
//    return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int count( int n)
// {
//   if(n==0)
//   {
//     return 1;
//   }
//  return 1 + count(n/10);
// }
// int main()
// {
//   int n;
   
   
//   cin>>n;
//   int ct = count(n)-1;
//   cout<<ct;
//   return 0;
// }



// #include <iostream>
// using namespace std;

// int count(int n) {
//     // Base case: If n is 0, return 1 (since there is 1 digit)
//     if (n == 0) {
//         return 1;
//     }
    
//     // Recursive case: Divide n by 10 and call count recursively
//     return 1 + count(n / 10);
// }

// int main() {
//     int n;
    
//     cout << "Enter an integer: ";
//     cin >> n;
    
//     int digitCount = count(n);
    
//     cout << "Number of digits: " << digitCount << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int sum = 0;
// int sumdigit(int n)
// {
//   if(n == 0)
//   {
//     return 0;
//   }
  
//   int sum = sumdigit(n/10) + n%10;
//   // printf("%d",sum);
//   return sum;


// }
// int main()
// {
//   int n,sum;
//   cin>>n;

//   cout<<sumdigit(n);
  
  
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int sum = 0;
// int sumn(int n)
// {
//   if(n == 0)
//   {
//     return 0;
//   }
  
//   int sum = n + sumn(n-1);
//   // printf("%d",sum);
//   return sum;


// }
// int main()
// {
//   int n,sum;
//   cin>>n;

//   cout<<sumn(n);
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int sum = 0;
// int F(int n)
// {
//   if(n == 1 || n== 2)
//   {
//     return 1;
//   }
  
//   int sum = F(n-2) + F(n-1);
//   // printf("%d",sum);
//   return sum;


// }
// int main()
// {
//   int n;
//   cin>>n;
//   cout<<F(n);
//   return 0;
// }

#include <iostream>
using namespace std;
 
 
int main()
{
int a, b = 5;
a = !b;
b = !a;
printf ("%d %d", a, b);
return 0;
}



