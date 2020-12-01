#include <iostream>
using namespace std;

int main(){
    int n, minl, maxx = 0;
    cout << "number of columns: ";
    cin >> n;
    int mas[n];
    cout << "heights: ";
    for (int i=0; i<n; ++i){
        cin >> mas[i];
    }
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            if (mas[j]<mas[i]){
                minl=mas[j];
            } else {
                minl=mas[i];
            }
            if (minl*(j-i)>=maxx){
                maxx = minl*(j-i);
            }
        }
    }
    cout << maxx;
    return 0;
}
