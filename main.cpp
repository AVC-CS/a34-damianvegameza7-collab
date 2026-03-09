#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  string month1, month2, month3;
  double rainfall1, rainfall2, rainfall3;
  double avg;

  cin >> month1 >> rainfall1 >> month2 >> rainfall2 >> month3 >> rainfall3;

  avg = (rainfall1 + rainfall2 + rainfall3) / 3;

  cout << fixed << setprecision(2);
  // TODO: Print the result in the required format
  cout <<"The average rainfall for " << month1 << ", " << month2 << ", and "
  << month3 << " is " << avg << endl;
}
