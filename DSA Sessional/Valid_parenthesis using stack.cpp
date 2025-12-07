#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;    // Number of test cases
    cin >> t; // Input number of test cases
    while (t --> 0)
    { // Loop through each test case
        string s;
        cin >> s; // Read the parentheses string

        int n = s.size();      // Length of the string
        char stackArr[100005]; // Array to use as a stack (max length 100,000)
        int top = -1;          // Initialize stack top as -1 → empty stack
        bool check = true;     // Flag to check validity
        for (int i = 0; i < n; i++)
        {                  // Traverse each character in the string
            char c = s[i]; // Current character

            if (c == '(')
            {
                top++;          // If opening parenthesis increase top first
                stackArr[top] = c; // Push onto stack: increment top, then assign
            }
            else if (c == ')')
            {                   // If closing parenthesis
                if (top >= 0)
                {          // If stack is not empty (there is a matching '(')
                    top--; // Pop the top element (matched)
                }
                else
                {                  // Stack empty → no matching '(' for this ')'
                    check = false; // Mark invalid
                    break;         // Stop scanning further
                }
            }
        }
        if (top != -1)
            check = false; // After scanning, if stack not empty → unmatched '(' left

        if(check){
            cout << 1 << '\n';// Print 1 if valid, 0 if invalid
        }
        else
            cout << 0 << '\n';
    }
    return 0; // End of program
}











