#include <iostream>

#include "neuron.h"
using namespace std;

int main() {
    Neuron *c = new Neuron({1, 2, 3, 4});
    cout << c->res();
    return 0;
}