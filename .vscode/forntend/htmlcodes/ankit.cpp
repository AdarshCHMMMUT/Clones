// //  #include <bits/stdc++.h>
// //  using namespace std;

// //  int sumElement(int arr[], int n)
// //  {
// //     for(int i = 1; i<n; i++)
// //     arr[0] = arr[0]+ arr[i];

// //    return arr[0];
// //  }
// //  int main()
// //  {
// //     int t;
// //     cin>>t;
// //     while(t--)
// //     {
// //         int n;
// //         cin>>n;
// //         int arr[n];
// //         for(int i=0;i<n; i++)
// //         {
// //             cin>>arr[i];
// //         }

// //         cout<<sumElement(arr,n)<<endl;
// //     }
// //     return 0;
// //  }

// class Solution
// {
// public:
//     int PalinArray(int a[], int n)
//     {
//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             int r;
//             int m = 0;
//             //   int a1 = a[i];
//             for (int j = 0; j < 5; j++)
//             {
//                 r = a[i] % 10;
//                 a[i] = a[i] / 10;
//                 m = r + m * 10;
//                 if (n == 0)
//                 {
//                     break;
//                 }
//             }
//             if (m == n)
//             {
//                 count++;
//             }
//             //   int size = sizeof(a) / sizeof(r[0]);
//         }
//         if (count == n)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
// };


// class Solution{
//     public:
//     //Function to return the count of number of elements in union of two arrays.
//     int doUnion(int a[], int n, int b[], int m) 
//     {
//        int ar[100000];
//        for(int i =0; i<(m+n); i++)
//        {
//          int a1 = a[i];
//          int b1 = b[i];
//          ar[a1] = a1;
//          ar[b1]= b1;
//        }
//        int count =0;
//        for(int i=0; i<10000; i++)
//        {
//            if (ar[i]!=0)
//            count++;
//        }
//        return count;
       
      
//     }
// };

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
   int a = n%2;
   n = n/2;
   if(n==1 &&a ==0)
   {
       return 1;
   }
   else if( a!=0)
   {
       return 0;
   }
   isPowerofTwo(n);
   
    }
};
