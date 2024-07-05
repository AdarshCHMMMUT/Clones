// syntax for taking input
 
 name =  int input("what is your age");

 //name is variable and what is your name is what that comes before give the popup of input if you have to take string you can avoid writing data type


 //for printing 
 print("sdlkj")
 // for typecasting
 a = 7.37387
 b = int(a);
// syntax for using for loop 
for val in range(3,18,1): // start stop step
 print (val)
// syntax for using if conditions
if num<10:
 print("single digit")

else:
 print("three digit")
 // syntax for defining and writing functions
def functionname(parameter):
 your code
 .
 .
 .
 .
 .
print(functionname(argument))


// to take inhput as a string in python
S = input()
print(S)
// to take input as integar 
N = int(input())
print(N)
//How to accept multiple inputs in a line
A, B, C = map(int,input().split())
print (A, B, C)
//how ot accept multiple integars in multople line
// Solution as follows

A, B = map(int, input().split())
C, D, E = map(int, input().split())
F, G, H, I = map (int, input().split())
print(A, B, C, D, E, F, G, H, I)
// how to accept strings input

A, B = input().split()
C, D, E = input().split()
F, G, H, I = input().split()
print(A, B, C, D, E, F, G, H, I)
//   #Division of inputs. Note '//' are used for integer output
    Q = A // B    
    A = 30
B = 45
C = 36
// some useful mathematical operation in python
#Output the maximum value of A, B, C
print(max(A, B, C))

#Output the minimum value of A, B, C
print(min(A, B, C))

#Output the absolute value of the difference of A and C
print(abs(A - C))

#Output the absolute value of the difference of C and A
print(abs(C - A))

D = 6
E = 9
//Output the remainder when A is divided by D and E
print(A % D)
print(A % E)

//if, else statement and indentation
a = 13
b = 15
if a >= b:
    #do not forget the indentation!!!
    print(a, 'is greater than or equal to', b)        
else:
    #do not forget the indentation!!!
    print(a, 'is lesser than', b)

///lets add the elif statement
a = 14
b = 14
if a > b:
    print(a, 'is greater than', b)
elif a == b:
    print(a, 'is equal to', b)
else:
    print(a, 'is lesser than', b)
sample_list = [5, 3, 2, 4, 1]

print(sample_list)          // print command for a list displays the list
print(sample_list[2])      // output specific index from the list
print(sample_list[-3])      // negative indexing of the list
print(sample_list[1:4])     // slice a list between two indices

sample_list.append(6)       //update the list by adding an element
print(sample_list)

sample_list.sort()          // sort the list in an ascending order
print(sample_list)

sample_list.pop(2)
print(sample_list)          // remove the item at the index 2

print(sample_list + sample_list)    // view the result of list concatenation
A.sort(reverse = True)
//print the array A sorted in descending order
    print(A)   
A = list(map(int, input().split()))
//this is how we store list in puthohn
count_zero = A.count(0)
//this code is used to count the number of times the particular element hass been occured.
    list = []
    // this is how we define a list
//set() returns the unique elements in a list
    unique = list(set(A))
// it is used to sort the list
   list.sort() 
   for i in unique:
   //count() returns the count of an element in a list
        freq.append(A.count(i)) 
// here we have not to define the  data type of argument and parameters
// parameters are the all types of variable which we are using in our function