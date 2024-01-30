//
//  main.cpp
//  лаба 1 семестр 2
//
//  Created by Andrey Scherbakov on 30.01.2024.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int max;
    int j=0;
    int s=0;
    srand(time_t(NULL));
    
    int a[n];
    
    for(int i=0; i<n; i++){
        a[i] = rand() % 200 - 100;
    }
    max = a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max = a[i];
            s = 1;
            j=i;
        }
        else
            if(a[i] == max)
                s++;
                
    }
    for(int i =0; i<n; i++){
        cout << a[i]<< endl;
    }
    cout<<"максимальный элемент: "<<max<<endl;
    cout<<"номер: "<<(j+1)<<endl;
    cout<<"количество максимальных элементов: "<<s<<endl;
    
    return 0;
}
