#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    stringstream ss(s);
    string word;
    vector<string> time;
    while (!ss.eof()) {
       getline(ss,word, ':');
       time.push_back(word);
       cout << word <<endl;
    }
    string timeType = time[2].substr(2,3);
    cout<< "time type"<< timeType << endl;
    int hour_offset = 0;
    if (timeType == "PM")
    {
        if (stoi(time[0]) == 12)
        {
            hour_offset = stoi(time[0]);
        } else {
            hour_offset = stoi(time[0]) + 12;
        }
        
        
        cout << "hour offset" << hour_offset <<endl;
    } else {
        if (stoi(time[0]) == 12)
        {
            hour_offset = 0;
        }else {
            hour_offset = stoi(time[0]);
        }
        
    }
    string hour = to_string(hour_offset);
    if (hour_offset == 0)
    {
        hour = hour + "0";
    }
    if ( 0 < hour_offset < 12)
    {
        hour = "0" + hour;
    }
    
    
    string newTime =  hour + ":" + time[1] + ":" + time[2].substr(0,2);
    cout << "train time: " << newTime << endl;

    return newTime;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
