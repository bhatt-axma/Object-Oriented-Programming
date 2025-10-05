#include <iostream>
using namespace std;

int main ()
{
    char str1 [300], str2 [300], concat [200], sub [100];
    int i, j, len=0, end, start, l=0;
    cout << "enter string: ";
    cin >> str1;

    //LENGTH
    while (str1 [l] != '\0') {
        len++;
        l++;
    }
    cout << "length: " << len;

    //REVERSE
    cout << "\nreverse: ";
    for (i=len-1; i>=0; i--)
        cout << str1 [i];

    //SUBSTRING
    cout << "\nenter start ad end index: ";
    cin >> start >> end;
    for (i=start; i<=end && str1 [i] != '\0'; i++) {
        sub [l-start] = str1 [i];
        l++;
    }
    sub [l-start] = '\0';
    cout << "substring : " << sub;

    //CONCATENATION
    cout << "\nenter another string : ";
    cin >> str2;

    while (str2 [j] != '\0') {
        str1 [i] = str2 [j];
        i++;
        j++;
    }

    while (str2 [j] != '\0') {
        str1 [i] = str2 [j];
        i++;
        j++;
    }

    concat [i] = '\0';
    cout << "concatenated: " << concat[end];

    return 0;
}
