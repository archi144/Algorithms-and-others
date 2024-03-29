#include <iostream>
#include <array>

using std::cout;

template<std::size_t SIZE>
int binary_search(std::array<int, SIZE> array,int sought_value)    //function return index if element has been searched
{                                                                  //else return 0
    int min=0;
    int max=array.size();
    int middle=(min+max)/2;
    int current=array[middle];
    while (1)
    {
        if(current>sought_value)
        {
            max=middle-1;
            middle=(min+max)/2;
            current=array[middle];
        }
        else if(current<sought_value)
        {
            min=middle+1;
            middle=(min+max)/2;
            current=array[middle];
        }
        if(current==sought_value)
        {
            cout<<"Find!\nIndex = "<<middle<<std::endl;
            return middle;
        }
        if(max==min)
        {
            cout<<"Element not found"<<std::endl;
            return 0;
        }
    }
}
int main()
{
    std::array<int,8> array{3,5,7,11,13,17,19,23};
    int need_search=5;
    int b = binary_search(array,need_search);

}
