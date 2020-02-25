#include<iostream>
#include<vector>
//sorting
int main(){
    std::vector<int> numbers;
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        numbers.push_back(x);
    }

    for(int i=0;i<10;i++){
        std::cout << numbers[i] << " ";
    }
    std::cout << "\nSorted array by Selection Sort Algorithm"<<std::endl;
    //Selection Sort
    for (int i = 0; i < n-1; ++i)
    {
        for (int j = i+1; j < n; ++j)
        {
            if (numbers[i]>numbers[j])
            {
                int temp = numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=temp;
            }
        }
    }
    //print Sorted array
    for(int i=0;i<n;i++){
        std::cout << numbers[i] << " ";
    }
}