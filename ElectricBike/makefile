bike: libos.a bike.o
	ld-arm -o bike -T lpc1114.ld libos.a bike.o

libos.a: vector.o reset.o
	ar-arm crs libos.a vector.o reset.o

vector.o: vector.c
	gcc-arm -g -c vector.c

reset.o: reset.c
	gcc-arm -g -mcpu=Cortex-m0 -c reset.c

bike.o: bike.c
	gcc-arm -g -c bike.c

runBike: bike
	openocd -f interface/stlink-v2.cfg -f target/lpc11xx.cfg -c'program bike verify reset exit'

clean:
	rm bike reset.o vector.o bike.o libos.a
