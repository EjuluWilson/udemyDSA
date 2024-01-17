#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/*
reviewing c++ for DSA practice
*/
// int main()
// {
//   int x = 7;
//   int a = x++;
//   int b = ++x;
//   // string result = (x < 10) ? "X is lessthan 10" : "it is not less than 10";
//   // string fullName;
//   // const float pi = 3.14;
//   // char a = 65, b = 104;
//   // string sch = "CMU";
//   // int yr = 2024, date = 15, month = 01;
//   // cout << "hello wolrd!!" << endl;
//   // cout << "This is the beginning of DSa with c++\n";
//   // cout << "Today is: " << date << "-" << month << "-" << yr << endl;
//   // cout << "What is your age?\n";
//   // cout<<"These are ASCIIS: " <<a<<" "<<b<<endl;
//   // cout<<"My school is: "<<sch<<endl;
//   // cout<<"enter your full name:\n";
//   // getline(cin,fullName);
//   // cout<<fullName<<endl;
//   cout << x << endl;
//   cout << a << endl;
//   cout << b << endl;
//   return 0;
// }

// loops

// int main(){
//   int nums[6] = {1,2,3,4,5,6};

//   for(int i : nums){
//     cout<<i<<endl;
//   }

//   cout<<"The array size is: " <<sizeof(nums)<<endl;
//   cout<<"The array val 1 size is: " <<sizeof(nums[0])<<endl;
//   cout<<"The number of elements in the array are: " <<sizeof(nums)/sizeof(nums[0])<<endl;

//   return 0;
// }

// structs

// int main(){
//   struct person{
//     string name;
//     int age;
//   };

//   person paul, emma;

//   paul.name = "Omute Paul";
//   paul.age = 50;
//   emma.name = "Omoding Emmanuel";
//   emma.age = 48;

//   cout<<"eMMA's is : " <<emma.age<<endl;
//   emma.age = 20;
//   cout<<"eMMA's is : " <<emma.age<<endl;

//   return 0;
// }

// pointers

// int main()
// {

//   string food = "eboo";
//   string &megu = food;
//   string *foodAdd = &food;

//   cout << "food is : " << food << endl;
//   cout << "megu is : " << megu << endl;
//   cout << "megu address : " << &food << endl;
//   cout << "megu address : " << &megu << endl;
//   cout << "megu address : " << foodAdd << endl;
//   cout << "foodAdd val  : " << *foodAdd << endl;
//   *foodAdd = "echadoi";
//   cout << "food is : " << food << endl;
//   cout << "megu is : " << megu << endl;

//   return 0;
// }

// simple program to swap two numbers

void numSwap(int* x, int* y){
  int z = *x;
  *x = *y;
  *y = z;
}

int main()
{

  int a = 5;
  int b = 10;

  cout << "a is : " << a << endl;
  cout << "b is : " << b << endl;

  numSwap(&a, &b);

  cout << "a is : " << a << endl;
  cout << "b is : " << b << endl;

  return 0;
}