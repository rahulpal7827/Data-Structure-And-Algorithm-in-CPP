# include <iostream>
using namespace std;

int main (){
    size_t size=10;
    double *p_salaries{new double[size]};
    int *p_students{new(nothrow) int [size]{}};
    double *p_scores{new(nothrow) double[size]{1,2,3,4,5}};

    if(p_scores){
        for(size_t i{};i<size;++i){
            cout<<"value:"<<*(p_scores+i)<<endl;
        }
    }
    delete[] p_salaries;
    p_salaries=nullptr;

    delete[] p_scores;
    p_scores=nullptr;
    
    delete[] p_students;
    p_students=nullptr;
    return 0;
}