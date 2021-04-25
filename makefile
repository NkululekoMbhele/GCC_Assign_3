driver.exe: tagEnum.o driver.o
	g++ tagEnum.o driver.o -o driver.exe -std=c++2a


tagEnum.o: tagEnum.cpp
	g++ -c tagEnum.cpp -o tagEnum.o -std=c++2a

driver.o: driver.cpp
	g++ -c driver.cpp -o driver.o -std=c++2a

run: 
	./driver.exe

clean:
	rm *.o driver.exe 
