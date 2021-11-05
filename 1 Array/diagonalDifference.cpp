#include <iostream>
#include <vector>
using namespace std;
int diagonalDifference(vector<vector<int>> arr) {
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        sum1 += arr[i][i];
        sum2 += arr[i][arr.size()-1-i];
    }
    return abs(sum1-sum2);

}
void staircase(int n) {
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j >= i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void staircase2(int n) {
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j >= n-i-1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;



    }
}
void timeConversion(string s) {
    int h = stoi(s.substr(0,2));
    string ampm = s.substr(8,2);
    if(ampm == "PM")
    {
        if(h != 12) 
        {
            h += 12;
        }
    }
    else
    {
        if(h == 12)
        {
            h = 0;
        }
    }
    cout << h << s.substr(2,6);
}
string timeConversion2(string s) {
    int h = stoi(s.substr(0,2));
    string ampm = s.substr(8,2);
    if(ampm == "PM")
    {
        if(h != 12)
        {
            h += 12;
        }
    }
    else
    {
        if(h == 12)
        {
            return "00" + s.substr(2,6);
        }
    }
    return to_string(h) + s.substr(2,6);
}

string timeConversion3(string s) {
    int h = stoi(s.substr(0,2));
    string ampm = s.substr(8,2);
    if(ampm == "PM")
    {
        if(h != 12)
        {
            h += 12;
        }
    }
    else
    {
        if(h == 12)
        {
            h = 0;
        }
    }

    return to_string(h) + s.substr(2,6);
}
string timeConversion4(string s) {
    int h = stoi(s.substr(0,2));
    string ampm = s.substr(8,2);
    if(ampm == "PM")
    {
        if(h != 12)
        {
            h += 12;
        }
    }
    else
    {
        if(h == 12)
        {
            h = 0;
        }
    }

    return to_string(h) + s.substr(2,6);
}


