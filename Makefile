hello_world: ./c_1/hello_world.c
	bear -- gcc ./c_1/hello_world.c -o ./build/hello_world
farenheit: ./c_1/celcius.c
	bear -- gcc ./c_1/celcius.c -o ./build/celcius
celcius: ./c_1/farenheit.c
	bear -- gcc ./c_1/farenheit.c -o ./build/farenheit
