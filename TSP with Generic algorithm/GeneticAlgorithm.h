#pragma once 
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <time.h>
using namespace std;

class GeneticAlgorithm{
    private:
        int deliveryLocationNum = 0;
        vector<vector<int>> Population;
        double** adjMatrix;

        #pragma region Initialization
        void CreateInitialPopulation() {
            int initPopulationSize = 30;
            srand(time(NULL));

            //setting standard array
            vector<int> stand_arr;
            for(int i=0;i<deliveryLocationNum;i++) stand_arr.push_back(i);

            for (int i = 0; i < initPopulationSize; i++) {
                stand_arr = CreateRandomSolution(stand_arr);
                Population.push_back(stand_arr);
            }
        }
        // create one random solution
        vector<int> CreateRandomSolution(vector<int> stand_arr){

            for (int i = 0; i < deliveryLocationNum; i++) {
                int rn1 = rand() % deliveryLocationNum;
                int rn2 = rand() % deliveryLocationNum;
                swap(stand_arr[rn1], stand_arr[rn2]);
            }
            for (int i = 0; i < stand_arr.size(); i++) {
                cout << stand_arr[i] << " ";
            }
            cout << "\n";
            return stand_arr;
        }
        #pragma endregion

        #pragma region Selection
        void Selection(){
            vector<vector<int>> ParentSet;

        }
        // elitism
        void Elitism(){
            
        }
        // Roulette wheel Selection 
        #pragma endregion

        //reproduction
        //replacement

    public:
        // generic main function
        void Genetic(int locNum, double** matrix){
            deliveryLocationNum = locNum;
            adjMatrix = matrix;
            //create initial population
            CreateInitialPopulation();
            
        }

};