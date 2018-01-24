//
//  main.cpp
//  templates
//
//  Created by Indira Bobburi on 1/19/18.
//  Copyright © 2018 sjsu. All rights reserved.
//

//#include <iostream>
//#include <vector>
//using namespace std;
// 
//template <class T, int max>
//int arrMin(T arr[], int n)
//{
//   int m = max;
//   for (int i = 0; i < n; i++)
//      if (arr[i] < m)
//         m = arr[i];
// 
//   return m;
//}
//
//template <class T, int max>
//int min(T a, int n)
//{
//   int m = max;
//   for (int i = 0; i < n; i++)
//      if (a[i] < m)
//         m = a[i];
// 
//   return m;
//}
//
//void printarray(int a[], int size)
//{
//    for(int i =0; i<size; i++)
//    {
//        cout << a[i] << endl;
//    }
//}
// 
//int main()
//{
//   int arr1[]  = {10, 20, 15, 12};
//   int n1 = sizeof(arr1)/sizeof(arr1[0]);
// 
//   char arr2[] = {1, 2, 3};
//   int n2 = sizeof(arr2)/sizeof(arr2[0]);
// 
//   cout << arrMin<int, 10000>(arr1, n1) << endl;
//   cout << arrMin<char, 256>(arr2, n2) << endl;
//   //printarray(arr1, n1);
//   
//   vector<int> a  = {40, 20, 15, 12};
// 
//   cout << min<vector<int>, 10000>(a, a.size()) << endl;
//   cout << min<int[], 10000>(arr1, n1) << endl;
//   return 0;
//}

/*#include <iostream>
using namespace std;
 
template <int i>
void fun()
{
   //i = 20;
   cout << i;
}
 
int main()
{
   fun<10>();
   return 0;
}*/

#include<iostream>
using namespace std;

/*void fun( int i )
{
cout<<"1st fun\n";
}

void fun( int i, int j=0 )
{
cout<<"2nd fun\n";
}

int main()
{
    fun(10);
}*/

class A
{
public:
 void f() const
 {
 cout<<"inside const f()"<<endl;
 }
 void f()
 {
 cout<<"inside simple f"<<endl;
 }
};

int main()
{
 A ob1;
 ob1.f();
 return 0;
}

