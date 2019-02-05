Game: Game.o Player.o
	g++ Game.o Player.o -o Horse
Game.o: Game.cpp Player.h
	g++ -c Game.cpp
Player.o: Player.cpp Player.h
	g++ -c Player.cpp
run:
	./Horse
clean: 
	find . -type f | xargs -n 5 touch
	rm -rf $(OBJS)
