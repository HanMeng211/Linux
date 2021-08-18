BIN=WebGobang      #生成的可执行程序的名字
LDPATH=-L /usr/lib64/mysql
LDFLAG=-lpthread -ljsoncpp -lmysqlclient -lcrypto            #定义变量

$(BIN):webgobang.cpp
	g++ $^ -o $@ $(LDPATH) $(LDFLAG)
.PHONY:clean
clean:
	rm $(BIN)

