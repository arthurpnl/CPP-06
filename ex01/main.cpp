#include "Serializer.hpp"
#include "Data.hpp"

int main(void)
{
    Data *data = new Data;
    data->name = "Arthur";
    data->age = 42;

    uintptr_t raw = Serializer::serialize(data);
	Data *serialized = Serializer::deserialize(raw);

    std::cout << "Original address     : " << data << std::endl;
    std::cout << "Serialized (uintptr) : " << raw << std::endl;
    std::cout << "Deserialized address : " << serialized << std::endl;
    if (serialized == data)
        std::cout << "Pointers are equal   : OK" << std::endl;
    else
        std::cout << "Pointers are equal   : KO" << std::endl;
    std::cout << "Data read back       : " << serialized->name << ", " << serialized->age << std::endl;

	delete data;
	return (0);
}
