//
//  main.cpp
//  12_Breadth_First_Search
//
//  Created by 세광 on 2021/08/10.
//

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7;
int c[7];
vector<int> v[8];

void BFS(int start) {
    queue<int> q;
    q.push(start);
    c[start] = true;
    
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << ' ';
        
        for (int i = 0; i < v[x].size(); i++) {
            int y = v[x][i];
            if (!c[y]) {
                q.push(y);
                c[y] = true;
            }
        }
    }
}

int main() {
    // 1과 2 연결
    v[1].push_back(2);
    v[2].push_back(1);
    // 1과 3 연결
    v[1].push_back(3);
    v[3].push_back(1);
    // 2와 3 연결
    v[2].push_back(3);
    v[3].push_back(2);
    // 2와 4 연결
    v[2].push_back(4);
    v[4].push_back(2);
    // 2와 5 연결
    v[2].push_back(5);
    v[5].push_back(2);
    // 3과 6 연결
    v[3].push_back(6);
    v[6].push_back(3);
    // 3과 7 연결
    v[3].push_back(7);
    v[7].push_back(3);
    // 6과 7 연결
    v[6].push_back(7);
    v[7].push_back(6);
    
    BFS(1);
    cout << endl;
}
