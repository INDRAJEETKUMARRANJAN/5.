
#include <iostream>
#include <string>
#include<algorithm>
#include <cstring>

using namespace std;

int main () {
   char str1[10] = "Indrajeet";
   char str2[10] = "Kumar";
   char str3[10];
   int  len ;

   //   String Length
   len = strlen(str1);
   cout << "length of string1 : " << len << endl;

   // concatenation of String
   strcat( str1, str2);
   cout << "concatention: " << str1 << endl;

   // reverse of the string
   string str = "Indrajeet kumar";
   cout << "Before Reverse : "<< str<< endl;
   reverse(str.begin(),str.end());
   cout <<"After Reverse  : " << str << endl;

   // copying the str1 to the str3
   strcpy( str3, str1);
   cout << "concatentaion : " << str3 << endl;

   // lenghth of str1 after concatenation
   len = strlen(str1);
   cout << "Length of the string: " << len << endl;

   return 0;
}
