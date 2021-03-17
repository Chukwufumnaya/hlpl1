#include "std_lib_facilities.h"
int factorial(int n)
{
	if(n==0 or n==1){
		return 1;
	}
	else{
		return n*(factorial(n-1));
	}
}
class bad_values{};
int perm(int a, int b){
	if(a < b || a < 0 || b < 0 ) throw bad_values{};
	int p = factorial(a) / factorial(a-b);
	return p;
}
int comb(int a, int b){
	if(a < b || a < 0 || b < 0 ) throw bad_values{};
	int c = perm(a,b) /factorial(b);
	return c;
}
int main()
{
	try{
	int a;
	int b ;
	char sign = ' ';
	cout << "Do you want to calculate Permutations or Combinations or both?\n";
	cout << "Please type in two numbers from keyboard followed by an operation (P-Permutation or C-Combination)\n";
	cin >> a >> sign >> b;
	if(sign == 'P'){
		cout << "P(a,b) = " << perm(a,b);
	}
	else if(sign == 'C'){
		cout << "C(a,b) = " << comb(a,b);
	}
	else if (sign == 'P' && sign =='C'){
		cout << "P(a,b) = " << perm(a,b) << " and C(a,b) = "<< comb(a,b);
	}
		}

   catch (bad_values){
	 cout << "Impossible to calculate\n";
}




	return 0;
}
