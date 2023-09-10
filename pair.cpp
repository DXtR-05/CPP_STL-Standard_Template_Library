// syntax : pair <data_type1, data_type2> Pair_name

// // CPP program to illustrate Pair in STL
// #include <bits/stdc++.h>
// using namespace std;

// // Driver Code
// int main()
// {
//     // defining a pair
//     pair<int, char> p1;

//     // first part of the pair
//     p1.first = 100;
//     // second part of the pair
//     p1.second = 'G';

//     cout << p1.first << " ";
//     cout << p1.second << endl;

//     return 0;
// }


// Syntax:

// pair <data_type1, data_type2> Pair_name (value1, value2) ;

// CPP program to illustrate
// Initializing of pair STL
#include <iostream>
#include <utility>
using namespace std;

// Driver Code
int main()
{
	// defining a pair
	pair<string, double> PAIR2("GeeksForGeeks", 1.23);

	cout << PAIR2.first << " ";
	cout << PAIR2.second << endl;

	return 0;
}
