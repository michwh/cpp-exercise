#include<iostream>
#include<string>

using namespace std;

int main()
{
    cout << "Enter words (q to quit): \n";
    int vowel,consonants,other;
    vowel = consonants = other = 0;
    string str;
    while((cin>>str) && (str != "q"))
    {
        str[0] = tolower(str[0]);
        if(!isalpha(str[0]))
        {
            other++;
        }
        else if(str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u')
        {
            vowel++;
        }
        else
        {
            consonants++;
        }
    }
    cout << vowel << " words beginning with vowels\n";
    cout << consonants << " words beginning with consonants\n";
    cout << other << " others\n";
    return 0;
}
