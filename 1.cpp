#include <iostream>
using namespace std;

int main(){
    int ch;
    cout << "num: ";
    cin >> ch;
    int I=1, V=5, X=10, L=50, C=100, D=500, M=1000;
    int i=0, m=0, d=0, c=0, l=0, x=0, v=0, i1=0;
    for (int i=ch; i>=M; i=i-M){
        ++m;
    }
    for (int i=ch-m*M; i>=D; i=i-D){
        ++d;
    }
    for (int i=ch-m*M-d*D; i>=C; i=i-C){
        ++c;
    }
    for (int i=ch-m*M-d*D-c*C; i>=L; i=i-L){
        ++l;
    }
    for (int i=ch-m*M-d*D-c*C-l*L; i>=X; i=i-X){
        ++x;
    }
    for (int i=ch-m*M-d*D-c*C-l*L-x*X; i>=V; i=i-V){
        ++v;
    }
    for (int i=ch-m*M-d*D-c*C-l*L-x*X-v*V; i>=I; --i){
        ++i1;
    }
    for (int i=0; i<=m-1; ++i){
        cout << "M";
    }
    if ((d==1)&&(c==4)){
        cout << "CM";
    }
    else {
        for (int i=0; i<=d-1; ++i){
            cout << "D";
        }
    }
    if ((d==1)&&(c==4)){
        c=0;
    }
    else if (c==4){
        cout << "CD";
    }
    else{
        for (int i=0; i<=c-1; ++i){
            cout << "C";
        }
    }
    if ((l==1)&&(x==4)){
        cout << "XC";
    }
    else {
        for (int i=0; i<=l-1; ++i){
            cout << "L";
        }
    }
    if ((l==1)&&(x==4)){
        x=0;
    }
    else if (x==4){
        cout << "XL";
    }
    else {
        for (int i=0; i<=x-1; ++i){
            cout << "X";
        }
    }
    if ((v==1)&&(i1==4)){
        cout << "IX";
    }
    else {
        for (int i=0; i<=v-1; ++i){
            cout << "V";
        }
    }
    if ((v== 1)&&(i1==4)){
        i1=0;
    }
    else if (i1==4){
        cout << "IV";
    }
    else {
        for (int i=0; i<=i1-1; ++i){
            cout << "I";
        }
    }
    return 0;
}
