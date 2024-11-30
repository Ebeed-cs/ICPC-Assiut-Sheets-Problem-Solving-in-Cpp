#include <iostream>
#include <string>
using namespace std;

#define  MAX_SIZE 1000
void pop_back(int& N)
{
    N--;
}
void front(char S[], int N)
{
    if (N <= 0)
        cout << endl;
    else
        cout << S[0] << endl;
}

void back(char S[], int N)
{
    cout << S[N - 1] << endl;
}

void sort(char S[], int l, int r)
{
    l--, r--;
    int order_char[26] = { 0 };
    int i = l;
    for (; i <= r; i++)
        order_char[S[i] - 'a']++;
    i = 0;
    while (i < 26)
    {
        if (order_char[i] > 0)
            while (order_char[i]--)
                S[l++] = (i + 'a');
        i++;
    }
}

void reverse(char S[], int l, int r)
{
    l--, r--;
    string reverse_char = "";
    int count = l;
    while (count <= r)
    {
        reverse_char += S[count];
        count++;
    }
    count = reverse_char.size();
    while (l <= r)
    {
        S[l] = reverse_char[--count];
        l++;
    }
}

void print(char S[], int pos)
{
    cout << S[--pos] << endl;
}

void substr(char S[], int l, int r)
{
    l--, r--;
    for (int i = l; i <= r; i++)
        cout << S[i];
    cout << endl;
}
void push_back(char S[], int& N, char x)
{
    if (N < MAX_SIZE)
        S[N++] = x;
    else
        S[N] = x;
}

int main()
{
    char S[MAX_SIZE];
    int N, Q;
    cin >> N >> Q;
    cin >> S;
    string input;
    while (Q--) {
        cin >> input;
        if (input == "pop_back") {
            pop_back(N);
        }
        else if (input == "front") {
            front(S, N);
        }
        else if (input == "back") {
            back(S, N);
        }
        else if (input == "sort") {
            int l, r;
            cin >> l >> r;
            sort(S, min(l, r), max(l, r));
        }
        else if (input == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(S, min(l, r), max(l, r));
        }
        else if (input == "print") {
            int pos;
            cin >> pos;
            print(S, pos);
        }
        else if (input == "substr") {
            int l, r;
            cin >> l >> r;
            substr(S, min(l, r), max(l, r));
        }
        else if (input == "push_back") {
            char x;
            cin >> x;
            push_back(S, N, x);
        }
    }
    return 0;
}
