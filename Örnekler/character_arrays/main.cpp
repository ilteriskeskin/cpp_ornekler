#include <iostream>
#include <string>

using namespace std;

int main ()
{
  char question1[] = "Adın ne? ";
  string question2 = "Nerede yaşıyorsun? ";
  char answer1 [80];
  string answer2;
  cout << question1;
  cin >> answer1;
  cout << question2;
  cin >> answer2;
  cout << "Merhaba, " << answer1;
  cout << " senin şehrin " << answer2 << "!\n";
  return 0;
}
