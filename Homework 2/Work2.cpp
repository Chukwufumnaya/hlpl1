#include "std_lib_facilities.h"
int factorial(int n){
 
	if(n == 0 || n == 1){
		return 1;
	}

	else{
		return n * (factorial (n-1) );
	}
}

class bad_values{};
int perm(int a, int b){
	if(a < b || a < 1 || b < 1 ) throw bad_values{};
	return factorial(a) / factorial(a-b);
}
int comb(int a, int b){
	if(a < b || a < 1 || b < 1 ) throw bad_values{};
	return perm(a,b) /factorial(b);
}

int main()
{
	try{
	int a;
	int b ;
	char sign = ' ';
	cout << "Do you want to calculate Permutations or Combinations or both?\n";
	cout << "Please type in two numbers from keyboard followed by an operation (P-Permutation, C-Combination or B-both)\n";
	cin >> a >> sign >> b ;
	if(sign == 'P'){
		cout << "P(a,b) = " << perm(a,b);
	}
	else if(sign == 'C'){
		cout << "C(a,b) = " << comb(a,b);
	}
	else if (sign == 'B'){
		cout << "P(a,b) = " << perm(a,b) << " and C(a,b) = "<< comb(a,b);
	}
		}

   catch (bad_values){
	 cout << "Impossible to calculate\n";
}




	return 0;
}
