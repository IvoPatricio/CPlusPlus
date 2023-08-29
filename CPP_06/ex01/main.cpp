#include "./includes/Serializer.hpp"
#include "./includes/Data.hpp"

int main(void)
{
    Data data[1];
    Data *data1 = data;
    Data *data2(data);

    std::cout << data1 << std::endl;
    std::cout << data2 << std::endl;
    std::cout << data << std::endl;
    uintptr_t raw = Serializer::serialize(data);
    std::cout << raw << std::endl;
    Data* ptr = Serializer::deserialize(raw);
    std::cout << ptr << std::endl;
}
