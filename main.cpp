#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using dd = double;
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<dd, dd>;
using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<dd>;
using vb = vector<bool>;
using vpi = vector<pi>;
using vpl = vector<pl>;
using vpd = vector<pd>;

template <class T, class V>
istream& operator>>(istream& in, pair<T, V>& pair) {
    return in >> pair.first >> pair.second;
}

template <class T>
istream& operator>>(istream& in, vector<T>& elements) {
    for (size_t i = 0; i < elements.size(); ++i) {
        in >> elements[i];
    }
    return in;
}

template <class Container, class Element>
bool Contains(const Container& container, const Element& element) {
    return container.find(element) != container.end();
}

template <class T>
ostream& operator<<(ostream& out, const vector<T>& elements) {
    for (const T& element : elements) {
        out << element << ' ';
    }
    return out;
}

template <class T, class V>
ostream& operator<<(ostream& out, const pair<T, V>& pair) {
    return out << pair.first << ' ' << pair.second;
}

#define FOR(i,n) for(size_t i=0, i##_len=(n); i<i##_len; ++i)
#define FORF(i,f,n) for(size_t i=(f), i##_len=(n); i<i##_len; ++i)
#define SORT(c) sort((c).begin(), (c).end())
#define SUM(c) accumulate((c).begin(), (c).end(), 0ll)

int main() {
    ios_base::sync_with_stdio(false);
    
    
    
    return 0;
}
