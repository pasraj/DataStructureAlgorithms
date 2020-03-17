#include<iostream>
#include<vector>
int main(){
    std::vector<int> numbers;
    int n;
    std::cout << "Enter lenght of numbers : ";
    std::cin>>n;
    std::cout << "Enter Elements of numbers :";
    for(int i=0;i<n;i++){
        int x;
        std::cin>>x;
        numbers.push_back(x);
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if (numbers[j] > numbers[i])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                for(int k=i;k<j;k--){
                    numbers[k] = numbers[k-1];
                }
                numbers[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        std::cout << numbers[i] << " ";
    }
}
