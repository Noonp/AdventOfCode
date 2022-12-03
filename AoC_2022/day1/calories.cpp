#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]){
    /*
    if(argc < 2){
        printf("Utilisation : ./cal input.txt\n");
        exit(1);
    }*/
    fstream input;
    input.open("input.txt", ios::in);
    if(!input){
        printf("Fichier non existant");
        exit(1);
    }
    int i = 0;
    string line;
    string vide("");
    vector<int> tableau;
    while(getline(input,line)){
        if(line.compare(vide) == 0){
            tableau.push_back(i);
            i=0;
        }else{
            int entier = stoi(line);
            i+=entier;
        }
    }

    input.close();
    int tab[3]={0,0,0};
    int pGrand = 0;
    for(int j = 0; j < tableau.size(); j++){
        for(int k = 0; k < 3; k++){

            }
        }


    }
    printf("Le plus grand est = %d\n",pGrand);
    return 0;
}
