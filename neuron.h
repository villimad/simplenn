//
// Created by admin on 06.03.2021.
//

#ifndef SIMPLENN_NEURON_H
#define SIMPLENN_NEURON_H

#include <utility>
#include <vector>
using namespace std;

class Neuron{
public:
    int length_input;
    vector<int> input_neuron;
    Neuron(vector<int> input_neuron_c){
        input_neuron = std::move(input_neuron_c);
        length_input = input_neuron.size();
    }

    int res(){
        int sum = 0;
        for (int q = 0; q < length_input; q++){
            sum += input_neuron[q];
        };
        return sum;
    };

};

#endif //SIMPLENN_NEURON_H
