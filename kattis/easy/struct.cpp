#include <iostream>

using namespace std;

struct Log {
    int minutes;
    char letter;
    string result;
};

int main () {
    int count = 0;
    int sum = 0;
    Log team[100];
    
    for (int i = 0; i < 100; i++) {
        
        cin >> team[i].minutes;
        
        if (team[i].minutes == -1) {
            break;
        }
        
        cin >> team[i].letter >> team[i].result;
        
        if (team[i].result == "right") {
            count++;
            sum += team[i].minutes;
            
            for(int j = i - 1; j > -1; j--)
                if (team[i].letter == team[j].letter) {
                    sum += 20;
                }
        }
    }
    
    cout << count << " " << sum << endl;
    
}

