//Exercise 7

#include <iostream>

using namespace std;

class odd_iterator{

public:
    odd_iterator(int start_value = 1): n(start_value){
        if ((start_value + 1) % 2 != 0){
            throw domain_error("start_value is not odd.");
        }
    }
    odd_iterator(odd_iterator const &other): n(other.n){

    }
    ~odd_iterator(){

    }
    odd_iterator& operator++(){
        n += 2;
        return *this;
    }
    odd_iterator operator++(int){
        odd_iterator t(*this);
        operator++();
        return (t);
    }
    int& operator* (){
        return n;
    }
    bool operator == (odd_iterator other){
        return (n == other.n);
    }
    bool operator != (odd_iterator other){
        return (n != other.n);
    }
    odd_iterator& operator=(const odd_iterator& other){
        n = other.n;
        return *this;
    }
    odd_iterator& operator=(odd_iterator& other){
        n = other.n;
        return *this;
    }
private:
    int n;
};
int main() {
    odd_iterator odd_num(11), test(5), test2(23);
    cout << "odd number:" << *odd_num << endl;
    cout << "odd_num == test: " << (odd_num == test) << endl;
    cout << "odd_num != test: " << (odd_num != test) << endl;

    ++ odd_num;
    cout << "pre-increment odd number: " << *odd_num << endl;

    odd_num ++;
    cout << "post-increment odd number: " << *odd_num << endl;

    odd_num = test2;
    cout << "odd_num = test2" << endl;
    cout << "odd number: " << *odd_num << endl;
    return 0;
}