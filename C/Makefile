OBJ_DIR = ./obj
SRC_DIR = ./src
INC_DIR = ./inc

CFLAGS = -O2 -Wall -I$(INC_DIR)

# 获取源文件列表
SRCS = $(wildcard $(SRC_DIR)/*.c)


# 生成目标文件列表
OBJS = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

main : $(OBJS)
	@echo "SRCS = $(SRCS)"
	gcc -o main.exe $(CFLAGS) $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	gcc -c $(CFLAGS) $< -o $@
	gcc -MM $(CFLAGS) $< > $(@:.o=.d)

ifneq ($(MAKECMDGOALS),clean)
-include $(OBJS:%.o=%.d)
endif

.PHONY: clean
clean:
	rm -rf main.exe $(OBJ_DIR)