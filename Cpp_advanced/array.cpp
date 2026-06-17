# include <iostream>

int main(){

int a[] {2,4,5,6,4,3};

std:: cout<< "The values of array are:-\n";

for(auto value : a){
    std:: cout<<value<<" ";
}

return 0;
}