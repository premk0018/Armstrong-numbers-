//Display the Armstrong numbers between the intervals.
#include <iostream>
using namespace std;
class Arms{
	int num1, num2, i, num, digit, sum;
	public:
		void fun(){
			 cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  cout << "Armstrong numbers between " << num1 << " and " << num2 << " are: " << endl;
  for(i = num1; i <= num2; i++)
  {
        sum = 0;
        num = i;
        for(; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }
        if(sum == i)
        {
            cout << i << endl;
        }
  }
}
};
int main()
{
   Arms cl;
   cl.fun();
  return 0;
}


