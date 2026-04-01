#include <iostream>

using namespace std;

struct Contestant {
    int id;
    int score;
    
    Contestant(int n, int s) {
        id = n;
        score = s;
    }
    
    bool check(const Contestant &other) const {
        return score > other.score;
    }
    
};

int main() {
    int s1, s2, s3, s4;
        
    Contestant best(0, -1);
    
    
    for (int i = 1; i <= 5; i++) {
        cin >> s1 >> s2 >> s3 >> s4;
        
        Contestant current(i, s1 + s2 + s3 + s4);
        
        if (current.check(best)) {
            best = current;
        }
        
    }
    cout << best.id << " " << best.score << endl;

}
