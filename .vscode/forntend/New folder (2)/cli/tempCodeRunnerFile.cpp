 #include<bits/stdc++.h>
 using namespace std;
 int rec(int n )
 {
  if( n == 1)
  {
    cout<<n<<" ";
    return 1;
  }
  rec(n-1);
  cout << n<< " ";
 }

 int main()
 {
  int n;
  cin>>n;
  cout<<n<<endl;
  rec(n);

  return 0;
 }