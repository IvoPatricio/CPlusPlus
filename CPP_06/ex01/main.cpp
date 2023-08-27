#include "./includes/Serializer.hpp"
#include "./includes/Data.hpp"

int main(void)
{
    Data data[1];

    std::cout << data << std::endl;
    uintptr_t raw = Serializer::serialize(data);
    std::cout << raw << std::endl;
    Data* ptr = Serializer::deserialize(raw);
    std::cout << ptr << std::endl;
}
