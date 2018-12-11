#include<iostream>
#include<string>
using namespace std;

int main()
{
  string word;
    
    cout << "Enter words (to stop, type the word done):" << endl;
    
    int sum = 0;
    cin >> word;
    while(word != "done")
    {
        sum++;
        cin >> word;
    }
        
    cout << "You entered a total of " << sum << " words." << endl;
  return 0;
}