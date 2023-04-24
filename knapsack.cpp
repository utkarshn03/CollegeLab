#include<iostream>
#include<vector>
using namespace std;

void swap(float *a, float *b){
    float temp = *a;
    *a = *b;
    *b = temp;
}

void sortKnapsack(vector<float> &weight, vector<float> &cost){
    vector<float> divide;
    for(int i=0; i<weight.size(); i++){
        divide.push_back(cost[i]/weight[i]);
    }

    for(int i=0; i<divide.size()-1; i++){
        for(int j=0; j<divide.size()-i-1; j++){
            if (divide[j] < divide[j+1]){
                swap(&divide[j],&divide[j+1]);
                swap(&weight[j],&weight[j+1]);
                swap(&cost[j],&cost[j+1]);
            }
        }
    }
}

int knapsack(vector<float> &weight, vector<float> &cost, int n, int k){
    int kWeight = 0, c=0;
    vector<float> x;

    for(int i=0; i<n; i++){
        x.push_back(0);
    }

    int i = 0; 
    while (kWeight + weight[i] <= k){
        x[i] = 1;
        kWeight += weight[i];
        i += 1;
    } 

    x[i] = (float)(k - kWeight) / weight[i];

    for(int i=0; i<n; i++){
        c = c + (x.at(i) * cost.at(i));
    }

    return c;


}

int main()
{
    vector<float> weight, cost;

    weight = {18, 15, 10};
    cost = {25, 24, 15};
    float n = 3, k = 20;

    sortKnapsack(weight, cost);

    float ans = (float)knapsack(weight, cost, n, k);

    cout<<ans<<endl;
    return 0;
}