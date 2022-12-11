//Exercise 6

#include <iostream>
#include <algorithm>

using namespace std;
template <typename T>

class vector{
private:
    int size;
    T *data;
    using iterator = T *;
    using const_iterator = const T *;

public:
    vector(int size): size(size), data(new T[size]){

    }
    vector(): size(0), data(0){

    }
    ~vector(){
        size = 0;
        delete[] data;
    }
    const T& operator[](int i) const
    {
        return data[i];
    }
    T& operator[](int i)
    {
        return data[i];
    }
    iterator begin(){
        return &data[0];
    }
    const_iterator begin() const{
        return &data[0];
    }
    iterator end(){
        return &data[size];
    }
    const_iterator end() const{
        return &data[size];
    }
};

int main() {
    vector<int> v(6);
    v[0] = 12;
    v[1] = 4;
    v[2] = 8;
    v[3] = 6;
    v[4] = 2;
    v[5] = 10;
    std::cout << "v: " << v[0] << "," << v[1] << "," << v[2] << "," << v[3] << "," << v[4] << "," << v[5] << std::endl;
    std::cout << "Sort from begin() to end()." << std::endl;
    std::sort(v.begin(), v.end());
    std::cout << "v: " << v[0] << "," << v[1] << "," << v[2] << "," << v[3] << "," << v[4] << "," << v[5] << std::endl;
    return 0;
}